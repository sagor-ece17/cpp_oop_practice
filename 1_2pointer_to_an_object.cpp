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
    Rectangle r1, r2; //object creation in stack memory(java does not support this)
    Rectangle *p = new Rectangle(); //created an object in heap(java works this type of process)
    // Rectangle *p;
    // p = new Rectangle();
    p->length = 10;
    p->breadth = 15;
    cout << p->area() <<"\n"; //accessing the member of a class using pointer (-> dereferrencing operator)
    cout<< p->perimeter() << "\n";

    return 0;
}