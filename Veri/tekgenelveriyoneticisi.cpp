#include "tekgenelveriyoneticisi.h"

TEKGenelVeriYoneticisi::TEKGenelVeriYoneticisi(QObject *parent) : QObject(parent)
{

}

TEKGenelVeriYoneticisi &TEKGenelVeriYoneticisi::msy()
{

    // Tekil tsarım sablonu adım  3: static nesene tanımlanır

    static TEKGenelVeriYoneticisi nesne ;

    // Tekil tasarım sablonu adım 4 : static nesne döndürülür

    return nesne ;

}

TEKAlisBilgileriYoneticisi &TEKGenelVeriYoneticisi::getAlisBilgileri()
{
    return AlisBilgileri;
}


TEKAlisFaturasiYonetici &TEKGenelVeriYoneticisi::getAlisFaturalari()
{
    return AlisFaturalari;
}

TEKMarketBilgileriYoneticisi &TEKGenelVeriYoneticisi::getMarketBilgileri()
{
    return MarketBilgileri;
}

TEKOzelliklerYoneticisi &TEKGenelVeriYoneticisi::getOzellikler()
{
    return Ozellikler;
}

TEKParcaBilgileriYoneticisi &TEKGenelVeriYoneticisi::getParcaBilgileri()
{
    return ParcaBilgileri;
}

TEKPcBilgileriYoneticisi &TEKGenelVeriYoneticisi::getPcBilgileri()
{
    return PcBilgileri;
}

TEKSatisBilgileriYoneticisi &TEKGenelVeriYoneticisi::getSatisBilgileri()
{
    return SatisBilgileri;
}

TEKSatisFaturasiYoneticisi &TEKGenelVeriYoneticisi::getSatisFaturasi()
{
    return SatisFaturasi;
}

TEKTedarikciYoneticisi &TEKGenelVeriYoneticisi::getTedarikci()
{
    return Tedarikci;
}

TEKUretilenPcYoneticisi &TEKGenelVeriYoneticisi::getUretilenPc()
{
    return UretilenPc;
}

QDataStream &operator<<(QDataStream &a,TEKGenelVeriYoneticisi &b){

    a << b.AlisBilgileri << b.AlisFaturalari << b.MarketBilgileri << b.Ozellikler << b.ParcaBilgileri << b.PcBilgileri
          << b.SatisBilgileri << b.SatisFaturasi << b.Tedarikci << b.UretilenPc ;
    return a;

}



QDataStream &operator>>(QDataStream &a,TEKGenelVeriYoneticisi &b){

    a >> b.AlisBilgileri >> b.AlisFaturalari >> b.MarketBilgileri >> b.Ozellikler >> b.ParcaBilgileri >> b.PcBilgileri
      >> b.SatisBilgileri >> b.SatisFaturasi >> b.Tedarikci >> b.UretilenPc;
    return a;

}



