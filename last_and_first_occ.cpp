#include<iostream>
using namespace std;

int firstOcc(int array[],int size,int key);
int lastOcc(int array[],int size,int key);

int main()
{
     int odd[7] = { 1,3,3,3,3,5,7};
     int even[8] = { 2,5,8,9,9,9,11,20};

     pair<int,int>index_value;

     index_value.first = firstOcc(odd,7,3);
     index_value.second = lastOcc(odd,7,3 );

     cout << "first occ at the index " << index_value.first << endl;
     cout << "last occ at the index " << index_value.second << endl;
     

    return 0;
}


int firstOcc(int array[],int size,int key)
{
    int start = 0;
    int end = size - 1;
    int mid = start + ( (end - start) / 2);

    int ans = -1;

    while( start <= end )
    {
        if( array[mid] == key )
        {
            ans = mid;
            end = mid - 1;
        }

        if ( array[mid] > key )
        {
            end = mid - 1;
        }
        else if ( array[mid] < key )
        {
            start = mid + 1;
        }

        mid = start + ( (end - start) / 2);
    }

    return ans;
}
int lastOcc(int array[],int size,int key)
{
    int start = 0;
    int end = size - 1;
    int mid = start + ( (end - start) / 2);

    int ans = -1;

    while( start <= end )
    {
        if( array[mid] == key )
        {
            ans = mid;
            start = mid + 1;
        }

        if ( array[mid] > key )
        {
            end = mid - 1;
        }
        else if ( array[mid] < key )
        { 
            start = mid + 1;
        }

        mid = start + ( (end - start) / 2);
    }

    return ans;
}