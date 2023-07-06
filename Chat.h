//
// Created by Alessia Picillo on 06/07/23.
//

#ifndef LABPROG_CHAT_H
#define LABPROG_CHAT_H
#include "User.h"
#include <iostream>

class Chat {
public:
    Chat();
    Chat(const User& user1, const User& user2);

private:
    User user1;
    User user2;
    int numMessages;
};













#endif //LABPROG_CHAT_H
