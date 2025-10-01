
#include <string>


#ifndef parser_h
#define parser_h
#endif

namespace StringUtils {
    void parseName(const std::string& fullName, std::string* firstName, std::string* lastname);
    std::string getUsername(const std::string& email);
}