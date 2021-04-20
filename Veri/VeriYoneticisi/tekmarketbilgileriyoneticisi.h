#ifndef TEKMARKETBILGILERIYONETICISI_H
#define TEKMARKETBILGILERIYONETICISI_H

#include <QObject>
#include <Veri/VeriYoneticisi/TEMEL_VERI_YONETICISI.h>

class TEKMarketBilgileriYoneticisi : public QObject,
                                     public TemelVeriYoneticisi<TEKMarketBilgileri,TEKMarketBilgileriptr>
{
    Q_OBJECT
public:
    explicit TEKMarketBilgileriYoneticisi(QObject *parent = nullptr);


    // 4) Pc'nin Kopyası Oluşturulsun
    Ptr KopyaOlustur(Ptr Kaynak) const;

signals:
private:

    friend QDataStream &operator<<(QDataStream &a,TEKMarketBilgileriYoneticisi &b);
    friend QDataStream &operator>>(QDataStream &a,TEKMarketBilgileriYoneticisi &b);

};

QDataStream &operator<<(QDataStream &a,TEKMarketBilgileriYoneticisi &b);
QDataStream &operator>>(QDataStream &a,TEKMarketBilgileriYoneticisi &b);

#endif // TEKMARKETBILGILERIYONETICISI_H
