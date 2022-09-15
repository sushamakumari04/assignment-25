//4. Define a class LargestNumber and define an instance member function to find the
//Largest of three Numbers using the class.
#include<iostream>
using namespace std;
class LargestNumber
{
 private:
     int a,b,c;
 public:
     void setN(int x,int y;int z)
     {
      a=x;
      b=y;
      c=z;
     }
     void calLargest()
     {
      if(a>b&&a>c)
          cout<<"largest number is "<<a<<endl;
      else if(b>a&&b>c)
         cout<<"largest number is "<<b<<endl;
      else
          cout<<"largest number is "<<c<<endl;
     }
};
int main()
{
LargestNumber l1;
l1.setN(5,6,7);

return 0;
}
