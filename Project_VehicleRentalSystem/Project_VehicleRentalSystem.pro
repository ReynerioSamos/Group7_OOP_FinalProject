QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    admin.cpp \
    bus.cpp \
    car.cpp \
    clerk.cpp \
    company.cpp \
    customer.cpp \
    database.cpp \
    driver.cpp \
    employee.cpp \
    individual.cpp \
    main.cpp \
    maintenance.cpp \
    mainwindow.cpp \
    manager.cpp \
    motorbike.cpp \
    person.cpp \
    stringformatters.cpp \
    technician.cpp \
    truck.cpp \
    vehicle.cpp

HEADERS += \
    admin.h \
    bus.h \
    car.h \
    clerk.h \
    company.h \
    customer.h \
    database.h \
    driver.h \
    employee.h \
    individual.h \
    maintenance.h \
    mainwindow.h \
    manager.h \
    motorbike.h \
    person.h \
    stringformatters.h \
    technician.h \
    truck.h \
    vehicle.h

FORMS += \
    admin.ui \
    clerk.ui \
    maintenance.ui \
    mainwindow.ui \
    manager.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
