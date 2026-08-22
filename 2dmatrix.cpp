#include <iostream>
using namespace std;

int main() {
    int a[10][10], rows, cols;

    cout << "Enter number of rows and columns: ";
    cin >> rows >> cols;

    cout << "Enter matrix elements:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> a[i][j];
        }
    }

    cout << "\nRow Major Order: ";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << a[i][j] << " ";
        }
    }

    cout << "\nColumn Major Order: ";
    for (int j = 0; j < cols; j++) {
        for (int i = 0; i < rows; i++) {
            cout << a[i][j] << " ";
        }
    }

    return 0;
}