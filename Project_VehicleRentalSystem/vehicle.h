#ifndef VEHICLE_H
#define VEHICLE_H

#include <QObject>

class Vehicle : public QObject
{
    Q_OBJECT
public:
    explicit Vehicle(QObject *parent = nullptr);

signals:

};

#endif // VEHICLE_H
