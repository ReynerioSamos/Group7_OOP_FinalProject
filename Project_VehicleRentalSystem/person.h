#ifndef PERSON_H
#define PERSON_H

#include "stringformatters.h"

#include <QObject>
#include <QDate>
#include <QString>


class Person : public QObject
{
public:
    explicit Person(QObject *parent = nullptr);

    //Constructors
    Person(int pid);
    ~Person();

    //set functions
    void setPersonID(int persid);
    void setFirstName(QString fname);
    void setLastName(QString lname);
    void setDoB(QDate dob);
    void setPhoneNum( QString phonenum);
    void setEmail(QString email);

    //get Functions
    int getPersonID();
    QString getFirstName();
    QString getLastName();
    QDate getDoB();
    QString getPhoneNum();
    QString getEmail();

private:
    int PersonID;
    QString firstName, lastName;
    QDate DoB;
    QString phoneNumber;
    QString email;


signals:

};

#endif // PERSON_H
