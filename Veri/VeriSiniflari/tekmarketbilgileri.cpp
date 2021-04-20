#include "tekmarketbilgileri.h"

TEKMarketBilgileri::TEKMarketBilgileri(QObject *parent) : QObject(parent)
{

}

IdTuru TEKMarketBilgileri::getId() const
{
    return TeknoMarketId;
}

void TEKMarketBilgileri::setId(const IdTuru &value)
{
   if(value == TeknoMarketId)
       return;
    TeknoMarketId = value;
    emit IdDegisti(TeknoMarketId);
}

Metin TEKMarketBilgileri::getTeknoMarketAdi() const
{
    return TeknoMarketAdi;
}

void TEKMarketBilgileri::setTeknoMarketAdi(const Metin &value)
{
    if(value == TeknoMarketAdi)
        return;
    TeknoMarketAdi = value;
    emit TeknoMarketAdiDegisti(TeknoMarketAdi);
}

Metin TEKMarketBilgileri::getTeknoMarketAdresi() const
{
    return TeknoMarketAdresi;
}

void TEKMarketBilgileri::setTeknoMarketAdresi(const Metin &value)
{
    if(value == TeknoMarketAdresi)
        return;
    TeknoMarketAdresi = value;
    emit TeknoMarketAdresiDegisti(TeknoMarketAdresi);
}

Metin TEKMarketBilgileri::getTeknoMarketYetkilisi() const
{
    return TeknoMarketYetkilisi;
}

void TEKMarketBilgileri::setTeknoMarketYetkilisi(const Metin &value)
{
    if(value == TeknoMarketYetkilisi)
        return;
    TeknoMarketYetkilisi = value;
    emit TeknoMarketYetkilisiDegisti(TeknoMarketYetkilisi);
}

Tamsayi TEKMarketBilgileri::getTeknoMarketTelefonu() const
{
    return TeknoMarketTelefonu;
}

void TEKMarketBilgileri::setTeknoMarketTelefonu(const Tamsayi &value)
{
    if(value == TeknoMarketTelefonu)
        return;
    TeknoMarketTelefonu = value;
    emit TeknoMarketTelefonuDegisti(TeknoMarketTelefonu);
}


QDataStream &operator<<(QDataStream &stream , TEKMarketBilgileriptr &veri){

    stream << veri->getId() << veri->getTeknoMarketAdi() << veri->getTeknoMarketAdresi() << veri->getTeknoMarketYetkilisi()
           << veri->getTeknoMarketTelefonu() ;
    return stream;
}

QDataStream &operator>>(QDataStream &stream, TEKMarketBilgileriptr &veri){

    IdTuru TeknoMarketId;
    Metin TeknoMarketAdi,TeknoMarketAdresi,TeknoMarketYetkilisi;
    Tamsayi TeknoMarketTelefonu;



    stream >> TeknoMarketId >> TeknoMarketAdi >> TeknoMarketAdresi >> TeknoMarketYetkilisi >> TeknoMarketTelefonu ;

        veri= std :: make_shared<TEKMarketBilgileri>();

         veri ->setId(TeknoMarketId);
         veri ->setTeknoMarketAdi(TeknoMarketAdi);
         veri ->setTeknoMarketAdresi(TeknoMarketAdresi);
         veri ->setTeknoMarketYetkilisi(TeknoMarketYetkilisi);
         veri ->setTeknoMarketTelefonu(TeknoMarketTelefonu);


        return stream;

}
