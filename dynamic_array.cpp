#include <iostream>
#include <vector>
using namespace std;

int main(){
    int count,sum=0;
    cout << "Enter no of elements: ";
    cin >> count;

    vector<int> arr;
    arr.resize(count);

    for(int i=0; i<arr.size(); i++){
        arr[i] = i;
        sum += arr[i];
    }

    cout << "sum is: " << sum << endl;
}