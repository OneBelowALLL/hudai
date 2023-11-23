#include<iostream>
using namespace std;

int firsOcc(int arr[], int size, int key);
int lastOcc(int arr[], int size, int key);


int main() 
{
     int arr[11] = { 1, 2, 3, 3, 3, 3, 3, 7, 7 , 3, 9};

     int ind = firsOcc ( arr, 11, 3 );
     int ind2 = lastOcc ( arr, 11, 3 );
     

     cout << "First occurrance of 3 is at index " << ind << endl;
     cout << "Last occurrance of 3 is at index "<< ind2 << endl;
}


int firsOcc(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;
    int ans = -1;

    while( start <= end ) 
     {
        if( arr[mid] == key ) {
            ans = mid;
            end = mid - 1;
        }
        else if ( arr[mid] > key ) {
            end = mid - 1;
        }
        else if ( arr[mid] < key ) {
            start = mid + 1;
        }
        
        mid = start + (end - start) / 2;
     }
     return ans;

}

int lastOcc(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;
    int ans = -1;

    while( start <= end ) 
     {
        if( arr[mid] == key ) {
            ans = mid;
            start = mid + 1;
        }
        else if ( arr[mid] > key ) {
            end = mid - 1;
        }
        else if ( arr[mid] < key ) {
            start = mid + 1;
        }
        
        mid = start + (end - start) / 2;
     }
     return ans;

}
 