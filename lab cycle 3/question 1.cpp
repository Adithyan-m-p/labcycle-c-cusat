#include<iostream>
using namespace std;

class demo
{
    protected:
    int a;
    public:
   virtual void show()=0;
};

class demo1:public demo
{
    public:
    void show()
    {
        cout<<"enter value is "<<a<<"\n";
    }
    void getdata()
    {
        cout<<"enter value to display \n";
        cin>>a;
    }
};

int main()
{
    demo1 *ptr;
    ptr=new demo1;
    ptr->getdata();
    ptr->show();
    return 0;
    
}