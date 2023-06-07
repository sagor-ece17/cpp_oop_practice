#include<bits/stdc++.h>
using namespace std;
/*1.default construcures(Built-in)
  2.non-parameterized constructors
  3.parameterized constructors
  4.copy constructors
*/
class Rectangle{
    
    int length;
    int breadth;
public:
    Rectangle(int l = 1, int b = 1){   //default and parameterized constructor
        setLength(l);
        setBreadth(b);
    }
    Rectangle(Rectangle &r){
        length = r.length;
        breadth = r.breadth;
    }

    void setLength(int l){
        if(l >= 0){
            length = l;
        }
        else{
            length =0;
        }
    }

    void setBreadth(int b){
        if(b >= 0){
            breadth = b;
        }
        else{
            breadth =0;
        }
    }

    int getLength(){
        return length;
    }

    int getBreadth(){
        return breadth;
    }
    int area(){    //method 
        return length * breadth;
    }
    
    int perimeter(){
        return 2 * (length + breadth);
    }
};

int main(){
    Rectangle r(5,6);//parameterized constructor call
    Rectangle r1(r); //copy constructor call
    cout<< r.area() <<"\n";
    cout<< r.getLength() << "  " << r.getBreadth() <<"\n";
    cout<< r1.area() <<"\n";
    cout<< r1.getLength() << "  " << r1.getBreadth() <<"\n";
    return 0;
}