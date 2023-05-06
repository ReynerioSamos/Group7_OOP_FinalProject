#ifndef CUSTOMER_H
#define CUSTOMER_H

#include <QObject>
#include <QString>
#include <QDate>

class Customer : public QObject
{
    Q_OBJECT
public:
    explicit Customer(QObject *parent = nullptr);

    //Constructors
    Customer (int custid);
    ~Customer();

    //set functions
    void setCustomerID (int custid);
    void setPhoneNumber (QString phonenum);
    void setEmail (QString emailadd);
    void setDate_added(QDate added);

    //get functions
    int getCustomerID();
    QString getCustomerPhoneNumber();
    QString getEmail();
    QDate getDate_added();

private:
    int customerID;
    QString phoneNumber;
    QString email;
    QDate date_added;

signals:

};

#endif // CUSTOMER_H
