#include<iostream>
using namespace std;

void dummy (int n);

int main() {
    int n ;
    cin >> n;

    dummy(n);

    cout << "Number n is "<< n << endl;

}

void dummy (int n) {
    cout << "n is "<< n << endl;
}

