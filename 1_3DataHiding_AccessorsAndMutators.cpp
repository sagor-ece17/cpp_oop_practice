#include<bits/stdc++.h>
using namespace std;
/*Accessor (get)-------
                       |   property function(get, set) 
  Mutator (set)   -----
*/
class Rectangle{
    
    int length;
    int breadth;
public:
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
    Rectangle r;
    r.setLength(10);
    r.setBreadth(15);
    cout<< r.area() <<"\n";
    cout<< r.getLength() << "  " << r.getBreadth() <<"\n";
    return 0;
}