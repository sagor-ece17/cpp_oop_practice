#include<bits/stdc++.h>
using namespace std;

class Complex{
private:
    int real;
    int img;
public:
    Complex(int r=0,int i=0)
    {
        real=r;
        img=i;
    } 
    friend ostream & operator<<(ostream &o, Complex &c);
};

ostream & operator<<(ostream &o, Complex &c){
    o << c.real << "+i" << c.img <<"\n";
    return o;
}

int main(){
    Complex c(10,5);
    cout<< c <<"\n";
    return 0;
}