#include<iostream>
using namespace std;

class Point{
    public:
    int x;
    int y;
};

class Rect{
    public:
    Point TL;
    Point BR;
};

int main(){
    Rect r = { {0,2}, {5,7} };
    cout << r.TL.x << " " << r.TL.y << " and " << r.BR.x <<" " << r.BR.y << endl;
}