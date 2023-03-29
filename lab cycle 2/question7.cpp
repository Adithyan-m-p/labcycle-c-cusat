#include<iostream>
using namespace std;
class alpha
{
    int a;
    public:
    alpha(int b)
    {
        a=b;
        cout<<"alpha is called \n";
    }
    int getalpha()
    {
        return a;
    }
};
class beta
{
    int b;
    public:
    beta(int a)
    {
        b=a;
        cout<<"beta called \n";
    }
    int getbeta()
    {
        return b;
    }

};
class gama:public alpha,public beta
{
    int g;
    public:
    gama(int a,int b,int c):alpha(a),beta(b)
    {
        g=c;
        cout<<"gama is called \n";
    }
    void display()
    {
        cout<<"alpha = "<<getalpha()<<endl;
        cout<<"beta = "<<getbeta()<<endl;
        cout<<"gama = "<<g<<endl;
    }
};
int main()
{
    int a,b,g;
    cout<<"enter the value of alpha : ";
    cin>>a;
    cout<<"enter the value of beta : ";
    cin>>b;
    cout<<"enter the value of gama : ";
    cin>>g;
    gama g1(a,b,g);
    g1.display();
    return 0;
}

