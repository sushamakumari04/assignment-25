//8. Define a class Rectangle and define an instance member function to find the area of the rectangle.
#include<iostream>
using namespace std;

class Rectangle
{
 private:
     int l;
     int b;
 public:

     void setR(int x,int y)
     {
      l=x;
      b=y;
     }

     void area()
     {
      cout<<"area of rectangle is "<<l*b<<endl;
     }

};

int main()
{
Rectangle r1;
r1.setR(6,5);
r1.area();

return 0;
}
