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

std::string Message::getText() const {
    return text;
}

void Message::setText(const std::string &text) {
    this->text = text;
}
