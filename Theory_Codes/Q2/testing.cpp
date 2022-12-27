#include <iostream>

using namespace std;

int main()
{
    int array[10] = {1, 2, 3, 3, 4, 2, 6, 7, 1, 9}, i, j, n, ele, pos;
    n = 10;
    for (i = 0; i < n; i++)
    {
        ele = array[i];
        for (j = i + 1; j < n; j++)
        {
            if (array[j] == ele)
            {
                for (pos = j; pos < n - 1; pos++)
                {
                    array[pos] = array[pos + 1];
                }
                n -= 1;
            }
        }
    }
    for (i = 0; i < n; i++)
    {
        cout << array[i] << '\t';
    }
    return 0;
}