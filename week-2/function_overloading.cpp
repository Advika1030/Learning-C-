#include <iostream>
using namespace std;

int Area(int a,int b) {return (a*b);}
int Area(int c) {return (c*c);}

int main(){
    int x=10,y=20,z=5,t;
    t = Area(x,y);
    cout << t <<endl;

    t = Area(z);
    cout << t;
}
