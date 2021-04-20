#ifndef TEKPARCABILGILERI_H
#define TEKPARCABILGILERI_H

#include <QObject>

#include <Veri/tanimlar.h>

class TEKParcaBilgileri : public QObject
{
    Q_OBJECT
public:

    explicit TEKParcaBilgileri(QObject *parent = nullptr);

    ParcaTipi getPTIslemci() const;
    ParcaTipi getPTAnakart() const;
    ParcaTipi getPTRam() const;
    ParcaTipi getPTHdd() const;
    ParcaTipi getPTSsd() const;
    ParcaTipi getPTEkranKarti() const;
    ParcaTipi getPTPower() const;
    ParcaTipi getPTKaasa() const;
    ParcaTipi getPTMonitor() const;
    ParcaTipi  getPTKlavye () const ;
    ParcaTipi  getPTFare () const ;
signals:
    void PTIslemciDegisti(const ParcaTipi &value);
    void PTAnakartDegisti(const ParcaTipi &value);
    void PTRamDegisti(const ParcaTipi &value);
    void PTHddDegisti(const ParcaTipi &value);
    void PTSsdDegisti(const ParcaTipi &value);
    void PTEkranKartiDegisti(const ParcaTipi &value);
    void PTPowerDegisti(const ParcaTipi &value);
    void PTKaasaDegisti(const ParcaTipi &value);
    void PTMonitorDegisti(const ParcaTipi &value);
    void PTKlavyeDegisti(const ParcaTipi &value);
    void PTFareDegisti(const ParcaTipi &value);


public slots:
    void setPTIslemci(const ParcaTipi &value);
    void setPTAnakart(const ParcaTipi &value);
    void setPTRam(const ParcaTipi &value);
    void setPTHdd(const ParcaTipi &value);
    void setPTSsd(const ParcaTipi &value);
    void setPTEkranKarti(const ParcaTipi &value);
    void setPTPower(const ParcaTipi &value);
    void setPTKaasa(const ParcaTipi &value);
    void setPTMonitor(const ParcaTipi &value);
    void setPTKlavye(const ParcaTipi &value);
    void setPTFare(const ParcaTipi &value);

private:


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




};

QDataStream &operator<<(QDataStream &a, TEKParcaBilgileriptr &b);
QDataStream &operator>>(QDataStream &a, TEKParcaBilgileriptr &b);

#endif // TEKPARCABILGILERI_H
