//
// Created by Alessia Picillo on 06/07/23.
//

#include "Chat.h"
Chat::Chat() : numMessages(0 ){
}

Chat::Chat(User &user1, User &user2) {
    this->user1 = user1;
    this->user2 = user2;
    numMessages = 0;
}