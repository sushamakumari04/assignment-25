//1. Define a class Complex to represent a complex number. Declare instance member
//variables to store real and imaginary part of a complex number, also define instance
//member functions to set values of complex number and print values of complex number

#include<iostream>
using namespace std;
class Complex
{
 private:
        int real; // instance member variable
        int img;  // instance member variable
public:
       void setN(int x,int y)
       {
        real= x;
        img = y;
       }
       void print()
       {
       cout<<" real ="<<real<<" "<<"img = "<<img<<endl;
       }
};

int main()
{
Complex c1,c2;
c1.setN(3,5);
c2.setN(5,6);
c1.print();
c2.print();

return 0;
}
