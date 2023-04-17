#include<iostream>
using namespace std;

template <class T>
class test
{
    protected:
    T a;
    T b;
    public:
    test(T e, T d)
    {
        a=e;
        b=d;
    }
    T sum()
    {
        return a+b;
    }
};


int main()
{
    test<int> t1(10,20);
    test<float> t2(10.2,1.3);
   int d= t1.sum();
   float c=t2.sum();
   cout<<"the value of integer addition is : "<<d<<endl;
   cout<<"the value of float addition is : "<<c<<endl;
   return 0;
    
}