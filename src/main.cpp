#include "caesar/caesar.h" 

int main() {
    CaesarCrypt crypt = CaesarCrypt(1); 
    std::string plaintext = "zebra"; 
    std::cout << "Plaintext is: " << plaintext << std::endl; 
    std::string ciphertext = crypt.encrypt(plaintext); 
    std::cout << "Ciphertext is: " << ciphertext << std::endl; 
    std::string new_plaintext = crypt.decrypt(ciphertext);
    std::cout << "Decrypted plaintext is: " << new_plaintext << std::endl; 

    return 0; 
}