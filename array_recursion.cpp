#include <iostream>
using namespace std;

void printArray(int arr[], int n, int i)
{
    if (i == n)
        return;

    cout << arr[i] << " ";

    printArray(arr, n, i + 1);
}

int main()
{
    int n;

    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];

    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Array elements: ";
    printArray(arr, n, 0);

    return 0;
}