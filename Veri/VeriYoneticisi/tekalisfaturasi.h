#ifndef TEKALISFATURASI_H
#define TEKALISFATURASI_H

#include <Veri/VeriYoneticisi/TEMEL_VERI_YONETICISI.h>
#include <QObject>

class TEKAlisFaturasi : public QObject,
                        public TemelVeriYoneticisi<TEKAlisFaturasi , TEKAlisFaturasiptr >
{
    Q_OBJECT
public:
    explicit TEKAlisFaturasi(QObject *parent = nullptr);


    // 4) Pc'nin Kopyası Oluşturulsun
    Ptr KopyaOlustur(Ptr Kaynak) const;

signals:

};

#endif // TEKALISFATURASI_H
