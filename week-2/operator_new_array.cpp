#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
    int *a = new int[3];
    a[0] = 1;
    a[1] = 2;
    a[2] = 3;

    for(int i=0;i<3;i++){
        cout << a[i] << endl;
    }

    delete [] a;
}