QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    UI_loginwindow.cpp \
    bus.cpp \
    car.cpp \
    company.cpp \
    customer.cpp \
    driver.cpp \
    employee.cpp \
    individual.cpp \
    main.cpp \
    motorbike.cpp \
    person.cpp \
    stringformatters.cpp \
    technician.cpp \
    truck.cpp \
    vehicle.cpp

HEADERS += \
    UI_loginwindow.h \
    bus.h \
    car.h \
    company.h \
    customer.h \
    driver.h \
    employee.h \
    individual.h \
    motorbike.h \
    person.h \
    stringformatters.h \
    technician.h \
    truck.h \
    vehicle.h

FORMS += \
    UI_loginwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
