#include<iostream>
using namespace std;

int binary_search(int array[],int size,int key);

int main()
{
     int odd[5] = {5,9,10,21,29};
     int even[6] = {3,8,12,18,22,29};

     int index = binary_search(even,6,29);

     cout << "Index of 21 is "<< index << endl;

}

int binary_search(int array[],int size,int key)
{
    int start = 0;
    int end = size - 1;

    int mid = start + ( (end - start) / 2 );

    while( start <= end )
    {
        if( array[mid] == key )
        {
            return mid;
        }

        if( array[mid] > key )
        {
            end = mid - 1;
        }
        else {
            start = mid + 1;
        }

        mid = start + ( (end - start) / 2 );
    }

    return -1;
}