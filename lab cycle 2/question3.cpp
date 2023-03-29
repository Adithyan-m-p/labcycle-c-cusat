#include<iostream>
using namespace std;
class vector
{
    int i;
    int j;
    int k;
    public:
    friend vector operator * (vector,vector);
    friend istream & operator >> (istream&,vector&);
    friend ostream & operator << (ostream&,vector&);
};
vector operator * (vector a,vector b)
{
    vector c;
    c.i=(a.j*b.k)-(a.k*b.j);
    c.j=-((a.i*b.k)-(a.k*b.i));
    c.k=(a.i*b.j)-(b.i*a.j);
    return c;
}
istream & operator >>(istream & put,vector & a)
{
    put>>a.i;
    put>>a.j;
    put>>a.k;
    return put;
}
ostream & operator << (ostream & show,vector & a)
{
    show<<"< "<<a.i<<" , "<<a.j<<" , "<<a.k<<" >\n";
    return show;
}

int main()
{
    vector v1,v2,v3;
    cout<<"enter value of  first vector i j k respectively : \n";
    cin>>v1;
    cout<<endl;
    cout<<"enter value of  second vector i j k respectively : \n";
    cin>>v2;
    cout<<endl;
    cout<<"the first vector is : ";
    cout<<v1;
    cout<<"the second vector is : ";
    cout<<v2;
    cout<<"\n the cross product of given two vector is : ";
    v3=v1*v2;
    cout<<v3;
    return 0;
}