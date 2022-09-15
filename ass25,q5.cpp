//5. Define a class ReverseNumber and define an instance member function to find
//Reverse of a Number using class.

#include<iostream>
using namespace std;

class ReverseNumber
{
  private:
      int num;
  public:
     void setN(int n)
     {
      num = n;
     }
     void reverse_Number()
     {
      int rem;
      while(num!=0)
        {
         rem=num%10;
         cout<<rem;
         num=num/10;
        }
     }
};
int main()
{
ReverseNumber r1;
r1.setN(567);
r1.reverse_Number();

return 0;
}
