#include "tekalisbilgileri.h"

TEKAlisBilgileri::TEKAlisBilgileri(QObject *parent) : QObject(parent)
{

}

IdTuru TEKAlisBilgileri::getId() const
{
    return PcAlisId;
}

void TEKAlisBilgileri::setId(const IdTuru &value)
{
    if(value == PcAlisId)
        return;
    PcAlisId = value;
    emit IdDegisti(PcAlisId);
}

Tamsayi TEKAlisBilgileri::getPcAlisMiktari() const
{
    return PcAlisMiktari;
}

void TEKAlisBilgileri::setPcAlisMiktari(const Tamsayi &value)
{
    if(value == PcAlisMiktari)
        return;
    PcAlisMiktari = value;
    emit PcAlisMiktariDegisti(PcAlisMiktari);
}

ParaBirimi TEKAlisBilgileri::getPcAlisFiyati() const
{
    return PcAlisFiyati;
}

void TEKAlisBilgileri::setPcAlisFiyati(const ParaBirimi &value)
{
    if(value == PcAlisFiyati)
        return;
    PcAlisFiyati = value;
    emit PcAlisFiyatiDegisti(PcAlisFiyati);
}

QDataStream &operator<<(QDataStream &stream, TEKAlisBilgileriptr &veri) {
    stream << veri->getId() << veri->getPcAlisMiktari() << veri->getPcAlisFiyati();
    return stream;
}
QDataStream &operator>>(QDataStream &stream, TEKAlisBilgileriptr &veri) {
    IdTuru PcAlisId;
    Tamsayi PcAlisMiktari;
    ParaBirimi PcAlisFiyati;



    stream >> PcAlisId >> PcAlisMiktari >> PcAlisFiyati;
       veri = std:: make_shared<TEKAlisBilgileri>();

       veri -> setId(PcAlisId);
       veri -> setPcAlisMiktari(PcAlisMiktari);
       veri -> setPcAlisFiyati(PcAlisFiyati);

       return stream;
}


