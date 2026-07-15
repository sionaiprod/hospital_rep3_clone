#include <iostream>
#include <string>

int main() {
    // Variable to store user input
    std::string name;

    // Print message to the console
    std::cout << "Enter your name^ ";
    
    // Read input from the user
    std::getline(std::cin, name);

    // Print personalized greeting
    std::cout << "Hello, " << name << "!" << std::endl;

    // Signal that the program ran successfully
    return 0;
}