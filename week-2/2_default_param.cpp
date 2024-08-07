#include <iostream>
using namespace std;

int Add(int a =10,int b=20){
    return a+b;
}

int main(){
    int x = 5;
    int y;

    y = Add(x);
    cout << y <<endl;

    y = Add();
    cout <<y <<endl;
}