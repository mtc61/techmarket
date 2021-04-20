#ifndef TEKGENELVERIYONETICISI_H
#define TEKGENELVERIYONETICISI_H

#include <QObject>
#include <Veri/VeriYoneticisi/tekalisbilgileriyoneticisi.h>
#include <Veri/VeriYoneticisi/tekalisfaturasiyonetici.h>
#include <Veri/VeriYoneticisi/tekmarketbilgileriyoneticisi.h>
#include <Veri/VeriYoneticisi/tekozellikleryoneticisi.h>
#include <Veri/VeriYoneticisi/tekparcabilgileriyoneticisi.h>
#include <Veri/VeriYoneticisi/tekpcbilgileriyoneticisi.h>
#include <Veri/VeriYoneticisi/teksatisbilgileriyoneticisi.h>
#include <Veri/VeriYoneticisi/teksatisfaturasiyoneticisi.h>
#include <Veri/VeriYoneticisi/tektedarikciyoneticisi.h>
#include <Veri/VeriYoneticisi/tekuretilenpcyoneticisi.h>
#include <Veri/VeriYoneticisi/TEMEL_VERI_YONETICISI.h>


/*
 * Genel veri yöneticisi sınıfı tüm veri yöneticilerini yönetecek sınıftır.
 * Bu sınıftan saecde 1 adet üretilecektir yazılım süresince.
 *
 * Bu sebeple bu sınıftan Singleton (Tekil) tasarım şablonu uygulanacaktır.
*/

class TEKGenelVeriYoneticisi : public QObject
{
    Q_OBJECT


private:

    // Tekil Tasarım Şablonu adım :1 İlklendirici private yaptık

    explicit TEKGenelVeriYoneticisi(QObject *parent = nullptr);

public:

    // Tekil Tasarım şablonu adım :2 static bir fonks eklenir.

    static TEKGenelVeriYoneticisi &msy();

    // adım 3 ve 4 cpp de



    TEKAlisBilgileriYoneticisi   &getAlisBilgileri() ;

    TEKAlisFaturasiYonetici      &getAlisFaturalari() ;

    TEKMarketBilgileriYoneticisi &getMarketBilgileri() ;

    TEKOzelliklerYoneticisi      &getOzellikler() ;

    TEKParcaBilgileriYoneticisi  &getParcaBilgileri() ;

    TEKPcBilgileriYoneticisi     &getPcBilgileri() ;

    TEKSatisBilgileriYoneticisi  &getSatisBilgileri() ;

    TEKSatisFaturasiYoneticisi   &getSatisFaturasi() ;

    TEKTedarikciYoneticisi       &getTedarikci() ;

    TEKUretilenPcYoneticisi      &getUretilenPc() ;

signals:

private:

    TEKAlisBilgileriYoneticisi   AlisBilgileri;
    TEKAlisFaturasiYonetici      AlisFaturalari;
    TEKMarketBilgileriYoneticisi MarketBilgileri;
    TEKOzelliklerYoneticisi      Ozellikler;
    TEKParcaBilgileriYoneticisi  ParcaBilgileri;
    TEKPcBilgileriYoneticisi     PcBilgileri;
    TEKSatisBilgileriYoneticisi  SatisBilgileri;
    TEKSatisFaturasiYoneticisi   SatisFaturasi;
    TEKTedarikciYoneticisi       Tedarikci;
    TEKUretilenPcYoneticisi      UretilenPc;

    friend QDataStream &operator<<(QDataStream &a,TEKGenelVeriYoneticisi &b);
    friend  QDataStream &operator>>(QDataStream &a,TEKGenelVeriYoneticisi &b);




};
QDataStream &operator<<(QDataStream &a,TEKGenelVeriYoneticisi &b);
QDataStream &operator>>(QDataStream &a,TEKGenelVeriYoneticisi &b);


#endif // TEKGENELVERIYONETICISI_H
