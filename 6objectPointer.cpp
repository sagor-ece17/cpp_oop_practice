#include<bits/stdc++.h>
using namespace std;

class Rectangle{
    int height, width;
public:
    void setvalues(int, int);
    int area(){
        return (height * width);
    }
};

void Rectangle :: setvalues(int a, int b){
    height = a;
    width = b;
}

int main () {
Rectangle a, *b, *c;

b= new Rectangle;
c= &a;

a.setvalues (1,2);
b->setvalues (3,4);

cout << "a area: " << a.area() << endl;
cout << "*b area: " << b->area() << endl;
cout << "*c area: " << c->area() << endl;

delete b;
return 0;
} 
