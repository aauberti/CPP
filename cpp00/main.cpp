#include "PhoneBook.hpp"
#include <iostream>
#include <string>
#include <cstdlib>

std::string getInput(const std::string& prompt) {
    std::string input;
    do {
        std::cout << prompt;
        std::getline(std::cin, input);
        if (std::cin.eof())
            exit(0);
    } while (input.empty());
    return (input);
}

int main() {
    PhoneBook phoneBook;
    std::string command;

    while (true) {
        std::cout << "Enter command (ADD, SEARCH, EXIT): ";
        std::getline(std::cin, command);
        if (std::cin.eof())
            break;
        if (command == "EXIT")
            break;
        else if (command == "ADD") {
            Contact newContact;
            std::string firstName = getInput("Enter first name: ");
            std::string lastName = getInput("Enter last name: ");
            std::string nickname = getInput("Enter nickname: ");
            std::string phoneNumber;
            do {
                phoneNumber = getInput("Enter phone number: ");
                if (!Contact::isValidPhoneNumber(phoneNumber))
                    std::cout << "Invalid phone number! Please use only digits and spaces" << std::endl;
            } while (!Contact::isValidPhoneNumber(phoneNumber));
            std::string darkestSecret = getInput("Enter darkest secret: ");
            newContact.setContact(firstName, lastName, nickname, phoneNumber, darkestSecret);
            phoneBook.addContact(newContact);
            std::cout << "Contact added successfully!" << std::endl;
        }
        else if (command == "SEARCH") {
            phoneBook.searchContact();
        }
        // else
        //     std::cout << "Wrong command" << std::endl;
    }
    return (0);
}

