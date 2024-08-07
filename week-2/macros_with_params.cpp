#include <iostream>
using namespace std;

#define SQUARE(x) (x)*(x);

int main(){
    int a=3;
    int b;

    b = SQUARE(a+1);

    cout << b << endl;
}