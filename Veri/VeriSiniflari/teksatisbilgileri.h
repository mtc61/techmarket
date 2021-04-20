#ifndef TEKSATISBILGILERI_H
#define TEKSATISBILGILERI_H

#include <QObject>
#include <Veri/tanimlar.h>

class TEKSatisBilgileri : public QObject
{
    Q_OBJECT
public:
    explicit TEKSatisBilgileri(QObject *parent = nullptr);

    IdTuru getId() const;
    Tamsayi getPcSatisMiktari() const;
    ParaBirimi getPcSatisFiyati() const;
    ParaBirimi getToplamFiyat() const;

signals:
    void IdDegisti(const IdTuru &value);
    void PcSatisMiktariDegisti(const Tamsayi &value);
    void PcSatisFiyatiDegisti(const ParaBirimi &value);

public slots :
    void setId(const IdTuru &value);
    void setPcSatisMiktari(const Tamsayi &value);
    void setPcSatisFiyati(const ParaBirimi &value);

private:

    IdTuru PcSatisId;
    Tamsayi PcSatisMiktari;
    ParaBirimi PcSatisFiyati;


};

QDataStream &operator<<(QDataStream &a, TEKSatisBilgileriptr &b);
QDataStream &operator>>(QDataStream &a, TEKSatisBilgileriptr &b);

#endif // TEKSATISBILGILERI_H
