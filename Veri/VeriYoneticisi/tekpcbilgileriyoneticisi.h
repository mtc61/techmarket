#ifndef TEKPCBILGILERIYONETICISI_H
#define TEKPCBILGILERIYONETICISI_H

#include <QObject>
#include <Veri/tanimlar.h>
#include <Veri/VeriYoneticisi/TEMEL_VERI_YONETICISI.h>

class TEKPcBilgileriYoneticisi : public QObject , public TemelVeriYoneticisi<TEKPcBilgileri,TEKPcBilgileriptr >
{
    Q_OBJECT
public:



    explicit TEKPcBilgileriYoneticisi(QObject *parent = nullptr);



    // 4) Pc'nin Kopyası Oluşturulsun
    Ptr KopyaOlustur(Ptr Kaynak) const;




signals:

private:
  friend   QDataStream &operator<<(QDataStream &a,TEKPcBilgileriYoneticisi &b);
  friend   QDataStream &operator>>(QDataStream &a,TEKPcBilgileriYoneticisi &b);

};
QDataStream &operator<<(QDataStream &a,TEKPcBilgileriYoneticisi &b);
QDataStream &operator>>(QDataStream &a,TEKPcBilgileriYoneticisi &b);

#endif // TEKPCBILGILERIYONETICISI_H
