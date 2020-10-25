#include "Contact.hpp"

Contact::Contact() {
}

Contact::~Contact() {
}

void Contact::setFirstName(std::string str) {
    first_name = str;
}

void Contact::setLastName(std::string str) {
    last_name = str;
}

void Contact::setNickname(std::string str) {
    nickname = str;
}

void Contact::setLogin(std::string str) {
    login = str;
}

void Contact::setPostalAddress(std::string str) {
    postal_address = str;
}

void Contact::setEmailAddress(std::string str) {
    email_address = str;
}

void Contact::setPhoneNumber(std::string str) {
    phone_number = str;
}

void Contact::setBirthdayDate(std::string str) {
    birthday_date = str;
}

void Contact::setFavoriteMeal(std::string str) {
    favorite_meal = str;
}

void Contact::setUnderwearColor(std::string str) {
    underwear_color = str;
}

void Contact::setDarkestSecret(std::string str) {
    darkest_secret = str;
}

const std::string& Contact::getFirstName() const {
    return first_name;
}

const std::string& Contact::getLastName() const {
    return last_name;
}

const std::string& Contact::getNickname() const {
    return nickname;
}

const std::string& Contact::getLogin() const {
    return login;
}

const std::string& Contact::getPostalAddress() const {
    return postal_address;
}

const std::string& Contact::getEmailAddress() const {
    return email_address;
}

const std::string& Contact::getPhoneNumber() const {
    return phone_number;
}

const std::string& Contact::getBirthdayDate() const {
    return birthday_date;
}

const std::string& Contact::getFavoriteMeal() const {
    return favorite_meal;
}

const std::string& Contact::getUnderwearColor() const {
    return underwear_color;
}

const std::string& Contact::getDarkestSecret() const {
    return darkest_secret;
}
