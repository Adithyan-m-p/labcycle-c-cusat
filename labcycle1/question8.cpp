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
    complex(int);
    complex(int,int);
    void sum(complex,complex);
    void show();

};
complex::complex(int a)
{
    real=a;
    imag=a;
}
complex::complex(int a,int b)
{
    real=a;
    imag=b;
}
void complex::sum(complex a,complex b)
{
    cout<<"the sum of given 2 complex number is : \n";
    real=a.real+b.real;
    imag=a.imag+b.imag;
   
}
void complex::show()
{
    if(imag>=0)
    {
        cout<<real<<" + i "<<imag<<endl;
    }
    else{
        cout<<real<<" - i "<<-imag<<endl;
    }
}
int main()
{
    int a,b,c;
    cout<<"enter the value if real and imag are same \n";
    cin>>a;
    cout<<"enter the real part \n";
    cin>>b;
    cout<<"enter the imag part \n";
    cin>>c;
    complex s1(a),s2(b,c),s3;
    s3.sum(s1,s2);
    s3.show();
    return 0;
}