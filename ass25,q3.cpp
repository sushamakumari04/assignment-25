//3. Define a class Factorial and define an instance member function to find the Factorial of a number using class.
#include<iostream>
using namespace std;
class Factorial
{
private:
   int num;
public:
   setFact(int n)
   {
     num = n;
   }
   void calFact()
   {
    int p=1;
    while(num!=0)
    {
     p=p*num;
     num--;
    }
    cout<<"The factorial of a number is "<<p<<endl;

   }
};
int main()
{
Factorial f1;
f1.setFact(5);
f1.calFact();
return 0;
}
