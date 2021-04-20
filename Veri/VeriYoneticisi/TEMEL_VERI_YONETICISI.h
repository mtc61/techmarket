#ifndef TEMEL_VERI_YONETICISI_H
#define TEMEL_VERI_YONETICISI_H

#include <Veri/tanimlar.h>
#include <QObject>

template <class V,class P>
class TemelVeriYoneticisi {

public:

    typedef V Veri ;
    typedef P Ptr ;
    typedef QList<Ptr>VeriListesi;
    typedef std::function<bool(Ptr)>Sart ;

    explicit TemelVeriYoneticisi () {EnSonId = 0;}


    // 1) Yeni Pc Oluştur
    Ptr Yeni() const
    {
        Ptr Yeni = std::make_shared<Veri>(); // TEKPcBilgileri
        return Yeni;
    }

    // 2) Listeye Pc Ekleyin
    void Ekle(Ptr Pc)
    {
        Pc->setPcId(EnSonId++);
        Veriler.append(Pc);
    }

    // 3) Listeden Pc Silin
    void Sil(IdTuru PcId)
    {
        for(int i=0; i < Veriler.size(); i++) {

            if(Veriler[i]->getPcId() == PcId){
                Ptr sonuc = Veriler.takeAt(i);
            }
        }
        throw QObject::tr("Aranılan Pc Bulunamadı ! Silme İşlemi İptal Edildi !");
    }
    void Sil(Ptr Pc)
    {
        return Sil(Pc->getPcId());
    }

    // 5) Pc Aramak
    Ptr IlkiniBul(Sart F)
    {
        for(int i=0; i < Veriler.size(); i++) {
            Ptr veri_i = Veriler[i];
            if(F(veri_i)){
                return veri_i;
            }
        }
        throw QObject::tr("Aranılan Veri Bulunamadı !") ;
    }

    Ptr SonuncuyuBul(Sart F)
    {
        for(int i= Veriler.size() - 1; i>=0; i--) {
            Ptr veri_i = Veriler[i];
            if(F(veri_i)){
                return veri_i;
    }

        }
    }

    VeriListesi TumunuBul(Sart F)
    {
        VeriListesi sonuc;
        for(int i=0; i < Veriler.size(); i++) {
            Ptr veri_i = Veriler[i];
            if(F(veri_i)){
                sonuc.append(veri_i);
    }
    }
        return sonuc;
    }


protected:
    VeriListesi Veriler;
    IdTuru EnSonId;




    template<class  H , class M >
    friend QDataStream &operator<<(QDataStream &stream, const TemelVeriYoneticisi<H , M> & veri);

    template<class  F , class B >
    friend QDataStream &operator>>(QDataStream &stream,  TemelVeriYoneticisi<F , B> & veri);

};

 template<class  V , class P >
 QDataStream &operator<<(QDataStream &stream, const TemelVeriYoneticisi<V , P> & Veri){

stream << Veri.enSonId << Veri.veriler ;
return stream ;
}



#endif // TEMEL_VERI_YONETICISI_H
