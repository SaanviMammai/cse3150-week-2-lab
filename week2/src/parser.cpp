#include <iostream>
#include <string>

namespace StringUtils {
    void parseName(const std::string& fullName, std::string* firstName, std::string* lastName){
        //take a full name and use the pointer argu-ments to return the separated first and last names
        //go through full name and
        //char delimiter = ' ';
        //std::vector<std::string> full_name = split(full_name, delimiter);
        //deal with the middle initial part...
        char del = ' ';
        std::string first_name = "";
        bool first_name_true = true;
         
        std::string last_name = "";

        for (int i = 0; i<(int)fullName.size(); i++){
            if(fullName[i] != del){
                if(first_name_true)
                    first_name += fullName[i];

                if (first_name_true == false)
                    last_name += fullName[i];
            }
            else{
                
                first_name_true = false;
            }
            
        }
        *firstName = first_name;
        *lastName = last_name;

        
        
    }
    std::string getUsername(const std::string& email){
        //take a full email address and return the username part (everything before the @symbol)
        //doesn't deal with heap, no pointers 
        char del = '@';
        std::string user_name = "";
        bool user_name_true = true;

        for (int i = 0; i<(int)email.size(); i++){
            if(email[i] != del){
                if(user_name_true)
                    user_name += email[i];
            }
            else{
                user_name_true = false;
            }
        }
        
        return email;
    }

}