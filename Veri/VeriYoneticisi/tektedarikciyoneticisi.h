#ifndef TEKTEDARIKCIYONETICISI_H
#define TEKTEDARIKCIYONETICISI_H

#include <QObject>
#include <Veri/VeriYoneticisi/TEMEL_VERI_YONETICISI.h>

class TEKTedarikciYoneticisi : public QObject,
                               public TemelVeriYoneticisi<TEKTedarikci,TEKTedarikciptr>

{
    Q_OBJECT
public:
    explicit TEKTedarikciYoneticisi(QObject *parent = nullptr);

    // 4) Pc'nin Kopyası Oluşturulsun
    Ptr KopyaOlustur(Ptr Kaynak) const;

signals:
private:
    friend QDataStream &operator<<(QDataStream &a,TEKTedarikciYoneticisi &b);
    friend QDataStream &operator>>(QDataStream &a,TEKTedarikciYoneticisi &b);

};

QDataStream &operator<<(QDataStream &a,TEKTedarikciYoneticisi &b);
QDataStream &operator>>(QDataStream &a,TEKTedarikciYoneticisi &b);

#endif // TEKTEDARIKCIYONETICISI_H
