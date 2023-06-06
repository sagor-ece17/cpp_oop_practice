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

class Circle{
    double radius;
public:
    void setRadius(double r){
        radius = r;
    }
    double getDiameter(){
        return radius*2;
    }
    double getArea();
    double getCircumference();
};
double Circle :: getArea(){
    return radius * radius * (22.0/7);
}

double Circle :: getCircumference(){
    return 2 * radius * (22.0/7);
}

int main(){
    Rectangle recta, rectb;
    recta.setvalues(3, 4);
    rectb.setvalues(5, 6);

    cout << "recta area: "<< recta.area() << "\n";
    cout << "rectb area " << rectb.area() << "\n";

    Circle cir1;
    cir1.setRadius(5);
    cout << "Cir1 area: " << cir1.getArea() <<"\n";
    cout << "Cir1 circumderence: " << cir1.getCircumference() <<"\n";
    cout << "Cir1 Diameter: " << cir1.getDiameter() <<"\n";
    return 0;
}
