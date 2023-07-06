//
// Created by Alessia Picillo on 06/07/23.
//

#include "Chat.h"
Chat::Chat() : numMessages(0 ){
}

Chat::Chat(const User& user1, const User& user2) {
    this->user1 = user1;
    this->user2 = user2;
    numMessages = 0;
}