#include<iostream>
using namespace std;

int pivot_index(int arr[],int size);

int main()
{
    int arr[7] = {8,10,15,1,4};

    int ind = pivot_index(arr,7);

    cout << "index " << ind << endl;


    return 0;
}

int pivot_index(int arr[],int size)
{
    int s = 0;
    int e = size - 1;
    int mid = s + ( e - s ) / 2;

    while (s < e)
    {
        if( arr[mid] >= arr[0]) 
        {
            s = mid + 1;
        }

        else 
        {
            e = mid;
        }

        mid = s + ( e - s ) / 2;
    }
    return s;
}