#include "tekparcabilgileri.h"

TEKParcaBilgileri::TEKParcaBilgileri(QObject *parent) : QObject(parent)
{

}


ParcaTipi TEKParcaBilgileri::getPTIslemci() const
{
    return PTIslemci;
}

void TEKParcaBilgileri::setPTIslemci(const ParcaTipi &value)
{
    if(value == PTIslemci)
        return;
    PTIslemci = value;
    emit PTIslemciDegisti(PTIslemci);
}

ParcaTipi TEKParcaBilgileri::getPTAnakart() const
{
    return PTAnakart;
}

void TEKParcaBilgileri::setPTAnakart(const ParcaTipi &value)
{
    if(value == PTAnakart)
        return;
    PTAnakart = value;
    emit PTAnakartDegisti(PTAnakart);
}

ParcaTipi TEKParcaBilgileri::getPTRam() const
{
    return PTRam;
}

void TEKParcaBilgileri::setPTRam(const ParcaTipi &value)
{
    if(value == PTRam)
        return;
    PTRam = value;
    emit PTRamDegisti(PTRam);
}

ParcaTipi TEKParcaBilgileri::getPTHdd() const
{
    return PTHdd;
}

void TEKParcaBilgileri::setPTHdd(const ParcaTipi &value)
{
    if(value == PTHdd)
        return;
    PTHdd = value;
    emit PTHddDegisti(PTHdd);
}

ParcaTipi TEKParcaBilgileri::getPTSsd() const
{
    return PTSsd;
}

void TEKParcaBilgileri::setPTSsd(const ParcaTipi &value)
{
    if(value == PTSsd)
        return;
    PTSsd = value;
    emit PTSsdDegisti(PTSsd);
}

ParcaTipi TEKParcaBilgileri::getPTEkranKarti() const
{
    return PTEkranKarti;
}

void TEKParcaBilgileri::setPTEkranKarti(const ParcaTipi &value)
{
    if(value == PTEkranKarti)
        return;
    PTEkranKarti = value;
    emit PTEkranKartiDegisti(PTEkranKarti);
}

ParcaTipi TEKParcaBilgileri::getPTPower() const
{
    return PTPower;
}

void TEKParcaBilgileri::setPTPower(const ParcaTipi &value)
{
    if(value == PTPower)
        return;
    PTPower = value;
    emit PTPowerDegisti(PTPower);
}

ParcaTipi TEKParcaBilgileri::getPTKaasa() const
{
    return PTKaasa;
}

void TEKParcaBilgileri::setPTKaasa(const ParcaTipi &value)
{
    if(value == PTKaasa)
        return;
    PTKaasa = value;
    emit PTKaasaDegisti(PTKaasa);
}

ParcaTipi TEKParcaBilgileri::getPTMonitor() const
{
    return PTMonitor;
}

void TEKParcaBilgileri::setPTMonitor(const ParcaTipi &value)
{
    if(value == PTMonitor)
        return;
    PTMonitor = value;
    emit PTMonitorDegisti(PTMonitor);
}

ParcaTipi TEKParcaBilgileri::getPTKlavye() const
{
    return PTKlavye ;
}

void TEKParcaBilgileri::setPTKlavye(const ParcaTipi &value)
{
    if(value == PTKlavye)
        return;
    PTKlavye = value;
    emit PTKlavyeDegisti(PTKlavye);
}

ParcaTipi TEKParcaBilgileri::getPTFare() const
{
    return PTFare;
}

void TEKParcaBilgileri::setPTFare(const ParcaTipi &value)
{
    if(value == PTFare)
        return;
    PTFare = value;
    emit PTFareDegisti(PTFare);
}


QDataStream &operator<<(QDataStream &stream , TEKParcaBilgileriptr &veri){

    stream << veri->getPTIslemci() << veri->getPTAnakart() << veri->getPTRam() << veri->getPTHdd()
           << veri->getPTSsd() << veri->getPTEkranKarti() << veri->getPTPower() << veri->getPTKaasa()
           << veri->getPTMonitor() <<  veri->getPTKlavye() << veri->getPTFare() ;
    return stream;
}

QDataStream &operator>>(QDataStream &stream, TEKParcaBilgileriptr &veri){


    ParcaTipi PTIslemci ;
    ParcaTipi PTAnakart ;
    ParcaTipi PTRam ;
    ParcaTipi PTHdd ;
    ParcaTipi PTSsd ;
    ParcaTipi PTEkranKarti ;
    ParcaTipi PTPower ;
    ParcaTipi PTKaasa ;
    ParcaTipi PTMonitor ;
    ParcaTipi PTKlavye ;
    ParcaTipi PTFare;


    stream  >> PTIslemci >> PTAnakart >> PTRam >> PTHdd
             >> PTSsd >> PTEkranKarti >> PTPower >> PTKaasa
             >> PTMonitor >> PTKlavye >> PTFare ;

    veri= std :: make_shared<TEKParcaBilgileri>();

         veri ->setPTIslemci(PTIslemci);
         veri ->setPTAnakart(PTAnakart);
         veri ->setPTRam(PTRam);
         veri ->setPTHdd(PTHdd);
         veri ->setPTSsd(PTSsd);
         veri ->setPTEkranKarti(PTEkranKarti);
         veri ->setPTPower(PTPower);
         veri ->setPTKaasa(PTKaasa);
         veri ->setPTMonitor(PTMonitor);
         veri ->setPTKlavye(PTKlavye);
         veri ->setPTFare(PTFare);

         return stream;

}

