#include "tekozellikleryoneticisi.h"
#include <Veri/VeriSiniflari/tekozellikler.h>

TEKOzelliklerYoneticisi::TEKOzelliklerYoneticisi(QObject *parent) : QObject(parent)
{

}

TEKOzelliklerYoneticisi::Ptr TEKOzelliklerYoneticisi::KopyaOlustur(TEKOzelliklerYoneticisi::Ptr Kaynak) const
{
    Ptr Kopya = Yeni();

    Kopya->setOzEkranBoyutu(Kaynak->getOzEkranBoyutu());
    Kopya->setOzEkranKarti(Kaynak->getOzEKranKarti());
    Kopya->setOzHdd(Kaynak->getOzHdd());
    Kopya->setOzIslemciMarkasi(Kaynak->getOzIslemciMarkasi());
    Kopya->setOzIslemciModeli(Kaynak->getOzIslemciModeli());
    Kopya->setOzIsletimSistemi(Kaynak->getOzIsletimSistemi());
    Kopya->setOzRam(Kaynak->getOzRam());
    Kopya->setOzRenk(Kaynak->getOzRenk());
    Kopya->setOzSsd(Kaynak->getOzSsd());
    return Kopya;
}

QDataStream &operator<<(QDataStream &a,TEKOzelliklerYoneticisi &b) {
    a << b.EnSonId << b.Veriler ;
}

