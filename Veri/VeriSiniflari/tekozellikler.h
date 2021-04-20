#ifndef TEKOZELLIKLER_H
#define TEKOZELLIKLER_H

#include <QObject>
#include <Veri/tanimlar.h>

class TEKOzellikler : public QObject
{
    Q_OBJECT
public:
    explicit TEKOzellikler(QObject *parent = nullptr);

    Ozellikler getOzEkranBoyutu() const;

    Ozellikler getOzRenk() const;
    Ozellikler getOzIsletimSistemi() const;
    Ozellikler getOzIslemciMarkasi() const;
    Ozellikler getOzIslemciModeli() const;
    Ozellikler getOzRam() const;
    Ozellikler getOzEKranKarti() const;
    Ozellikler getOzHdd() const;
    Ozellikler getOzSsd() const;

signals:
    void OzEkranBoyutuDegisti(const Ozellikler &value);
    void OzRenkDegisti(const Ozellikler &value);
    void OzIsletimSistemiDegisti(const Ozellikler &value);
    void OzIslemciMarkasiDegisti(const Ozellikler &value);
    void OzIslemciModeliDegisti(const Ozellikler &value);
    void OzRamDegisti(const Ozellikler &value);
    void OzEkranKartiDegisti(const Ozellikler &value);
    void OzHddDegisti(const Ozellikler &value);
    void OzSsdDegisti(const Ozellikler &value);

public slots:
    void setOzEkranBoyutu(const Ozellikler &value);
    void setOzRenk(const Ozellikler &value);
    void setOzIsletimSistemi(const Ozellikler &value);
    void setOzIslemciMarkasi(const Ozellikler &value);
    void setOzIslemciModeli(const Ozellikler &value);
    void setOzRam(const Ozellikler &value);
    void setOzEkranKarti(const Ozellikler &value);
    void setOzHdd(const Ozellikler &value);
    void setOzSsd(const Ozellikler &value);



private:

    Ozellikler OzEkranBoyutu;
    Ozellikler OzRenk;
    Ozellikler OzIsletimSistemi;
    Ozellikler OzIslemciMarkasi;
    Ozellikler OzIslemciModeli;
    Ozellikler OzRam;
    Ozellikler OzEkranKarti;
    Ozellikler OzHdd;
    Ozellikler OzSsd;

};

QDataStream &operator<<(QDataStream &a, TEKOzelliklerptr &b);
QDataStream &operator>>(QDataStream &a, TEKOzelliklerptr &b);

#endif // TEKOZELLIKLER_H
