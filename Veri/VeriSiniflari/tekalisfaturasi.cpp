#include "tekalisfaturasi.h"

TEKAlisFaturasi::TEKAlisFaturasi(QObject *parent) : QObject(parent)
{

}

IdTuru TEKAlisFaturasi::getId() const
{
    return PcAlisFaturaId;
}

void TEKAlisFaturasi::setId(const IdTuru &value)
{
    if(value == PcAlisFaturaId)
        return;
    PcAlisFaturaId = value;
    emit IdDegisti(PcAlisFaturaId);
}

TarihSaat TEKAlisFaturasi::getPcAlisTarihi() const
{
    return PcAlisTarihi;
}

void TEKAlisFaturasi::setPcAlisTarihi(const TarihSaat &value)
{
    if(value == PcAlisTarihi)
        return;
    PcAlisTarihi = value;
    emit PcAlisTarihiDegisti(value);
}

Tamsayi TEKAlisFaturasi::getFaturaNo() const
{

    return FaturaNo;
}

void TEKAlisFaturasi::setFaturaNo(const Tamsayi &value)
{
    if(value == FaturaNo)
        return;
    FaturaNo = value;
    emit FaturaNoDegisti(FaturaNo);
}

QDataStream &operator<<(QDataStream &stream , TEKAlisFaturasiptr &veri){

    stream << veri->getId() << veri->getPcAlisTarihi() << veri->getFaturaNo();
    return stream;
}

QDataStream &operator>>(QDataStream &stream, TEKAlisFaturasiptr &veri){

    IdTuru  PcAlisFaturaId;
    TarihSaat PcAlisTarihi;
    Tamsayi FaturaNo;



    stream >> PcAlisFaturaId >> PcAlisTarihi >> FaturaNo ;

        veri= std :: make_shared<TEKAlisFaturasi>();

         veri ->setId(PcAlisFaturaId);
         veri ->setPcAlisTarihi(PcAlisTarihi);
         veri ->setFaturaNo(FaturaNo);

        return stream;

}
