#ifndef TEKTEDARIKCI_H
#define TEKTEDARIKCI_H

#include <QObject>
#include <Veri/tanimlar.h>

class TEKTedarikci : public QObject
{
    Q_OBJECT
public:
    explicit TEKTedarikci(QObject *parent = nullptr);

    IdTuru getId() const;

    Metin getPcTedarikcisiAdresi() const;
    Tamsayi getPcTedarikcisiTelefonu() const;
    Metin getPcTedarikcisiYetkiliFirma() const;
    Metin getPcTedarikcisiAdi() const;

signals:
    void IdDegisti(const IdTuru &value);
    void PcTedarikcisiAdresiDegisti(const Metin &value);
    void PcTedarikcisiTelefonuDegisti(const Tamsayi &value);
    void PcTedarikcisiYetkiliFirmaDegisti(const Metin &value);
    void PcTedarikcisiAdiDegisti(const Metin &value);

public slots:
    void setId(const IdTuru &value);
    void setPcTedarikcisiAdresi(const Metin &value);
    void setPcTedarikcisiTelefonu(const Tamsayi &value);
    void setPcTedarikcisiYetkiliFirma(const Metin &value);
    void setPcTedarikcisiAdi(const Metin &value);

private:

    IdTuru TedarikciId;
    Metin PcTedarikcisiAdi;
    Metin PcTedarikcisiAdresi;
    Tamsayi PcTedarikcisiTelefonu;
    Metin PcTedarikcisiYetkiliFirma;

};

QDataStream &operator<<(QDataStream &a, TEKTedarikciptr &b);
QDataStream &operator>>(QDataStream &a, TEKTedarikciptr &b);
#endif // TEKTEDARIKCI_H
