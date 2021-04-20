#include "tekozellikler.h"

TEKOzellikler::TEKOzellikler(QObject *parent) : QObject(parent)
{

}

Ozellikler TEKOzellikler::getOzEkranBoyutu() const
{
    return OzEkranBoyutu;
}

void TEKOzellikler::setOzEkranBoyutu(const Ozellikler &value)
{
    if(value == OzEkranBoyutu)
        return;
    OzEkranBoyutu = value;
    emit OzEkranBoyutuDegisti(OzEkranBoyutu);
}

Ozellikler TEKOzellikler::getOzRenk() const
{
    return OzRenk;
}

void TEKOzellikler::setOzRenk(const Ozellikler &value)
{
    if(value == OzRenk)
        return;
    OzRenk = value;
    emit OzRenkDegisti(OzRenk);
}

Ozellikler TEKOzellikler::getOzIsletimSistemi() const
{
    return OzIsletimSistemi;
}

void TEKOzellikler::setOzIsletimSistemi(const Ozellikler &value)
{
    if(value == OzIsletimSistemi)
        return;
    OzIsletimSistemi = value;
    emit OzIsletimSistemiDegisti(OzIsletimSistemi);
}

Ozellikler TEKOzellikler::getOzIslemciMarkasi() const
{
    return OzIslemciMarkasi;
}

void TEKOzellikler::setOzIslemciMarkasi(const Ozellikler &value)
{
    if(value == OzIslemciMarkasi)
        return;
    OzIslemciMarkasi = value;
    emit OzIslemciMarkasiDegisti(OzIslemciMarkasi);
}

Ozellikler TEKOzellikler::getOzIslemciModeli() const
{
    return OzIslemciModeli;
}

void TEKOzellikler::setOzIslemciModeli(const Ozellikler &value)
{
    if(value == OzIslemciModeli)
        return;
    OzIslemciModeli = value;
    emit OzIslemciModeliDegisti(OzIslemciModeli);
}

Ozellikler TEKOzellikler::getOzRam() const
{
    return OzRam;
}

void TEKOzellikler::setOzRam(const Ozellikler &value)
{
    if(value == OzRam)
        return;
    OzRam = value;
    emit OzRamDegisti(OzRam);
}

Ozellikler TEKOzellikler::getOzEKranKarti() const
{
    return OzEkranKarti;
}

void TEKOzellikler::setOzEkranKarti(const Ozellikler &value)
{
    if(value == OzEkranKarti)
        return;
    OzEkranKarti = value;
    emit OzEkranKartiDegisti(OzEkranKarti);
}

Ozellikler TEKOzellikler::getOzHdd() const
{
    return OzHdd;
}

void TEKOzellikler::setOzHdd(const Ozellikler &value)
{
    if(value == OzHdd)
        return;
    OzHdd = value;
    emit OzHddDegisti(OzHdd);
}

Ozellikler TEKOzellikler::getOzSsd() const
{
    return OzSsd;
}

void TEKOzellikler::setOzSsd(const Ozellikler &value)
{
    if(value == OzSsd)
        return;
    OzSsd = value;
    emit OzSsdDegisti(OzSsd);
}

QDataStream &operator<<(QDataStream &stream , TEKOzelliklerptr &veri){

    stream << veri->getOzEkranBoyutu() << veri->getOzRenk() << veri->getOzIsletimSistemi() << veri->getOzIslemciMarkasi()
           << veri->getOzIslemciModeli() << veri->getOzRam() << veri->getOzEKranKarti() << veri->getOzHdd()
           << veri->getOzSsd() ;
    return stream;
}

QDataStream &operator>>(QDataStream &stream, TEKOzelliklerptr &veri){

    Ozellikler OzEkranBoyutu;
    Ozellikler OzRenk;
    Ozellikler OzIsletimSistemi;
    Ozellikler OzIslemciMarkasi;
    Ozellikler OzIslemciModeli;
    Ozellikler OzRam;
    Ozellikler OzEkranKarti;
    Ozellikler OzHdd;
    Ozellikler OzSsd;


    stream  >> OzEkranBoyutu >> OzRenk >> OzIsletimSistemi >> OzIslemciMarkasi
             >> OzIslemciModeli >> OzRam >> OzEkranKarti >> OzHdd
             >> OzSsd ;
    veri= std :: make_shared<TEKOzellikler>();

         veri ->setOzEkranBoyutu(OzEkranBoyutu);
         veri ->setOzRenk(OzRenk);
         veri ->setOzIsletimSistemi(OzIsletimSistemi);
         veri ->setOzIslemciMarkasi(OzIslemciMarkasi);
         veri ->setOzIslemciModeli(OzIslemciModeli);
         veri ->setOzRam(OzRam);
         veri ->setOzEkranKarti(OzEkranKarti);
         veri ->setOzHdd(OzHdd);
         veri ->setOzSsd(OzSsd);

         return stream;

}
