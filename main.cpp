#include <iostream>
#include <string>
#include "parser.h"

using namespace StringUtils;



int main(){

    
    std::cout << "Enter your name: " << std::endl;
    std::string full_name;
    std::getline(std::cin, full_name);
    std::cout << "Enter your email: " << std::endl;
    std::string email;
    std::getline(std::cin, email);
    
    std::string * first_name = new std::string();
    std::string * last_name = new std::string();

    StringUtils::parseName(full_name, first_name, last_name);

    std::string user_name = StringUtils::getUsername(email);

    std::cout << "First Name: " << first_name << " " << std::endl;
    std::cout << "Last Name: " << last_name << " " << std::endl;
    std::cout << "Username: " << user_name << " " << std::endl;

    delete first_name;
    delete last_name;
}