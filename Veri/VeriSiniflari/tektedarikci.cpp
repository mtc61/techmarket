#include "tektedarikci.h"

TEKTedarikci::TEKTedarikci(QObject *parent) : QObject(parent)
{

}

IdTuru TEKTedarikci::getId() const
{
    return TedarikciId;
}

void TEKTedarikci::setId(const IdTuru &value)
{
    if(value == TedarikciId)
        return;
    TedarikciId = value;
    emit IdDegisti(TedarikciId);
}



Metin TEKTedarikci::getPcTedarikcisiAdresi() const
{
    return PcTedarikcisiAdresi;
}

void TEKTedarikci::setPcTedarikcisiAdresi(const Metin &value)
{
    if(value == PcTedarikcisiAdresi)
        return;
    PcTedarikcisiAdresi = value;
    emit PcTedarikcisiAdresiDegisti(PcTedarikcisiAdresi);
}

Tamsayi TEKTedarikci::getPcTedarikcisiTelefonu() const
{
    return PcTedarikcisiTelefonu;
}

void TEKTedarikci::setPcTedarikcisiTelefonu(const Tamsayi &value)
{
    if(value == PcTedarikcisiTelefonu)
        return;
    PcTedarikcisiTelefonu = value;
    emit PcTedarikcisiTelefonuDegisti(PcTedarikcisiTelefonu);
}

Metin TEKTedarikci::getPcTedarikcisiYetkiliFirma() const
{
    return PcTedarikcisiYetkiliFirma;
}

void TEKTedarikci::setPcTedarikcisiYetkiliFirma(const Metin &value)
{
    if(value == PcTedarikcisiYetkiliFirma)
        return;
    PcTedarikcisiYetkiliFirma = value;
    emit PcTedarikcisiYetkiliFirmaDegisti(PcTedarikcisiYetkiliFirma);
}

Metin TEKTedarikci::getPcTedarikcisiAdi() const
{
    return PcTedarikcisiAdi;
}

void TEKTedarikci::setPcTedarikcisiAdi(const Metin &value)
{
    if(value == PcTedarikcisiAdi)
        return;
    PcTedarikcisiAdi = value;
    emit PcTedarikcisiAdiDegisti(PcTedarikcisiAdi);
}

QDataStream &operator << (QDataStream &stream , TEKTedarikciptr &veri){

    stream << veri->getId() << veri->getPcTedarikcisiAdi() << veri->getPcTedarikcisiAdresi() << veri->getPcTedarikcisiTelefonu() << veri-> getPcTedarikcisiYetkiliFirma();

    return stream;
}

QDataStream &operator >> (QDataStream &stream, TEKTedarikciptr &veri){

    IdTuru TedarikciId;
    Metin PcTedarikcisiAdi;
    Metin PcTedarikcisiAdresi;
    Tamsayi PcTedarikcisiTelefonu;
    Metin PcTedarikcisiYetkiliFirma;


    stream >> TedarikciId >> PcTedarikcisiAdi >> PcTedarikcisiAdresi >> PcTedarikcisiTelefonu >>  PcTedarikcisiYetkiliFirma;

         veri= std :: make_shared<TEKTedarikci>();

         veri ->setId(TedarikciId);
         veri ->setPcTedarikcisiAdi(PcTedarikcisiAdi);
         veri ->setPcTedarikcisiAdresi(PcTedarikcisiAdresi);

         return stream;
}
