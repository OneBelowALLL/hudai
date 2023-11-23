#include <iostream>
using namespace std;

int main()
{
     int money;
     cin >> money;

     switch (1)
     {
     case 1 : cout << "100 tk note needed = "<< money / 100 << endl;
              money = money % 100;
     
     case 2 : cout << "50 tk note needed = "<< money / 50 << endl;
              money = money % 50;

     case 3 : cout << "20 tk note needed = "<< money / 20 << endl;
              money = money % 20 ;
            
     case 4 : cout << "1 tk note needed = "<< money << endl;
     
     default:
        break;
     }


    return 0;
}