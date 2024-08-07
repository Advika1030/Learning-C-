#include<iostream>
using namespace std;

void swap(int&,int&);

int main(){
    int a=10;
    int b=15;

    cout << "a = " << a << " b = " << b << endl;
    swap(a,b);
    cout << "a = " << a << " b = " << b << endl;
}

void swap(int &x,int &y){
    int t;
    t = x;
    x = y;
    y = t;
}