#include "tekmarketbilgileriyoneticisi.h"
#include <Veri/VeriSiniflari/tekmarketbilgileri.h>

TEKMarketBilgileriYoneticisi::TEKMarketBilgileriYoneticisi(QObject *parent) : QObject(parent)
{

}

TEKMarketBilgileriYoneticisi::Ptr TEKMarketBilgileriYoneticisi::KopyaOlustur(TEKMarketBilgileriYoneticisi::Ptr Kaynak) const
{
    Ptr Kopya = Yeni();

    Kopya->setId(Kaynak->getId());
    Kopya->setTeknoMarketAdi(Kaynak->getTeknoMarketAdi());
    Kopya->setTeknoMarketAdresi(Kaynak->getTeknoMarketAdresi());
    Kopya->setTeknoMarketYetkilisi(Kaynak->getTeknoMarketYetkilisi());
    Kopya->setTeknoMarketTelefonu(Kaynak->getTeknoMarketTelefonu());

    return Kopya;
}

QDataStream &operator<<(QDataStream &a,TEKMarketBilgileriYoneticisi &b) {
    a << b.EnSonId << b.Veriler;
}

