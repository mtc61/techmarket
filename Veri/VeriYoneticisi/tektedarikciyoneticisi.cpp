#include "tektedarikciyoneticisi.h"
#include <Veri/VeriSiniflari/tektedarikci.h>

TEKTedarikciYoneticisi::TEKTedarikciYoneticisi(QObject *parent) : QObject(parent)
{

}

TEKTedarikciYoneticisi::Ptr TEKTedarikciYoneticisi::KopyaOlustur(TEKTedarikciYoneticisi::Ptr Kaynak) const
{
    Ptr Kopya = Yeni();

    Kopya->setId(Kaynak->getId());
    Kopya->setPcTedarikcisiAdi(Kaynak->getPcTedarikcisiAdi());
    Kopya->setPcTedarikcisiAdresi(Kaynak->getPcTedarikcisiAdresi());
    Kopya->setPcTedarikcisiTelefonu(Kaynak->getPcTedarikcisiTelefonu());
    Kopya->setPcTedarikcisiYetkiliFirma(Kaynak->getPcTedarikcisiYetkiliFirma());
    return Kopya;
}

QDataStream &operator<<(QDataStream &a,TEKTedarikciYoneticisi &b) {
    a << b.EnSonId << b.Veriler;
}

