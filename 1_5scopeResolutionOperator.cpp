#include<bits/stdc++.h>
using namespace std;

class Rectangle{
    
    int length;
    int breadth;
public:
    Rectangle();
    Rectangle(int l, int b);
    Rectangle(Rectangle &r);
    void setLength(int l);
    void setBreadth(int b);
    int getLength(){return length;} //inline function
    int getBreadth(){return breadth;}
    int area();
    
    int perimeter(){
        return 2 * (length + breadth);
    }
};
Rectangle :: Rectangle(){   //default and parameterized constructor using scope resolution
        length = 1;
        breadth = 1;
    }
Rectangle ::Rectangle(int l, int b){
    setLength(l);
    setBreadth(b);
}
Rectangle :: Rectangle(Rectangle &r){
        length = r.length;
        breadth = r.breadth;
    }
void Rectangle :: setLength(int l){
        if(l >= 0){
            length = l;
        }
        else{
            length =0;
        }
    }
void Rectangle :: setBreadth(int b){
        if(b >= 0){
            breadth = b;
        }
        else{
            breadth =0;
        }
    }
int Rectangle :: area(){    //method 
        return length * breadth;
    }

int main(){
    Rectangle r(5,6);//parameterized constructor call
    Rectangle r1(r); //copy constructor call
    cout<< r.area() <<"\n";
    cout<< r.getLength() << "  " << r.getBreadth() <<"\n";
    cout<< r1.area() << "   "<<r1.perimeter()<<"\n";
    cout<< r1.getLength() << "  " << r1.getBreadth() <<"\n";
    return 0;
}