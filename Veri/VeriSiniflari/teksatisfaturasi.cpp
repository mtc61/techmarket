#include "teksatisfaturasi.h"

TEKSatisFaturasi::TEKSatisFaturasi(QObject *parent) : QObject(parent)
{

}

IdTuru TEKSatisFaturasi::getId() const
{
    return PcSatisFaturaId;
}

void TEKSatisFaturasi::setId(const IdTuru &value)
{
    if(value == PcSatisFaturaId)
        return;
    PcSatisFaturaId = value;
    emit IdDegisti(PcSatisFaturaId);
}

TarihSaat TEKSatisFaturasi::getPcSatisTarihi() const
{
    return PcSatisTarihi;
}

void TEKSatisFaturasi::setPcSatisTarihi(const TarihSaat &value)
{
    if(value == PcSatisTarihi)
        return;
    PcSatisTarihi = value;
    emit PcSatisTarihiDegisti(value);
}



Tamsayi TEKSatisFaturasi::getFaturaNo() const
{
    return FaturaNo;
}

void TEKSatisFaturasi::setFaturaNo(const Tamsayi &value)
{
    if(value == FaturaNo)
        return;
    FaturaNo = value;
    emit FaturaNoDegisti(FaturaNo);
}

QDataStream &operator<<(QDataStream &stream , TEKSatisFaturasiptr &veri){

    stream << veri->getId() << veri->getPcSatisTarihi() << veri->getFaturaNo();
    return stream;
}

QDataStream &operator>>(QDataStream &stream, TEKSatisFaturasiptr &veri){

    IdTuru  PcSatisFaturaId;
    TarihSaat PcSatisTarihi;
    Tamsayi FaturaNo;




    stream >> PcSatisFaturaId >> PcSatisTarihi >> FaturaNo ;

        veri= std :: make_shared<TEKSatisFaturasi>();

         veri ->setId(PcSatisFaturaId);
         veri ->setPcSatisTarihi(PcSatisTarihi);
         veri ->setFaturaNo(FaturaNo);

        return stream;

}

