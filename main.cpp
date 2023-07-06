#include <iostream>
#include "User.h"
#include "Message.h"
#include "Chat.h"
#include "ChatRegister.h"

//Classi che rappresentano chat tra utenti. Si deve rappresentare un utente di un sistema,
//un messaggio di chat da un utente ad un altro, una classe che rappresenta una chat tra due utenti,
//un registro di tutte le chat fatte.

int main() {
User user1("Alessia");
User user2("Matteo");
std::list<Message> messages;
Chat chat1 (user1, user2);
messages.push_back(Message("Ciao Matteo", user1, user2));
messages.push_back(Message("Ciao Ale", user2, user1));
messages.push_back(Message("Come stai?", user1, user2));
messages.push_back(Message("Bene, tu?", user2, user1));
messages.push_back(Message("Bene grazie", user1, user2));
chat1.setMessages(messages);
chat1.printMessages();
return 0;
}
