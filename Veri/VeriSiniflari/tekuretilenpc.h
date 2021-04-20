#ifndef TEKURETILENPC_H
#define TEKURETILENPC_H

#include <QObject>
#include <Veri/tanimlar.h>

class TEKUretilenPc : public QObject
{
    Q_OBJECT
public:
    explicit TEKUretilenPc(QObject *parent = nullptr);

    IdTuru getId() const;
    Tamsayi getGarantiSuresi() const;
    Metin getIthalatci() const;
    Metin getSeri() const;

signals:
    void IdDegisti(const IdTuru &value);
    void GarantiSuresiDegisti(const Tamsayi &value);
    void IthalatciDegisti(const Metin &value);
    void SeriDegisti(const Metin &value);


public slots:
    void setId(const IdTuru &value);
    void setGarantiSuresi(const Tamsayi &value);
    void setIthalatci(const Metin &value);
    void setSeri(const Metin &value);




private:

    IdTuru UretilenPcAdi;
    Tamsayi GarantiSuresi;
    Metin Ithalatci;
    Metin  seri;

};

QDataStream &operator<<(QDataStream &a, TEKUretilenPcptr &b);
QDataStream &operator>>(QDataStream &a, TEKUretilenPcptr &b);

#endif // TEKURETILENPC_H
