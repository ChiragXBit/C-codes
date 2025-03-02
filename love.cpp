#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
void loveGame() {
    srand(time(0));
    string name1, name2;
    cout << "Welcome to the Love Calculator!" << endl;
    cout << "Enter first name: ";
    cin >> name1;
    cout << "Enter second name: ";
    cin >> name2;
    int loveScore = rand() % 101;
    cout << "Calculating love percentage..." << endl;
    cout << name1 << " ❤️ " << name2 << " = " << loveScore << "% compatibility!" << endl;
    if (loveScore > 80) {
        cout << "Wow! You two are a perfect match!" << endl;
    } else if (loveScore > 50) {
        cout << "There's potential for love!" << endl;
    } else {
        cout << "Love takes time. Keep trying!" << endl;
    }
}
int main() {
    char choice;
    do {
        loveGame();
        cout << "Do you want to try again? (y/n): ";
        cin >> choice;
    } while (choice == 'y' || choice == 'Y');
    cout << "Thanks for playing the Love Calculator!" << endl;
    return 0;
}