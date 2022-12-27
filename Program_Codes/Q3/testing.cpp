/*
#include <iostream>

    using namespace std;

int print(int a, unsigned int n)
{
    cout << a << "\n";
    n--;
    return print(a, n);
} // I tried using recursion and unsigned integer to make it stop at 0 and print it continuously without loop or conditions but it's still printing till infinity

int main()
{
    int num;
    unsigned int times = 5;
    cout << "\nEnter a number: ";
    cin >> num;
    print(num, times);
    return 0;
}
*/

#include <iostream>
using std::cout;

class Number
{

public:
    Number()
    {
        cout << 54 << "\n";
    }
};

int main()
{
    int N = 100;

    Number obj[N];
    return 0;
}