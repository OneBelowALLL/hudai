#include<iostream>
using namespace std;

int binarySearch (int arr[], int size, int key);

int main()
{
     int evenarray[4] = { 33, 35, 40, 50};
     int oddarray [3] = { 11, 15, 19};

     int even_index = binarySearch (evenarray,4,34);
     cout << "the array index is " << even_index << endl;

}


int binarySearch (int arr[], int size, int key) 
 {
     int start = 0;
     int end = (size - 1);
     int mid = start + (( end - start) / 2 );

     while ( start <= end ) 
     {
          if( arr[mid] == key ) {
              return mid;
          }

          if ( arr[mid] > key) {
              end = (mid -1);
          }
          else {
               start = mid + 1;
          }

          mid = start + (( end - start ) / 2);
     }
     return -1;
 }