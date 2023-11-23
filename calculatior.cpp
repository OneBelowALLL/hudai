#include<iostream>
using namespace std;

int main() {

     int a,b;
     char ch;

     cout << "Enter the first value" << endl;
     cin >> a;

     cout << "Enter the second value" << endl;
     cin >> b;

     cout << "Enter the operation" << endl;
     cin >> ch;

     switch (ch)
     {
     case '+': cout << "sum of two value is : "<<a+b<<endl;
        break;
     case '-': cout << "substraction of two value is : " <<a-b<<endl;
        break;
     case '*': cout << "product of two value is : "<<a*b<<endl;
        break;
     case '/': cout << "division of two value is : "<<a/b<<endl;
     break;
     
     default:
        break;
     }

}