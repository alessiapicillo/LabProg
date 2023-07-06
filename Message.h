//
// Created by Alessia Picillo on 05/07/23.
//

#ifndef LABPROG_MESSAGE_H
#define LABPROG_MESSAGE_H
#include <string>
#include "User.h"

class Message {
public:
    Message();
    Message(const std::string& text, const User& sender, const User& receiver);
    std::string getText() const;
    void setText(const std::string& text);

private:
    std::string text;
    User sender;
    User receiver;
};
















#endif //LABPROG_MESSAGE_H
