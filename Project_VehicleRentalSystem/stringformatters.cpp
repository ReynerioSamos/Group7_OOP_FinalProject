#include "stringformatters.h"

QString stringformatters::formatPhoneNumber(QString phoneNumber) {
    // Remove any non-numeric characters from the phone number
    phoneNumber.remove(QRegExp("[^0-9]"));

    // Check if the phone number is long enough
    if (phoneNumber.length() < 10) {
        return phoneNumber; // Return the original string if invalid format
    }

    // Format the phone number as (###) ###-####
    QString formattedPhoneNumber = QString("(%1) %2-%3")
        .arg(phoneNumber.mid(0, 3))
        .arg(phoneNumber.mid(3, 3))
        .arg(phoneNumber.mid(6, 4));
}

QString stringformatters::formatEmailAddress(QString emailAddress) {
    // Check if the email address is valid
    // This is just a simple check, you may want to use a more complex regular expression to validate email addresses
    if (!emailAddress.contains("@")) {
        return ""; // Return an empty string if invalid format
    }

    // Split the email address into the username and domain parts
    QStringList parts = emailAddress.split("@");
    QString username = parts[0];
    QString domain = parts[1];

    // Format the email address as username@domain.com
    QString formattedEmailAddress = QString("%1@%2.com")
        .arg(username)
        .arg(domain);

    return formattedEmailAddress;
}