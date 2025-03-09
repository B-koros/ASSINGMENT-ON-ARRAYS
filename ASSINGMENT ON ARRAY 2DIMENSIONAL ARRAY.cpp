#include <iostream>
using namespace std;

int main() {
    int rows, cols;
    cout << "Enter the number of rows and columns: ";
    cin >> rows >> cols;

    string letters[rows][cols];

    // Prompt the user to enter elements
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << "Enter element for position [" << i << "][" << j << "]: ";
            cin >> letters[i][j];
        }
    }

    // Display the entered elements
    cout << "\nEntered elements:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << letters[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}
