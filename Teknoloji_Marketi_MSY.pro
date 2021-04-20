QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    Veri/VeriSiniflari/tekalisbilgileri.cpp \
    Veri/VeriSiniflari/tekalisfaturasi.cpp \
    Veri/VeriSiniflari/tekmarketbilgileri.cpp \
    Veri/VeriSiniflari/tekozellikler.cpp \
    Veri/VeriSiniflari/tekparcabilgileri.cpp \
    Veri/VeriSiniflari/tekpcbilgileri.cpp \
    Veri/VeriSiniflari/teksatisbilgileri.cpp \
    Veri/VeriSiniflari/teksatisfaturasi.cpp \
    Veri/VeriSiniflari/tektedarikci.cpp \
    Veri/VeriSiniflari/tekuretilenpc.cpp \
    Veri/VeriYoneticisi/tekalisbilgileriyoneticisi.cpp \
    Veri/VeriYoneticisi/tekalisfaturasiyonetici.cpp \
    Veri/VeriYoneticisi/tekmarketbilgileriyoneticisi.cpp \
    Veri/VeriYoneticisi/tekozellikleryoneticisi.cpp \
    Veri/VeriYoneticisi/tekparcabilgileriyoneticisi.cpp \
    Veri/VeriYoneticisi/tekpcbilgileriyoneticisi.cpp \
    Veri/VeriYoneticisi/teksatisbilgileriyoneticisi.cpp \
    Veri/VeriYoneticisi/teksatisfaturasiyoneticisi.cpp \
    Veri/VeriYoneticisi/tektedarikciyoneticisi.cpp \
    Veri/VeriYoneticisi/tekuretilenpcyoneticisi.cpp \
    Veri/tekgenelveriyoneticisi.cpp \
    main.cpp \
    tek_mar.cpp \
    ui/VeriFormlari/teknopc.cpp

HEADERS += \
    Veri/VeriSiniflari/tekalisbilgileri.h \
    Veri/VeriSiniflari/tekalisfaturasi.h \
    Veri/VeriSiniflari/tekmarketbilgileri.h \
    Veri/VeriSiniflari/tekozellikler.h \
    Veri/VeriSiniflari/tekparcabilgileri.h \
    Veri/VeriSiniflari/tekpcbilgileri.h \
    Veri/VeriSiniflari/teksatisbilgileri.h \
    Veri/VeriSiniflari/teksatisfaturasi.h \
    Veri/VeriSiniflari/tektedarikci.h \
    Veri/VeriSiniflari/tekuretilenpc.h \
    Veri/VeriYoneticisi/TEMEL_VERI_YONETICISI.h \
    Veri/VeriYoneticisi/tekalisbilgileriyoneticisi.h \
    Veri/VeriYoneticisi/tekalisfaturasiyonetici.h \
    Veri/VeriYoneticisi/tekmarketbilgileriyoneticisi.h \
    Veri/VeriYoneticisi/tekozellikleryoneticisi.h \
    Veri/VeriYoneticisi/tekparcabilgileriyoneticisi.h \
    Veri/VeriYoneticisi/tekpcbilgileriyoneticisi.h \
    Veri/VeriYoneticisi/teksatisbilgileriyoneticisi.h \
    Veri/VeriYoneticisi/teksatisfaturasiyoneticisi.h \
    Veri/VeriYoneticisi/tektedarikciyoneticisi.h \
    Veri/VeriYoneticisi/tekuretilenpcyoneticisi.h \
    Veri/tanimlar.h \
    Veri/tekgenelveriyoneticisi.h \
    tek_mar.h \
    ui/VeriFormlari/teknopc.h

FORMS += \
    tek_mar.ui \
    ui/VeriFormlari/teknopc.ui

TRANSLATIONS += \
    Teknoloji_Marketi_MSY_tr_TR.ts

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
