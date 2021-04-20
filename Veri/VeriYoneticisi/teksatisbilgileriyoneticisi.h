#ifndef TEKSATISBILGILERIYONETICISI_H
#define TEKSATISBILGILERIYONETICISI_H

#include <QObject>
#include <Veri/VeriYoneticisi/TEMEL_VERI_YONETICISI.h>

class TEKSatisBilgileriYoneticisi : public QObject,
                                    public TemelVeriYoneticisi<TEKSatisBilgileri,TEKSatisBilgileriptr>
{
    Q_OBJECT
public:
    explicit TEKSatisBilgileriYoneticisi(QObject *parent = nullptr);


    // 4) Pc'nin Kopyası Oluşturulsun
    Ptr KopyaOlustur(Ptr Kaynak) const;


signals:
private:
   friend QDataStream &operator<<(QDataStream &a,TEKSatisBilgileriYoneticisi &b);
   friend    QDataStream &operator>>(QDataStream &a,TEKSatisBilgileriYoneticisi &b);

};

QDataStream &operator<<(QDataStream &a,TEKSatisBilgileriYoneticisi &b);
QDataStream &operator>>(QDataStream &a,TEKSatisBilgileriYoneticisi &b);

#endif // TEKSATISBILGILERIYONETICISI_H
