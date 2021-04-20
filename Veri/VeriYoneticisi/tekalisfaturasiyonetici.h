#ifndef TEKALISFATURASIYONETICI_H
#define TEKALISFATURASIYONETICI_H

#include <Veri/VeriYoneticisi/TEMEL_VERI_YONETICISI.h>
#include <QObject>

class TEKAlisFaturasiYonetici : public QObject,
                                public TemelVeriYoneticisi<TEKAlisFaturasi , TEKAlisFaturasiptr >
{
    Q_OBJECT
public:
    explicit TEKAlisFaturasiYonetici(QObject *parent = nullptr);


    // 4) Pc'nin Kopyası Oluşturulsun
    Ptr KopyaOlustur(Ptr Kaynak) const;

signals:
private:
   friend QDataStream &operator<<(QDataStream &a,TEKAlisFaturasiYonetici &b);
   friend QDataStream &operator>>(QDataStream &a,TEKAlisFaturasiYonetici &b);

};

QDataStream &operator<<(QDataStream &a,TEKAlisFaturasiYonetici &b);
QDataStream &operator>>(QDataStream &a,TEKAlisFaturasiYonetici &b);

#endif // TEKALISFATURASIYONETICI_H
