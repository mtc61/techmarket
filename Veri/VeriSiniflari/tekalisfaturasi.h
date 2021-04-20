#ifndef TEKALISFATURASI_H
#define TEKALISFATURASI_H

#include <QObject>
#include <Veri/tanimlar.h>

class TEKAlisFaturasi : public QObject
{
    Q_OBJECT
public:
    explicit TEKAlisFaturasi(QObject *parent = nullptr);

    IdTuru getId() const;
    TarihSaat getPcAlisTarihi() const;
    Tamsayi getFaturaNo() const;


signals:
    void IdDegisti(const IdTuru &value);
    void PcAlisTarihiDegisti(const TarihSaat &value);
    void FaturaNoDegisti(const Tamsayi &value);

public slots:
    void setId(const IdTuru &value);
    void setPcAlisTarihi(const TarihSaat &value);
    void setFaturaNo(const Tamsayi &value);

private:
    IdTuru  PcAlisFaturaId;
    TarihSaat PcAlisTarihi;
    Tamsayi FaturaNo;



};

QDataStream &operator<<(QDataStream &a, TEKAlisFaturasiptr &b);
QDataStream &operator>>(QDataStream &a, TEKAlisFaturasiptr &b);


#endif // TEKALISFATURASI_H
