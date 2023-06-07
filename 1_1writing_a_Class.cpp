#include<bits/stdc++.h>
using namespace std;

class Rectangle{
    public:     // without using this we cannot using the instances of this class outside of this class
    int length;
    int breadth;

    int area(){    //method 
        return length * breadth;
    }
    
    int perimeter(){
        return 2 * (length + breadth);
    }
};

int main(){
    Rectangle r1, r2; //object creation in stack memory

    r1.length = 10;  //accessing members 
    r1.breadth = 5;
    cout << r1.area() << "\n";
    cout << r1.perimeter() << "\n";
    r2.length = 15;
    r2.breadth = 10;
    cout << r2.area() << "\n";
    cout << r2.perimeter() << "\n";

    return 0;
}
