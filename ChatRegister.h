//
// Created by Alessia Picillo on 06/07/23.
//

#ifndef LABPROG_CHATREGISTER_H
#define LABPROG_CHATREGISTER_H
#include "User.h"
#include "Message.h"
#include "Chat.h"
#include <iostream>

class ChatRegister {
public:
    ChatRegister();
    ChatRegister(const std::vector<Chat>& chats);
    ~ChatRegister();
    std::vector<Chat> getChats() const;
    void setChats(const std::vector<Chat>& chats);

private:
    std::vector<Chat> chats;
};

















#endif //LABPROG_CHATREGISTER_H