#include <iostream>
int main(){
    int a;
    int b;

    std::cout << "Input two numbers:\n";
    std::cin >> a >> b;

    int sum = a + b; //Declaration of sum

    std::cout << "sum of " << a << " and " << b << " is: " << sum << std::endl;
}