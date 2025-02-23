#include "Contact.hpp"

Contact::Contact() {}

void Contact::setContact(const std::string& first, const std::string& last,
                        const std::string& nick, const std::string& phone,
                        const std::string& secret) {
    firstName = first;
    lastName = last;
    nickname = nick;
    phoneNumber = phone;
    darkestSecret = secret;
}

std::string Contact::getFirstName() const { return firstName; }
std::string Contact::getLastName() const { return lastName; }
std::string Contact::getNickname() const { return nickname; }
std::string Contact::getPhoneNumber() const { return phoneNumber; }
std::string Contact::getDarkestSecret() const { return darkestSecret; }
bool Contact::isEmpty() const { return firstName.empty(); }

bool Contact::isValidPhoneNumber(const std::string& number) {
    if (number.empty())
        return false;

    bool hasDigit = false;
    for (std::string::const_iterator it = number.begin(); it != number.end(); ++it) {
        if (*it >= '0' && *it <= '9')
            hasDigit = true;
        else if (*it != ' ')
            return false;
    }
    
    return hasDigit;
}
