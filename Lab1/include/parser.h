#include <string>


#ifndef parser.h
#define parser.h
#endif

namespace StringUtils {
    void parseName(const std::string& fullName, std::string* firstName, std::string* lastname);
    std::string getUsername(const std::string& email);
}