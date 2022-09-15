//2. Define a class Time to represent Time (like 3 hr 45 min 20 sec). Declare appropriate
//number of instance member variables and also define instance member functions to
//set values for time and display values of time.
#include<iostream>
using namespace std;
class Time
{
 private:
    int hour;
    int minute;
    int second;
public:
    void setTime(int x,int y,int z)
    {
     hour = x;
     minute = y;
     second = z;
    }
    void showTime()
    {
     cout<<hour<<"hr"<<" "<<minute<<"min  "<<second<<"sec"<<endl;
    }
};

int main()
{
Time t1,t2;
t1.setTime(4,45,9);
t1.showTime();
return 0;
}
