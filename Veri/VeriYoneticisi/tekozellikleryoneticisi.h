#ifndef TEKOZELLIKLERYONETICISI_H
#define TEKOZELLIKLERYONETICISI_H

#include <Veri/VeriYoneticisi/TEMEL_VERI_YONETICISI.h>
#include <QObject>

class TEKOzelliklerYoneticisi : public QObject,
                                public TemelVeriYoneticisi<TEKOzellikler,TEKOzelliklerptr >
{

    Q_OBJECT
public:
    explicit TEKOzelliklerYoneticisi(QObject *parent = nullptr);


    // 4) Pc'nin Kopyası Oluşturulsun
    Ptr KopyaOlustur(Ptr Kaynak) const;


signals:
private:
  friend  QDataStream &operator<<(QDataStream &a,TEKOzelliklerYoneticisi &b);
  friend  QDataStream &operator>>(QDataStream &a,TEKOzelliklerYoneticisi &b);

};

QDataStream &operator<<(QDataStream &a,TEKOzelliklerYoneticisi &b);
QDataStream &operator>>(QDataStream &a,TEKOzelliklerYoneticisi &b);

#endif // TEKOZELLIKLERYONETICISI_H
