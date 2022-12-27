#include <iostream>

using namespace std;

int main()
{
    int a, b;
    cout << "\nType a number: ";
    cin >> a;
    cout << "Type another number: ";
    cin >> b;
    cout << "\nMaximum: " << max(a, b) << " || Minimum is: " << min(a, b) << "\n\n";
    return 0;
}