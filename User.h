//
// Created by Alessia Picillo on 05/07/23.
//

#ifndef LABPROG_USER_H
#define LABPROG_USER_H
#include <iostream>
#include <string>

class User {
public:
    User();
    User(const std::string& name);
    std::string getName() const;
    void setName (const std::string& name);

private:
    std::string name;
};






#endif //LABPROG_USER_H
