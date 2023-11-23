#include <iostream>
using namespace std;

int main()
{

    int array[] = {1, 7, 8, 33, 49};

    int start, end;

    for (start = 0; start < 5; start = start + 2)
    {
        if ((start + 1) < 4)
        {
            swap(array[start], array[start + 1]);
        }
    }

    for (int i = 0; i < 5; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
}