#ifndef PERSON_H
#define PERSON_H

#include <QObject>

class Person : public QObject
{
public:
    explicit Person(QObject *parent = nullptr);

signals:

};

#endif // PERSON_H
