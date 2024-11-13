#include <iostream>

// Function to hunt for vowels
void hunt_for_vowels(char message[], unsigned int size){

    int vowel_count = 0;
    for (unsigned int i = 0; i < size; ++i) {
        char c = message[i];
        // Check if the character is a vowel
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
            c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
            vowel_count++;
        }
    }

    // For testing purposes, we'll print the vowel count
    std::cout << "Number of vowels: " << vowel_count << std::endl;
}

int main(){
    // Provided test array
    char message[] {'T','h','e',' ','s','k','y',' ' ,'i','s',' ','b','l','u','e',' ','m','y',' ','f','r','i','e','n','d'};
    unsigned int size = sizeof(message) / sizeof(message[0]);

    // Call the function to hunt for vowels
    hunt_for_vowels(message, size);

    return 0;
}
