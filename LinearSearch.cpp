#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Please enter the size of Array : ";
    cin >> n;
    int array[n];
    cout << "Creating Array :\n";
    for (int i = 0; i < n; i++)
    {
        cout << "Enter data at Index " << i << "\n";
        cin >> array[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout << array[i];
    }

    int search, found = 0;
    cout << "Enter for looking number :" << endl;
    cin >> search;
    for (int i = 0; i < n; i++)
    {
        if (array[i] == search)
        {
            cout << "Number found at index " << i << "\n";
            found = 1;
            // break;  for finding single element
        }
    }
    if (found == 0)
    {
        cout << "Not found";
    }
    return 0;
}
