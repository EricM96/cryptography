#include "caesar.h"

// CaesarCrypt constructor
CaesarCrypt::CaesarCrypt(int u_key) : key(u_key) {}; 

std::string CaesarCrypt::encrypt(std::string plaintext) {
    for(size_t i{0}; i < plaintext.size(); ++i) {
        std::vector<char>::iterator it = std::find(alphabet.begin(), alphabet.end(), plaintext.at(i)); 
        size_t index = std::distance(alphabet.begin(), it); 
        plaintext[i] = alphabet[(index + key) % 25 - 1]; 
    } 
    return plaintext; 
}

std::string CaesarCrypt::decrypt(std::string ciphertext) {
    for(size_t i{0}; i < ciphertext.size(); ++i) {
        std::vector<char>::iterator it = std::find(alphabet.begin(), alphabet.end(), ciphertext.at(i)); 
        size_t index = std::distance(alphabet.begin(), it); 
        ciphertext[i] = alphabet[(index - key) % 26]; 
    } 
    return ciphertext; 
}