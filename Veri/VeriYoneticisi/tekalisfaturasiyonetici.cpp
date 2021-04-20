#include "tekalisfaturasiyonetici.h"
#include <Veri/VeriSiniflari/tekalisfaturasi.h>

TEKAlisFaturasiYonetici::TEKAlisFaturasiYonetici(QObject *parent) : QObject(parent)
{

}

TEKAlisFaturasiYonetici::Ptr TEKAlisFaturasiYonetici::KopyaOlustur(TEKAlisFaturasiYonetici::Ptr Kaynak) const
{
    Ptr Kopya = Yeni();

    Kopya->setId(Kaynak->getId());
    Kopya->setPcAlisTarihi(Kaynak->getPcAlisTarihi());
    Kopya->setFaturaNo(Kaynak->getFaturaNo());
    return Kopya;
}

QDataStream &operator<<(QDataStream &a,TEKAlisFaturasiYonetici &b) {
    a << b.EnSonId << b.Veriler;
}

