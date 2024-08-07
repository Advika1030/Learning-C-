#include <iostream>
#include <vector>

using namespace std;

#define MAX 100

int main(){
    vector<int> arr(MAX);

    cout << "Enter the number of elements: ";
    int count;
    int sum = 0;
    cin >> count;

    for(int i = 0; i<count; i++){
        arr[i] = i;
        sum += arr[i];
    }

    cout << "The sum of array is: " << sum <<endl;
}