#include <iostream>
using namespace std;
int BinarySearch(int arr[], int left, int right, int search)
{
    if (right >= 1)
    {
        int mid = (left + right) / 2;
        if (arr[mid] == search)
        {
            return mid;
        }
        else if (arr[mid] > search)
        {
            return BinarySearch(arr, left, mid - 1, search);
        }
        else
        {
            return BinarySearch(arr, mid + 1,right, search);
        }
    }
    return -1; // When element is not in the list, left crossed right.
}
int main()
{
    int array[] = {1, 4, 5, 8, 10, 56, 67, 87, 90, 102};
    int search = 90;
    int n = sizeof(array) / sizeof(array[0]);

    int element = BinarySearch(array, 0, n - 1, search);

    if (element == -1)
    {
        cout << "Element is not present in array";
    }
    else
    {
        cout << "Element is present at index " << element;
    }

    return 0;
}