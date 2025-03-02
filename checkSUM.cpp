#include<iostream>
#include<string>
#include<cctype>
using namespace std;

int main()
{
    std::string message = "HELLO WORLD";
    unsigned int checksum = 0;
    for (const auto& character : message) {
        checksum += character;
    }
    std::cout << "The checksum is : "
              << checksum
              << std::endl;
    return 0;
}