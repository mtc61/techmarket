#ifndef TEKMARKETBILGILERI_H
#define TEKMARKETBILGILERI_H

#include <QObject>
#include <Veri/tanimlar.h>

class TEKMarketBilgileri : public QObject
{
    Q_OBJECT
public:
    explicit TEKMarketBilgileri(QObject *parent = nullptr);

    IdTuru getId() const;
    Metin getTeknoMarketAdi() const;
    Metin getTeknoMarketAdresi() const;
    Metin getTeknoMarketYetkilisi() const;
    Tamsayi getTeknoMarketTelefonu() const;


signals:
    void IdDegisti(const IdTuru &value);
    void TeknoMarketAdiDegisti(const Metin &value);
    void TeknoMarketAdresiDegisti(const Metin &value);
    void TeknoMarketYetkilisiDegisti(const Metin &value);
    void TeknoMarketTelefonuDegisti(const Tamsayi &value);


public slots:

    void setId(const IdTuru &value);
    void setTeknoMarketAdi(const Metin &value);
    void setTeknoMarketAdresi(const Metin &value);
    void setTeknoMarketYetkilisi(const Metin &value);
    void setTeknoMarketTelefonu(const Tamsayi &value);

private:

    IdTuru TeknoMarketId;
    Metin TeknoMarketAdi;
    Metin TeknoMarketAdresi;
    Metin TeknoMarketYetkilisi;
    Tamsayi TeknoMarketTelefonu;

};

QDataStream &operator<<(QDataStream &a, TEKMarketBilgileriptr &b);
QDataStream &operator>>(QDataStream &a, TEKMarketBilgileriptr &b);

#endif // TEKMARKETBILGILERI_H
