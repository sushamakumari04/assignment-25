//6. Define a class Square to find the square of a number and write a C++ program to
//Count number of times a function is called.//doubt
#include<iostream>
using namespace std;
class Square
{
private:
    int num;
    static int k;
public:
    void setN(int n)
    {
     num=n;
     k=k+1;
    }
    void showsquareN()
    {
     cout<<"The square of number is "<<num*num<<endl;
    }
    static void countN()
    {
     cout<<"k="<<k<<endl;

    }
};
int Square::k=0;
int main()
{
Square s1,s2;
s1.setN(5);
s2.setN(6);
s1.showsquareN();
s2.showsquareN();
cout<<"k= "<<s1.countN;
return 0;
}
