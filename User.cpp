//
// Created by Alessia Picillo on 05/07/23.
//

#include "User.h"
#include <iostream>


User::User(const std::string &name) {
    this->name = name;
}

std::string User::getName() const {
    return name;
}

void User::setName(const std::string &name) {
    this->name = name;
}