#include<iostream>
#include<cmath>
using namespace std;

class shape
{
    protected:
    float area;
    const float pi=3.14;
};

class circle:public shape
{
    float  radius;
    public:
    virtual void getdata()
    {
        cout<<"enter the  radius of the circle ";
        cin>>radius;
    }
    virtual void calarea()
    {
        area=pi*pow(radius,2);
        cout<<"area of circle = "<<area<<endl;
    }
};

class square: public circle
{
    float  side;
    public:
    void getdata()
    {
        cout<<"enter the  side of the square ";
        cin>>side;
    }
    void calarea()
    {
        area=pow(side,2);
        cout<<"area of square = "<<area<<endl;
    }
};
class ellipse:public circle
{
    float  a,b;
    public:
    void getdata()
    {
        cout<<"enter the  length of semi major axis of the ellipse ";
        cin>>a;
        cout<<"enter the  length of semi minor axis of the ellipse ";
        cin>>b;
    }
    void calarea()
    {
        area=pi*a*b;
         cout<<"area of ellipse = "<<area<<endl;
    }
};
class rectangle:public circle
{
    float  a,b;
    public:
    void getdata()
    {
        cout<<"enter the  length of the rectangle ";
        cin>>a;
        cout<<"enter the  breadth  of the rectangle ";
        cin>>b;
    }
    void calarea()
    {
        area=a*b;
         cout<<"area of rectangle = "<<area<<endl;
    }
};
int main()
{
    circle *area;
    area=new circle;
    area -> getdata();
    area ->calarea();
    area=new ellipse;
    area -> getdata();
    area -> calarea();
    area=new rectangle;
    area -> getdata();
    area -> calarea();
    area=new square;
    area -> getdata();
    area -> calarea();
   
    
    return 0;
}