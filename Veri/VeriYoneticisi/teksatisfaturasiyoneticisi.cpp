#include "teksatisfaturasiyoneticisi.h"
#include <Veri/VeriSiniflari/teksatisfaturasi.h>


TEKSatisFaturasiYoneticisi::TEKSatisFaturasiYoneticisi(QObject *parent) : QObject(parent)
{

}

TEKSatisFaturasiYoneticisi::Ptr TEKSatisFaturasiYoneticisi::KopyaOlustur(TEKSatisFaturasiYoneticisi::Ptr Kaynak) const
{
    Ptr Kopya = Yeni();

    Kopya->setId(Kaynak->getId());
    Kopya->setFaturaNo(Kaynak->getFaturaNo());
    Kopya->setPcSatisTarihi(Kaynak->getPcSatisTarihi());
    return Kopya;
}

QDataStream &operator<<(QDataStream &a,TEKSatisFaturasiYoneticisi &b) {
    a << b.EnSonId << b.Veriler;
}

