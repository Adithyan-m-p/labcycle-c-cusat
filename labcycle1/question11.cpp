#include<iostream>
using namespace std;
class class_2;
class class_1
{
    int a1;
    public:
    class_1(int a)
    {
        a1=a;
    }
    friend void exchange(class_1&,class_2&);
    void display()
    {
        cout<<"value of 1st class after exchange : "<<a1<<endl;
    }
};
class class_2
{
    int a2;
    public:
    class_2(int a)
    {
        a2=a;
    }
    friend void exchange(class_1&,class_2&);
    void display()
    {
        cout<<"value of 2nd class after exchange : "<<a2<<endl;
    }

};
void exchange(class_1&a,class_2&b)
{
    int c;
    c=a.a1;
    a.a1 = b.a2;
    b.a2 = c;
}

int main()
{
    int a,b;
    cout<<"enter value of 1st class before exchange \n";
    cin>>a;
    cout<<"enter value of 2nd class before exchange \n";
    cin>>b;
    class_1 x(a);
    class_2 y(b);
    exchange(x,y);
    x.display();
    y.display();
    return 0;
}

