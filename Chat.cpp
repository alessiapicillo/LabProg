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

User Chat:: getUser1() const{
    return user1;
}

void Chat:: setUser1 (const User& user1){
    this->user1 = user1;
}

User Chat:: getUser2() const{
    return user2;
}

void Chat:: setUser2 (const User& user2){
    this->user2 = user2;
}

int Chat:: getNumMessages () const{
    return numMessages;
}

void Chat:: setNumMessages (int size){
    this->numMessages = size;
}

void Chat:: addMessage (const Message& message){
    messages.push_back(message);
    numMessages++;
}

std::list<Message> Chat:: getMessages() const{
    return messages;
}

void Chat:: setMessages (const std::list<Message>& mess){
    this->messages = mess;
    numMessages = mess.size();
}

void Chat::printMessages() const{
    std::cout << "Numero messaggi: " << numMessages << std::endl;
    std::cout << "Stampa messaggi: " << std::endl;
    for(const auto& m : messages){
        std::cout << m.getSender().getName() << ": " << m.getText() << std::endl;
    }
}