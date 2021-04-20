#ifndef TEKPARCABILGILERIYONETICISI_H
#define TEKPARCABILGILERIYONETICISI_H

#include <QObject>
#include <Veri/VeriYoneticisi/TEMEL_VERI_YONETICISI.h>

class TEKParcaBilgileriYoneticisi : public QObject,
        public TemelVeriYoneticisi<TEKParcaBilgileri,TEKParcaBilgileriptr>
{
    Q_OBJECT
public:
    explicit TEKParcaBilgileriYoneticisi(QObject *parent = nullptr);


    // 4) Pc'nin Kopyası Oluşturulsun
    Ptr KopyaOlustur(Ptr Kaynak) const;


signals:
private:
  friend  QDataStream &operator<<(QDataStream &a,TEKParcaBilgileriYoneticisi &b);
  friend  QDataStream &operator>>(QDataStream &a,TEKParcaBilgileriYoneticisi &b);

};

QDataStream &operator<<(QDataStream &a,TEKParcaBilgileriYoneticisi &b);
QDataStream &operator>>(QDataStream &a,TEKParcaBilgileriYoneticisi &b);

#endif // TEKPARCABILGILERIYONETICISI_H
