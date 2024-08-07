#include <iostream>
using namespace std;
#
int main(){
    int data[] = {32,71,12,45,26};
    int n =5,temp;

    for(int i=0; i<n-1; i++){
        for(int j=0;j<n-i-1;j++){
            if(data[i] > data[i+1]){
                temp = data[i];
                data[i] = data[i+1];
                data[i+1] = temp;
            }
        }

    }

     for(int i=0;i<n;i++){
        cout << data[i] << " ";
    }

}