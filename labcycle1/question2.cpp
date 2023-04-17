#include <iostream>
#include<math.h>

using namespace std;
class calarea
{
    private:
    float areas[5];
    public:
    int area(float a,float b, float c);
    float area(float a);
    float area(float a,float b);
    float area(int a,float b);
    float area(int a,int b);
    void display(void)
    {
        cout<<"----------------------------------------\n";
        cout<<" area of triangle = "<<areas[0];
        cout<<"\narea of square = "<<areas[1];
        cout<<"\narea of rectangle = "<<areas[2];
        cout<<"\narea of circle = "<<areas[3];
        cout<<"\narea of parallelogram = "<<areas[4];
        cout<<"\n----------------------------------------\n";
        
    }
    
};
int calarea::area(float a,float b, float c)
{
    float s=0;
    s=((a+b+c)/2);
    areas[0]=sqrt(s*(s-a)*(s-b)*(s-c));
    return areas[0];
}
float calarea::area(float a)
{
    areas[1]=pow(a,2);
    return areas[1];
}
float calarea::area(float a,float b)
{
    areas[2]=a*b;
    return areas[2];
}
float calarea::area(int a,float b=3.14)
{
    areas[3]=b*pow(a,2);
    return areas[3];
}
float calarea::area(int a,int b)
{
    areas[4]=a*b;
    return areas[4];
}


int main()
{
    float a,b,c,s,l;
    int r,h,base;
    cout<<"enter 3 sides of triangle\n";
    cin>>a>>b>>c;
    cout<<" enter the side of square\n";
    cin>>s;
    cout<<"enter sides of rectangle\n";
    cin>>l>>b;
    cout<<" enter radius of circle\n";
    cin>>r;
    cout<<"enter base and height of parallelogram\n";
    cin>>base>>h;
    calarea shape;
    shape.area(a,b,c);
    shape.area(s);
    shape.area(l,b);
    shape.area(r);
    shape.area(base,h);
    shape.display();
    
    return 0;
}
