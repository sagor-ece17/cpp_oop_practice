#include<bits/stdc++.h>
using namespace std;



class Circle{
	double radius;
public:
	Circle() {       // constructor
         radius = 0.0;
    }
	Circle(int r); // constructor
	void setRadius(double r) {radius = r;}	
	double getDiameter() {return radius *2;}
	double getArea();
	double getCircumference();
};

Circle::Circle(int r)
{
     radius = r;
}
double Circle::getArea()
{ 
     return radius * radius * (22.0/7);
}
double Circle:: getCircumference()
{
     return 2 * radius  * (22.0/7);
}

int main()
{
    Circle c1, c2(7);

    c1.setRadius(5); 	

    cout<<"The area of c1:"<<c1.getArea()<<"\n";

    cout<<"The circumference of c1:"<< c1.getCircumference()<<"\n";

    cout<<"The Diameter of c2:"<<c2.getDiameter()<<"\n";

    return 0;	
}

