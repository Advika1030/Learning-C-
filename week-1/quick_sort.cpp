#include <iostream>
#include <algorithm>  // sort function
using namespace std;

// compare Function pointer
bool compare(int i, int j){
    return (i>j);
}

int main(){
    int data[] = {32,71,12,45,26};
    //start pointer, end pointer, function pointer

    sort(data,data+5,compare);

    for(int i=0;i<5;i++){
        cout << data[i] << " ";
    }
}