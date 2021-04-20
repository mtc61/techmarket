#ifndef TEKSATISFATURASI_H
#define TEKSATISFATURASI_H

#include <QObject>
#include <Veri/tanimlar.h>

class TEKSatisFaturasi : public QObject
{
    Q_OBJECT
public:
    explicit TEKSatisFaturasi(QObject *parent = nullptr);

    IdTuru getId() const;
    TarihSaat getPcSatisTarihi() const;
    Tamsayi getFaturaNo() const;




signals:
    void IdDegisti(const IdTuru &value);
    void PcSatisTarihiDegisti(const TarihSaat &value);
    void FaturaNoDegisti(const Tamsayi &value);


public slots:
    void setId(const IdTuru &value);
    void setPcSatisTarihi(const TarihSaat &value);
    void setFaturaNo(const Tamsayi &value);

private:

    IdTuru  PcSatisFaturaId;
    TarihSaat PcSatisTarihi;
    Tamsayi FaturaNo;


};

QDataStream &operator<<(QDataStream &a, TEKSatisFaturasiptr &b);
QDataStream &operator>>(QDataStream &a, TEKSatisFaturasiptr &b);

#endif // TEKSATISFATURASI_H
