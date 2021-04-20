#include "teksatisbilgileri.h"

TEKSatisBilgileri::TEKSatisBilgileri(QObject *parent) : QObject(parent)
{

}

IdTuru TEKSatisBilgileri::getId() const
{
    return PcSatisId;
}

void TEKSatisBilgileri::setId(const IdTuru &value)
{
    if(value == PcSatisId)
        return;
    PcSatisId = value;
    emit IdDegisti(PcSatisId);
}

Tamsayi TEKSatisBilgileri::getPcSatisMiktari() const
{
    return PcSatisMiktari;
}

void TEKSatisBilgileri::setPcSatisMiktari(const Tamsayi &value)
{
    if(value == PcSatisMiktari)
        return;
    PcSatisMiktari = value;
    emit PcSatisMiktariDegisti(PcSatisMiktari);
}

ParaBirimi TEKSatisBilgileri::getPcSatisFiyati() const
{
    return PcSatisFiyati;
}

ParaBirimi TEKSatisBilgileri::getToplamFiyat() const
{
    return PcSatisFiyati*PcSatisMiktari;
}


    void TEKSatisBilgileri::setPcSatisFiyati(const ParaBirimi &value)
    {
        if(value == PcSatisFiyati)
            return;
        PcSatisFiyati = value;
        emit PcSatisFiyatiDegisti(PcSatisFiyati);
    }

    QDataStream &operator<<(QDataStream &stream , TEKSatisBilgileriptr &veri){

        stream << veri->getId() << veri->getPcSatisFiyati() << veri->getPcSatisMiktari();
        return stream;
    }

    QDataStream &operator>>(QDataStream &stream, TEKSatisBilgileriptr &veri){

        IdTuru PcSatisId;
        Tamsayi PcSatisMiktari;
        ParaBirimi PcSatisFiyati;




        stream >> PcSatisId >> PcSatisMiktari >> PcSatisFiyati ;

            veri= std :: make_shared<TEKSatisBilgileri>();

             veri ->setId(PcSatisId);
             veri ->setPcSatisMiktari(PcSatisMiktari);
             veri ->setPcSatisFiyati(PcSatisFiyati);

            return stream;

    }

