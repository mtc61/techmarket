#include "tekuretilenpc.h"

TEKUretilenPc::TEKUretilenPc(QObject *parent) : QObject(parent)
{

}

IdTuru TEKUretilenPc::getId() const
{
    return UretilenPcAdi;
}

void TEKUretilenPc::setId(const IdTuru &value)
{
    if(value == UretilenPcAdi)
        return;
    UretilenPcAdi = value;
    emit IdDegisti(UretilenPcAdi);
}

Tamsayi TEKUretilenPc::getGarantiSuresi() const
{
    return GarantiSuresi;
}

void TEKUretilenPc::setGarantiSuresi(const Tamsayi &value)
{
    if(value == GarantiSuresi)
        return;
    GarantiSuresi = value;
    emit GarantiSuresiDegisti(GarantiSuresi);
}

Metin TEKUretilenPc::getIthalatci() const
{
    return Ithalatci;
}

void TEKUretilenPc::setIthalatci(const Metin &value)
{
    if(value == Ithalatci)
        return;
    Ithalatci = value;
    emit IthalatciDegisti(Ithalatci);
}

Metin TEKUretilenPc::getSeri() const
{
    return seri;
}

void TEKUretilenPc::setSeri(const Metin &value)
{
    if(value == seri)
        return;
    seri = value;
    emit SeriDegisti(seri);
}

QDataStream &operator<<(QDataStream &stream , TEKUretilenPcptr &veri){

    stream << veri->getId() << veri->getGarantiSuresi() << veri->getIthalatci() << veri->getSeri();
    return stream;
}

QDataStream &operator>>(QDataStream &stream, TEKUretilenPcptr &veri){

    IdTuru UretilenPcAdi;
    Tamsayi GarantiSuresi;
    Metin Ithalatci;
    Metin  seri;





    stream >> UretilenPcAdi >> GarantiSuresi >> Ithalatci >> seri ;

        veri= std :: make_shared<TEKUretilenPc>();

         veri ->setId(UretilenPcAdi);
         veri ->setGarantiSuresi(GarantiSuresi);
         veri ->setIthalatci(Ithalatci);
         veri ->setSeri(seri);

        return stream;

}


