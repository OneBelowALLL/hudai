#include<bits/stdc++.h>
using namespace std;

int main()
{
     int arr[6] = {1,2,2,1,1,3};

     int max = INT_MIN;
     int min = INT_MAX;

     for(int i=0; i<6; i++)
     {
        if ( arr[i] > max )
        {
            max = arr[i];
        }
        if ( arr[i] < min )
        {
            min = arr[i];
        }
     }

     int range = (max - min) + 1;
     int count[range];
     for(int i=0; i<range; i++)
     {
        count[i] = 0;
     }

     

}