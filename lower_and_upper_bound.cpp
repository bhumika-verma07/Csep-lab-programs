#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {1,2,3,4,5};

    int target;

    cout << "Enter the element: ";
    cin >> target;

    int low = 0;
    int high = 4;
    int lower = -1;
    int upper = -1;

    low = 0;
    high = 4;

    while (low <= high)
    {
        int mid = (low + high) / 2;

        if (arr[mid] >= target)
        {
            lower = mid;
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }

    low = 0;
    high = 4;

    while (low <= high)
    {
        int mid = (low + high) / 2;

        if (arr[mid] > target)
        {
            upper = mid;
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }

    cout << "Lower Bound = " << lower << endl;
    cout << "Upper Bound = " << upper << endl;

    return 0;
}