#include "tekpcbilgileri.h"

TEKPcBilgileri::TEKPcBilgileri(QObject *parent) : QObject(parent)
{

}

IdTuru TEKPcBilgileri::getId() const
{
    return PcId;
}

void TEKPcBilgileri::setId(const IdTuru &value)
{
    if(value == PcId)
        return;
    PcId = value;
    emit IdDegisti(PcId);
}

Metin TEKPcBilgileri::getPcMarkasi() const
{
    return PcMarkasi;
}

void TEKPcBilgileri::setPcMarkasi(const Metin &value)
{
    if(value == PcMarkasi)
        return;
    PcMarkasi = value;
    emit PcMarkasiDegisti(PcMarkasi);
}

BilgisayarTipi TEKPcBilgileri::getBilgisayarTuru() const
{
    return BilgisayarTuru;
}

void TEKPcBilgileri::setBilgisayarTuru(const BilgisayarTipi &value)
{
    if(value == BilgisayarTuru)
        return;
    BilgisayarTuru = value;
    emit BilgisayarTuruDegisti(BilgisayarTuru);
}




QDataStream &yaz(QDataStream &a, TEKPcBilgileriptr &b)
{
    a << b->getId() << b->getBilgisayarTuru() << b->getPcMarkasi() ;
    return a;
}

QDataStream &operator<<(QDataStream &stream , TEKPcBilgileriptr &veri){

    stream << veri->getId() << veri->getBilgisayarTuru() << veri->getPcMarkasi();
    return stream;
}

QDataStream &operator>>(QDataStream &stream, TEKPcBilgileriptr &veri){

    IdTuru PcId;
    Metin PcMarkasi;
    BilgisayarTipi BilgisayarTuru;




    stream >> PcId >> PcMarkasi >> BilgisayarTuru ;

        veri= std :: make_shared<TEKPcBilgileri>();

         veri ->setId(PcId);
         veri ->setPcMarkasi(PcMarkasi);
         veri ->setBilgisayarTuru(BilgisayarTuru);

        return stream;

}

