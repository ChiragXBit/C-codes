#include<iostream>
#include<string>
#include<cctype>
using namespace std;

int main()
{
    std::string source = "You'r gone!";
    std::string output;
    for(const auto& character : source) {
        if (0 == isalpha(character)){
            output.append(1,character);
            continue;
        }

        if ((tolower(character) - 'a') <14 ) {
            // add 13
            output.append(1,character + 13);
        }
        else{
            //take 13
            output.append(1,character -13);
        }
    }
    std::cout<< "The encrypted message is : "
             << output
             << std::endl;
    return 0;
}