#include "../include/caesar.h"

// CaesarCrypt constructor
CaesarCrypt::CaesarCrypt(int u_key) : key(u_key) {}; 

std::string CaesarCrypt::encrypt(std::string plaintext) {
    for(size_t i{0}; i < plaintext.size(); ++i) {
        if (std::isupper(plaintext.at(i))) {
            plaintext[i] = char((int(plaintext.at(i)) + key - 65)%26 + 65);
        } else if (std::islower(plaintext.at(i)))  {
            plaintext[i] = char((int(plaintext.at(i)) + key - 97)%26 + 97);
        }
    } 
    return plaintext; 
}

std::string CaesarCrypt::decrypt(std::string ciphertext) {
    for(size_t i{0}; i < ciphertext.size(); ++i) {
        if (std::isupper(ciphertext.at(i))) {
            int new_char = int(ciphertext.at(i)) - key - 65;
            if (new_char < 0) new_char = new_char + 26; // the number passed to modulo must be postive 
            new_char = new_char% 26 + 65;
            ciphertext[i] = char(new_char);
        } else if (std::islower(ciphertext.at(i)))  {
            int new_char = int(ciphertext.at(i)) - key - 97;
            if (new_char < 0) new_char = new_char + 26; 
            new_char = new_char% 26 + 97;
            ciphertext[i] = char(new_char);
        }
    } 
    return ciphertext; 
}