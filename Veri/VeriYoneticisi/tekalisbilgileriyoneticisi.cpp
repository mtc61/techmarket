#include "tekalisbilgileriyoneticisi.h"
#include <Veri/VeriSiniflari/tekalisbilgileri.h>


TEKAlisBilgileriYoneticisi::TEKAlisBilgileriYoneticisi(QObject *parent) : QObject(parent)
{

}

TEKAlisBilgileriYoneticisi::Ptr TEKAlisBilgileriYoneticisi::KopyaOlustur(TEKAlisBilgileriYoneticisi::Ptr Kaynak) const
{
    Ptr Kopya = Yeni();

    Kopya->setId(Kaynak->getId());
    Kopya->setPcAlisMiktari(Kaynak->getPcAlisMiktari());
    Kopya->setPcAlisFiyati(Kaynak->getPcAlisFiyati());
    return Kopya;
}

QDataStream &operator<<(QDataStream &a,TEKAlisBilgileriYoneticisi &b) {
    a << b.EnSonId << b.Veriler;
}
