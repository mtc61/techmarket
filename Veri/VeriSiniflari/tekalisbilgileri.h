#ifndef TEKALISBILGILERI_H
#define TEKALISBILGILERI_H

#include <QObject>
#include <Veri/tanimlar.h>

class TEKAlisBilgileri : public QObject
{
    Q_OBJECT
public:
    explicit TEKAlisBilgileri(QObject *parent = nullptr);

    IdTuru getId() const;
    Tamsayi getPcAlisMiktari() const;
    ParaBirimi getPcAlisFiyati() const;


signals:
    void IdDegisti(const IdTuru &value);
    void PcAlisMiktariDegisti(const Tamsayi &value);
    void PcAlisFiyatiDegisti(const ParaBirimi &value);


public slots:
    void setId(const IdTuru &value);
    void setPcAlisMiktari(const Tamsayi &value);
    void setPcAlisFiyati(const ParaBirimi &value);



private:
    IdTuru PcAlisId;
    Tamsayi PcAlisMiktari;
    ParaBirimi PcAlisFiyati;


};

QDataStream &operator<<(QDataStream &a, TEKAlisBilgileriptr &b);
QDataStream &operator>>(QDataStream &a, TEKAlisBilgileriptr &b);


#endif // TEKALISBILGILERI_H
