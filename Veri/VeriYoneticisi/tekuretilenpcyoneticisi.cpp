#include "tekuretilenpcyoneticisi.h"
#include <Veri/VeriSiniflari/tekuretilenpc.h>


TEKUretilenPcYoneticisi::TEKUretilenPcYoneticisi(QObject *parent) : QObject(parent)
{

}

TEKUretilenPcYoneticisi::Ptr TEKUretilenPcYoneticisi::KopyaOlustur(TEKUretilenPcYoneticisi::Ptr Kaynak) const
{
    Ptr Kopya = Yeni();

    Kopya->setId(Kaynak->getId());
    Kopya->setGarantiSuresi(Kaynak->getGarantiSuresi());
    Kopya->setIthalatci(Kaynak->getIthalatci());
    Kopya->setSeri(Kaynak->getSeri());

    return Kopya;
}

QDataStream &operator<<(QDataStream &a,TEKUretilenPcYoneticisi &b) {
    a << b.EnSonId << b.Veriler;
}
