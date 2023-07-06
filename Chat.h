//
// Created by Alessia Picillo on 06/07/23.
//

#ifndef LABPROG_CHAT_H
#define LABPROG_CHAT_H
#include "User.h"
#include "Message.h"
#include <iostream>
#include <list>

class Chat {
public:
    Chat();
    Chat(const User& user1, const User& user2);
    User getUser1() const;
    void setUser1 (const User& user1);
    User getUser2() const;
    void setUser2 (const User& user2);
    int getNumMessages () const;
    void setNumMessages (int numMessages);
    void addMessage (const Message& message);
    std::list<Message> getMessages() const;
    void setMessages (const std::list<Message>& mess);

private:
    User user1;
    User user2;
    int numMessages;
    std::list<Message> messages;
};













#endif //LABPROG_CHAT_H
