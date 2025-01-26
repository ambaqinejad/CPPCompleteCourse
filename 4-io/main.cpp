#include <iostream>
#include <string>

int main () {
    int input;
    std::cout << "Enter a new data." << std::endl;
    std::cin >> input;
    printf("You entered %d", input);
    printf("%d number", 300);
    std::string name;
    std::getline(std::cin, name);
    std::cout << name;
    std::cout << "End";
}