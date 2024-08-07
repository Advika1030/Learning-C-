#include <iostream>
using namespace std;

int IdentityFunction(int a =10){
    return a;
}

int main(){
    int x=5,y;

    y=IdentityFunction(x);
    cout << "y = " << y <<endl;

    y = IdentityFunction();
    cout << "y = " << y <<endl;
}