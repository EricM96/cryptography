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
        int key;
    public:
        CaesarCrypt(int); 
        std::string encrypt(std::string plaintext);
        std::string decrypt(std::string ciphertext);
};

#endif 