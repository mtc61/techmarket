#include "tekalisfaturasi.h"
#include <Veri/VeriSiniflari/tekalisfaturasi.h>
TEKAlisFaturasi::TEKAlisFaturasi(QObject *parent) : QObject(parent)
{

}

TEKAlisFaturasi::Ptr TEKAlisFaturasi::KopyaOlustur(TEKAlisFaturasi::Ptr Kaynak) const
{
    Ptr Kopya = Yeni();

    Kopya->setId(Kaynak->getId());
    Kopya->setPcAlisTarihiDegisti(Kaynak->getPcAlisTarihiDegisti());
    Kopya->setFaturaNoDegisti(Kaynak->getFaturaNoDegisti());
    return Kopya;

}
