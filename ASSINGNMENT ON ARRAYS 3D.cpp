#include <iostream>
using namespace std;

int main() {
    string letters[2][2][2];

    // Prompt the user to enter elements
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            for (int k = 0; k < 2; k++) {
                cout << "Enter element for position [" << i << "][" << j << "][" << k << "]: ";
                cin >> letters[i][j][k];
            }
        }
    }

    // Display the entered elements
    cout << "\nEntered elements:\n";
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            for (int k = 0; k < 2; k++) {
                cout << letters[i][j][k] << "\n";
            }
        }
    }
    return 0;
}