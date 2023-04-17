#include<iostream>
using namespace std;
class complex
{
    int real;
    int imag;
    public:
    complex()
    {
    }
    complex(int a,int b)
    {
        real=a;
        imag=b;
    }
    void display()
    {
        if(imag >= 0)
        {
            cout<<real<<" + i"<<imag<<endl;
        }
        else
        {
            cout<<real<<" - i"<<-imag<<endl;
        }
    }
    friend void operator +(complex &,complex &);
    friend complex operator *(complex,complex);
};
void operator +(complex &a,complex &b)
{
    complex c;
    c.real=a.real;
    c.imag =a.imag;
    a.real=c.real + b.real;
    a.imag=c.imag + b.imag;
}
complex operator *(complex a,complex b)
{
    complex c;
    c.real=a.real*b.real;
    c.imag=a.imag*b.imag;
    return c;
}
int main()
{
    int r1,i1;
    int r2,i2;
    cout<<"enter the real part of first complex number : ";
    cin>>r1;
    cout<<"enter the imag part of first complex number : ";
    cin>>i1;
    cout<<"enter the real part of second complex number : ";
    cin>>r2;
    cout<<"enter the imag part of second complex number : ";
    cin>>i2;
    complex c1(r1,i1);
    cout<<"first complex number is : ";
    c1.display();
    complex c2(r2,i2);
    cout<<"second complex number is :";
    c2.display();
    complex c3;
    cout<<"product of complex number is :";
    c3=c1*c2;
    c3.display();
    c1 + c2;
    cout<<"sum of  complex number is :";
    c1.display();
    return 0;
}
    
