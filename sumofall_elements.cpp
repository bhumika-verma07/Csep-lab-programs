#include <iostream>
using namespace std;

int main() {
    int a[10][10], rows, cols;
    int sum = 0;

    cout << "Enter number of rows and columns: ";
    cin >> rows >> cols;

    cout << "Enter matrix elements:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> a[i][j];
            sum += a[i][j];
        }
    }

    cout << "Sum of all elements = " << sum;

    return 0;
}