#ifndef TANIMLAR_H
#define TANIMLAR_H

#include <QDate>
#include <QString>
#include <QTime>
#include <QtCore>
#include <QDateTime>
#include <QByteArray>

typedef quint64 IdTuru ;
typedef qint32 Tamsayi ;

typedef double ReelSayi ;

typedef float ParaBirimi ;

typedef QString Metin ;

typedef QDate Tarih ;
typedef QTime Saat ;
typedef QDateTime TarihSaat ;

typedef enum {

    BTNotebook = 1,
    BTLaptop   = 2,
    BTMasaustu = 4,

} BilgisayarTipi ;

typedef enum {

    PTIslemci    = 1,
    PTAnakart    = 2,
    PTRam        = 4,
    PTHdd        = 8,
    PTSsd        = 16,
    PTEkranKarti = 32,
    PTPower      = 64,
    PTKaasa      = 128,
    PTMonitor    = 256,
    PTKlavye     = 512,
    PTFare       = 1024,
} ParcaTipi ;

typedef enum {
    OzEkranBoyutu     = 1,
    OzRenk            = 2,
    OzIsletimSistemi  = 4,
    OzIslemciMarkasi  = 8,
    OzIslemciModeli   = 16,
    OzRam             = 32,
    OzEkranKarti      = 64,
    OzHdd             = 128,
    OzSsd             = 256,

    }  Ozellikler;

typedef QByteArray Resim ;

// Pointer Tanımları

class TEKAlisBilgileri ;
class TEKAlisFaturasi ;
class TEKMarketBilgileri ;
class TEKOzellikler ;
class TEKParcaBilgileri ;
class TEKPcBilgileri ;
class TEKSatisBilgileri ;
class TEKSatisFaturasi ;
class TEKTedarikci ;
class TEKUretilenPc ;

#include <memory>

typedef std::shared_ptr<TEKAlisBilgileri> TEKAlisBilgileriptr;
typedef std::shared_ptr<TEKAlisFaturasi> TEKAlisFaturasiptr;
typedef std::shared_ptr<TEKMarketBilgileri> TEKMarketBilgileriptr;
typedef std::shared_ptr<TEKOzellikler> TEKOzelliklerptr;
typedef std::shared_ptr<TEKParcaBilgileri> TEKParcaBilgileriptr;
typedef std::shared_ptr<TEKPcBilgileri> TEKPcBilgileriptr;
typedef std::shared_ptr<TEKSatisBilgileri> TEKSatisBilgileriptr;
typedef std::shared_ptr<TEKSatisFaturasi> TEKSatisFaturasiptr;
typedef std::shared_ptr<TEKTedarikci> TEKTedarikciptr;
typedef std::shared_ptr<TEKUretilenPc> TEKUretilenPcptr;



#endif // TANIMLAR_H
