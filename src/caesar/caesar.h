// Author: Eric McCullough
// caesar cipher header file
#ifndef CAESAR_H_
#define CAESAR_H_

#include <iostream>
#include <string> 
#include <vector> 
#include <algorithm>

class CaesarCrypt {
    private:
        size_t key;
        std::vector<char> alphabet =  {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M',  
                                      'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'}; 
    public:
        CaesarCrypt(int); 
        std::string encrypt(std::string plaintext);
        std::string decrypt(std::string ciphertext);
};

#endif 