#include<iostream>
using namespace std;

inline int SQUARE(int x) {return x*x; }

int main(){
    int a =3,b;

    b = SQUARE(a+1);  //a,++a,a+1

    cout << b << endl;
}