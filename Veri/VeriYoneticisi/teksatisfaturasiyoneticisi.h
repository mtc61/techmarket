#ifndef TEKSATISFATURASIYONETICISI_H
#define TEKSATISFATURASIYONETICISI_H

#include <QObject>
#include <Veri/VeriYoneticisi/TEMEL_VERI_YONETICISI.h>

class TEKSatisFaturasiYoneticisi : public QObject,
                                   public TemelVeriYoneticisi<TEKSatisFaturasi,TEKSatisFaturasiptr>
{
    Q_OBJECT
public:
    explicit TEKSatisFaturasiYoneticisi(QObject *parent = nullptr);

    // 4) Pc'nin Kopyası Oluşturulsun
    Ptr KopyaOlustur(Ptr Kaynak) const;



signals:
private:
   friend QDataStream &operator<<(QDataStream &a,TEKSatisFaturasiYoneticisi &b);
   friend QDataStream &operator>>(QDataStream &a,TEKSatisFaturasiYoneticisi &b);

};

QDataStream &operator<<(QDataStream &a,TEKSatisFaturasiYoneticisi &b);
QDataStream &operator>>(QDataStream &a,TEKSatisFaturasiYoneticisi &b);

#endif // TEKSATISFATURASIYONETICISI_H
