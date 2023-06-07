
#include <bits/stdc++.h>
using namespace std;

class Rectangle {
	int width, height;
public:
	Rectangle (int,int);
	int area () {return (width*height);}
};

Rectangle::Rectangle (int a, int b) {
	width = a; height = b;
}

Rectangle larger(Rectangle recta, Rectangle rectb){
	if(recta.area()>rectb.area())
		return recta;
	else
		return rectb;
}

int main () {
	Rectangle recta (3,4);
	Rectangle rectb (5,6);
	Rectangle rect_larger(0,0);
	
	rect_larger=larger(recta, rectb);
	
	cout << "recta area: " << recta.area() << endl;
	cout << "rectb area: " << rectb.area() << endl;
	cout << "rect_larger area: " << rect_larger.area() << endl;
	return 0;
}
