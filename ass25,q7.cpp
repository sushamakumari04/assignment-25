//7. Define a class Greatest and define instance member function to find Largest among 3 numbers using classes.
#include<iostream>
using namespace std;

class Greatest
{
private:
     int a,b,c;
public:
    void setN(int x,int y ,int z)
    {
     a=x;
     b=y;
     c=z;
    }
    void largest()
    {
      if(a>b&&a>c)
        cout<<a<<" is the largest number "<<endl;
      else if(b>a&&b>c)
        cout<<b<<" is the largest number "<<endl;
      else
        cout<<c<<" is the largest number "<<endl;
    }
};
int main()
{
Greatest g1;
g1.setN(45,2,100);
g1.largest();

return 0;
}
