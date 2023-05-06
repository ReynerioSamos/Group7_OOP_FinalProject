#ifndef STRINGFORMATTERS_H
#define STRINGFORMATTERS_H

#include <QString>
#include <QRegularExpression>

class stringformatters{
public:
    static QString formatPhoneNumber(QString phoneNumber);
    static QString formatEmailAddress(QString emailAddress);
};

#endif // STRINGFORMATTERS_H
