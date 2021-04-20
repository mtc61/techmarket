#include "teksatisbilgileriyoneticisi.h"
#include <Veri/VeriSiniflari/teksatisbilgileri.h>


TEKSatisBilgileriYoneticisi::TEKSatisBilgileriYoneticisi(QObject *parent) : QObject(parent)
{

}

TEKSatisBilgileriYoneticisi::Ptr TEKSatisBilgileriYoneticisi::KopyaOlustur(TEKSatisBilgileriYoneticisi::Ptr Kaynak) const
{
    Ptr Kopya = Yeni();

    Kopya->setId(Kaynak->getId());
    Kopya->setPcSatisFiyati(Kaynak->getPcSatisFiyati());
    Kopya->setPcSatisMiktari(Kaynak->getPcSatisMiktari());
    return Kopya;
}

QDataStream &operator<<(QDataStream &a,TEKSatisBilgileriYoneticisi &b) {
    a << b.EnSonId << b.Veriler ;
}

