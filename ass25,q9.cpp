//9. Define a class Circle and define an instance member function to find the area of the circle.
#include<iostream>
using namespace std;

class Circle
{
private:
     int r;
public:
     void setN(int x)
     {
      r=x;
     }
      void areaR()
      {
       cout<<"area of circle is "<<3.14*r*r<<endl;
      }
};
int main()
{
Circle c1;
c1.setN(1);
c1.areaR();
return 0;
}
