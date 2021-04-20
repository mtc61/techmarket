#include "tekpcbilgileriyoneticisi.h"
#include <Veri/VeriSiniflari/tekpcbilgileri.h>



TEKPcBilgileriYoneticisi::TEKPcBilgileriYoneticisi(QObject *parent) : QObject(parent), TemelVeriYoneticisi<TEKPcBilgileri, TEKPcBilgileriptr>()
{



}

TEKPcBilgileriYoneticisi::Ptr TEKPcBilgileriYoneticisi::KopyaOlustur(TEKPcBilgileriYoneticisi::Ptr Kaynak) const
{
    Ptr Kopya = Yeni();

    Kopya->setId(Kaynak->getId());
    Kopya->setPcMarkasi(Kaynak->getPcMarkasi());
    Kopya->setBilgisayarTuru(Kaynak->getBilgisayarTuru());
    return Kopya;
}

QDataStream &operator<<(QDataStream &a,TEKPcBilgileriYoneticisi &b) {
 a << b.EnSonId << b.Veriler;
}



