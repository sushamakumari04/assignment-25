//10. Define a class Area and define instance member functions to find the area of the different shapes like square,
//rectangle , circle etc.
#include<iostream>
using namespace std;

class Area
{
 private:
     int r;
     int l,b;
     int s;
 public:
      void setN(int m,int n,int o,int p)
      {
       r=m;
       l=n;
       b=o;
       s=p;
      }
      void calAreaCircle()
      {
        cout<<"area of circle is "<<3.14*r*r<<endl;
      }
      void calAreaRect()
      {
       cout<<"area of rect is "<<l*b<<endl;
      }
      void calAreaSquare()
      {
       cout<<"area of square is "<<s*s<<endl;
      }
};

int main()
{
Area a1;
a1.setN(1,2,3,4);
a1.calAreaCircle();
a1.calAreaRect();
a1.calAreaSquare();
return 0;
}
