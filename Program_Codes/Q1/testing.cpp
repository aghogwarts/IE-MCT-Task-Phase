#include <iostream>

using std::cin;
using std::cout;

int main()
{
    int i, j, n, pos, small, a[50];
    cout << "\nEnter length of the array: ";
    cin >> n;
    cout << "\nEnter elements of the array: \n";
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (i = 0; i < n - 1; i++)
    { // loop for number of pass
        pos = i;
        small = a[i];
        for (j = i + 1; j < n; j++)
        { // loop for searching the smallest
            if (small > a[j])
            {                 // finding the smallest
                pos = j;      // pos for interchanging
                small = a[j]; // assigning current small value
            }
        }
        a[pos] = a[i]; // interchanging values
        a[i] = small;
    }
    cout << "\n-- Sorted array is:\n>> ";
    for (i = 0; i < n; i++)
    {
        cout << a[i] << "\t";
    }
    cout << "\n\n";
    return 0;
}