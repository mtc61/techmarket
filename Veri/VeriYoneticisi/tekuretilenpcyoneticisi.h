#ifndef TEKURETILENPCYONETICISI_H
#define TEKURETILENPCYONETICISI_H

#include <QObject>
#include <Veri/VeriYoneticisi/TEMEL_VERI_YONETICISI.h>

class TEKUretilenPcYoneticisi : public QObject,
        public TemelVeriYoneticisi<TEKUretilenPc,TEKUretilenPcptr>
{
    Q_OBJECT
public:
    explicit TEKUretilenPcYoneticisi(QObject *parent = nullptr);


    // 4) Pc'nin Kopyası Oluşturulsun
    Ptr KopyaOlustur(Ptr Kaynak) const;


signals:
private:
    friend QDataStream &operator<<(QDataStream &a,TEKUretilenPcYoneticisi &b);
   friend  QDataStream &operator>>(QDataStream &a,TEKUretilenPcYoneticisi &b);

};

QDataStream &operator<<(QDataStream &a,TEKUretilenPcYoneticisi &b);
QDataStream &operator>>(QDataStream &a,TEKUretilenPcYoneticisi &b);

#endif // TEKURETILENPCYONETICISI_H
