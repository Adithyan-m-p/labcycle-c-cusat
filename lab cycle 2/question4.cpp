#include<iostream>
using namespace std;
class matrix
{
    int**p;
    int d1;
    int d2;
    public:
    matrix()
    {}
    matrix(int a,int b)
    {
        d1=a;
        d2=b;
        p=new int*[d1];
        for(int i=0;i<d1;i++)
        {
            p[i]=new int[d2];
        }
    }
    void getelement();
    void display();
    matrix  operator +(matrix );
    friend matrix  operator *(matrix ,matrix );
    int check();

};
void matrix :: getelement()
{
    int value;
    cout<<"enter element row by row \n";
    for(int i=0;i<d1;i++)
    {
        for(int j=0;j<d2;j++)
        {
            cout<<"element("<<i<<","<<j<<") :";
            cin>>value;
            p[i][j]=value;
        }
    }
}
void matrix :: display()
{
    for(int i=0;i<d1;i++)
    {
        for(int j=0;j<d2;j++)
        {
            cout<<p[i][j]<<" \t ";
        }
        cout<<"\n\n";
    }
}
matrix  matrix:: operator +(matrix a)
{
    matrix c(d1,d2);
    if(d1==a.d1 && d2==a.d2)
    {
        for(int i=0;i<c.d1;i++)
        {
            for(int j=0;j<c.d2;j++)
            {
                c.p[i][j]=p[i][j]+a.p[i][j];
            }
        }
    }
    else
    {
        for(int i=0;i<c.d1;i++)
        {
            for(int j=0;j<c.d2;j++)
            {
                c.p[i][j]=0;
            }
        }
    }
    return c;
}
matrix  operator *(matrix a,matrix b)
{
    int value;
    matrix c(a.d1,b.d2);
    if(a.d2==b.d1)
    {
        for(int i=0;i<c.d1;i++)
        {
            for(int j=0;j<c.d2;j++)
            {
                value=0;
                for(int k=0;k<a.d2;k++)
                {
                    value+=a.p[i][k]*b.p[k][j];
                    c.p[i][j]=value;
                }
            }
        }
    }
    else{
        for(int i=0;i<c.d1;i++)
        {
            for(int j=0;j<c.d2;j++)
            {
                c.p[i][j]=0;
            }
        }
    }
    return c;
}
int matrix::check()
{
    int a=0;
    for(int i=0;i<d1;i++)
    {
        for(int j=0;j<d2;j++)
        {
            a+=p[i][j];
        }
    }
    return a;
}
int main()
{
    int r1,c1;
    int r2,c2;
    cout<<"enter dimension of rows of first matrix : ";
    cin>>r1;
    cout<<"enter dimension of coloum of first matrix : ";
    cin>>c1;
    cout<<"enter dimension of rows of second matrix : ";
    cin>>r2;
    cout<<"enter dimension of coloum of second matrix : ";
    cin>>c2;
    matrix m1(r1,c1);
    matrix m2(r2,c2);
    cout<<"first matrix :";
    m1.getelement();
    cout<<"second  matrix :";
    m2.getelement();
    matrix m3;
    cout<<"first matrix is : \n\n";
    m1.display();
    cout<<"\nsecond matrix is : \n\n";
    m2.display();
    m3=m1+m2;
    int a;
    a=m3.check(); 
    if(a!=0)
    {
        cout<<"the sum of 2 matrix is :\n\n";
        m3.display();
        cout<<endl;
    }
    else
    {
        cout<<"invalid syntax for addition \n\n";
    }
    m3=m1*m2;
    a=m3.check();
    if(a!=0)
    {
        cout<<"the multiplication of two matrix : \n\n ";
        m3.display();
        cout<<endl;
    }
    else
    {
        cout<<"invalid syntax for multiplication \n\n";
    }

    return 0;

}