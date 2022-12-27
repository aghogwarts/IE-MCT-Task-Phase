#include <iostream>

using namespace std;

int main()
{
    int array[3] = {1, 14, 15}, i, j;
    bool check_num;
    for (i = 1; i <= 100; i++)
    {
        check_num = false;
        for (j = 0; j < 3; j++)
        {
            if (array[j] == i)
            {
                check_num = true;
            }
        }
        if (check_num == false)
        {
            cout << i << '\n';
        }
    }
    return 0;
}