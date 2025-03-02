#include <iostream>
#include <windows.h>
using namespace std;
int main() {
    MessageBox(NULL, "Warning! A virus has been detected on your system!", "Virus Alert", MB_ICONERROR | MB_OK);
    
    cout << "WARNING: Your system is infected!" << endl;
    cout << "Attempting to remove the virus..." << endl;
    Sleep(5000); // Simulate a delay
    
    cout << "ERROR! Virus removal failed!" << endl;
    cout << "Your system is now compromised!" << endl;
    return 0;
}