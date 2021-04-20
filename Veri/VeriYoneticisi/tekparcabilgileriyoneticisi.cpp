#include "tekparcabilgileriyoneticisi.h"
#include <Veri/VeriSiniflari/tekparcabilgileri.h>

TEKParcaBilgileriYoneticisi::TEKParcaBilgileriYoneticisi(QObject *parent) : QObject(parent)
{

}

TEKParcaBilgileriYoneticisi::Ptr TEKParcaBilgileriYoneticisi::KopyaOlustur(TEKParcaBilgileriYoneticisi::Ptr Kaynak) const
{
    Ptr Kopya = Yeni();

    Kopya->setPTIslemci(Kaynak->getPTIslemci());
    Kopya->setPTAnakart(Kaynak->getPTAnakart());
    Kopya->setPTRam(Kaynak->getPTRam());
    Kopya->setPTHdd(Kaynak->getPTHdd());
    Kopya->setPTSsd(Kaynak->getPTSsd());
    Kopya->setPTEkranKarti(Kaynak->getPTEkranKarti());
    Kopya->setPTPower(Kaynak->getPTPower());
    Kopya->setPTKaasa(Kaynak->getPTKaasa());
    Kopya->setPTMonitor(Kaynak->getPTMonitor());
    Kopya->setPTKlavye(Kaynak->getPTKlavye());
    Kopya->setPTFare(Kaynak->getPTFare());
    return Kopya;
}

QDataStream &operator<<(QDataStream &a,TEKParcaBilgileriYoneticisi &b) {
    a << b.EnSonId << b.Veriler ;
}
