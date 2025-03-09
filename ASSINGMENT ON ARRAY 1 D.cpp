/*Entails array exercise one ,two and three dimension
author Brian koros
Admmission BSE-05-0214/2024*/
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    string letters[n];

    // Prompt the user to enter elements
    for (int i = 0; i < n; i++) {
        cout << "Enter element for position [" << i << "]: ";
        cin >> letters[i];
    }

    // Display the entered elements
    cout << "\nEntered elements:\n";
    for (int i = 0; i < n; i++) {
        cout << letters[i] << "\n";
    }
    return 0;
}
