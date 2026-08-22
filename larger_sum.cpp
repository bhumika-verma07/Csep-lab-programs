#include <iostream>
using namespace std;

int main() {
    int a[10][10], n;
    int primarySum = 0, secondarySum = 0;

    cout << "Enter order of square matrix: ";
    cin >> n;

    cout << "Enter matrix elements:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }

    for (int i = 0; i < n; i++) {
        primarySum += a[i][i];
        secondarySum += a[i][n - i - 1];
    }

    cout << "Primary diagonal sum = " << primarySum << endl;
    cout << "Secondary diagonal sum = " << secondarySum << endl;

    if (primarySum > secondarySum) {
        cout << "Primary diagonal sum is larger.";
    }
    else if (secondarySum > primarySum) {
        cout << "Secondary diagonal sum is larger.";
    }
    else {
        cout << "Both diagonal sums are equal.";
    }

    return 0;
}