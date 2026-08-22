#include <iostream>
using namespace std;

int main()
{
    int arr[9] = {6,7,8,9,1,2,3,4,5};

    int target;
    cout << "Enter the element you want to find: ";
    cin >> target;

    int low = 0;
    int high = 8;

    while (low <= high)
    {
        int mid = (low + high) / 2;

        if (arr[mid] == target)
        {
            cout << "Element found at index " << mid;
            return 0;
        }

        if (arr[low] <= arr[mid])
        {
            
            if (arr[low] <= target && target < arr[mid])
            {
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }

        else
        {
            
            if (arr[mid] < target && target <= arr[high])
            {
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
        }
    }

    cout << "Element not found";

    return 0;
}