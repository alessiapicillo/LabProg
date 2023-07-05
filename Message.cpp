//
// Created by Alessia Picillo on 05/07/23.
//

#include "Message.h"

Message::Message() {
    text = "";
}

Message::Message(const std::string &text) {
    this->text=text;
}