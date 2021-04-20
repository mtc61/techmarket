#ifndef TEKALISBILGILERIYONETICISI_H
#define TEKALISBILGILERIYONETICISI_H

#include <Veri/VeriYoneticisi/TEMEL_VERI_YONETICISI.h>
#include <QObject>

class TEKAlisBilgileriYoneticisi : public QObject,
         public TemelVeriYoneticisi<TEKAlisBilgileri , TEKAlisBilgileriptr >

{
    Q_OBJECT
public:
    explicit TEKAlisBilgileriYoneticisi(QObject *parent = nullptr);


    // 4) Pc'nin Kopyası Oluşturulsun
    Ptr KopyaOlustur(Ptr Kaynak) const;


signals:
private:
   friend  QDataStream &operator<<(QDataStream &a,TEKAlisBilgileriYoneticisi &b);
   friend  QDataStream &operator>>(QDataStream &a,TEKAlisBilgileriYoneticisi &b);

};

    QDataStream &operator<<(QDataStream &a,TEKAlisBilgileriYoneticisi &b);
    QDataStream &operator>>(QDataStream &a,TEKAlisBilgileriYoneticisi &b);

#endif // TEKALISBILGILERIYONETICISI_H
