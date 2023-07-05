//
// Created by Alessia Picillo on 05/07/23.
//

#include "User.h"
#include <iostream>

User::User() {
    name = "";
}

User::User(const std::string &name) {
    this->name = name;
}