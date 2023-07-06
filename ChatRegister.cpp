//
// Created by Alessia Picillo on 06/07/23.
//

#include "ChatRegister.h"

ChatRegister::ChatRegister(){
    chats={};
}

ChatRegister::ChatRegister(const std::vector<Chat>& chats){
    this->chats = chats;
}


ChatRegister::~ChatRegister() {
chats.clear();
}

std::vector<Chat> ChatRegister::getChats() const{
    return chats;
}

void ChatRegister::setChats(const std::vector<Chat>& chats){
    this->chats = chats;
}

void ChatRegister::addChat (const Chat& chat){
    chats.push_back(chat);
}