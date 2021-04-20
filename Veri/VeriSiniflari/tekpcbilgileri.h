#ifndef TEKPCBILGILERI_H
#define TEKPCBILGILERI_H

#include <QObject>

#include <Veri/tanimlar.h>


class TEKPcBilgileri : public QObject
{
    Q_OBJECT
public:
    explicit TEKPcBilgileri(QObject *parent = nullptr);

    IdTuru getId() const;
    Metin getPcMarkasi() const;
    BilgisayarTipi getBilgisayarTuru() const;

signals:
    void IdDegisti(const IdTuru &value);
    void PcMarkasiDegisti(const Metin &value);
    void BilgisayarTuruDegisti(const BilgisayarTipi &value);

public slots:

    void setId(const IdTuru &value);
    void setPcMarkasi(const Metin &value);
    void setBilgisayarTuru(const BilgisayarTipi &value);

private:

    IdTuru PcId;
    Metin PcMarkasi;
    BilgisayarTipi BilgisayarTuru;

};

QDataStream &yaz (QDataStream &a, TEKPcBilgileriptr &b);
QDataStream &operator<<(QDataStream &a, TEKPcBilgileriptr &b);
QDataStream &operator>>(QDataStream &a, TEKPcBilgileriptr &b);

#endif // TEKPCBILGILERI_H
