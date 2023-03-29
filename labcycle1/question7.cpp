#include<iostream>
using namespace std;
class matrix
{
    int**p;
    int d1,d2;
    public:
    matrix()
    {}
    matrix(int,int);
    void create();
    void display();
    void matrix_add(matrix,matrix);
    void matrix_mul(matrix,matrix);
    void matrix_trans(matrix);
    void matrix_trace(matrix);
};
matrix::matrix(int a,int b)
{
    d1=a;
    d2=b;
    p=new int*[d1];
    for(int i=0;i<d1;i++)
    {
        p[i]=new int[d2];
    }
}
void matrix::create()
{
    for(int i=0;i<d1;i++)
    {
        for(int j=0;j<d2;j++)
        {
            int value;
            cin>>value;
            p[i][j]=value;
        }
    }
}
void matrix::display()
{
    for(int i=0;i<d1;i++)
    {
        for(int j=0;j<d2;j++)
        {
            cout<<p[i][j]<<"\t";
        }
        cout<<endl<<endl<<endl;
    }
}
void matrix :: matrix_add(matrix a,matrix b)
{ 
    if(a.d1==b.d1 && a.d2==b.d2)
    {
        cout<<endl<<"the sum of 2 matrix is : \n";
        for(int i=0; i<a.d1;i++)
        {
            for(int j=0;j<b.d2;j++)
            {
                cout<<a.p[i][j]+b.p[i][j]<<"\t";
            }
            cout<<endl<<endl;
        }
        

    }
    else
    {
        cout<<"\n invalid dimension for addition check the dimension again \n";
    }
}
void matrix::matrix_mul(matrix a,matrix b)
{ 
    if(a.d2==b.d1)
    {
        matrix c(a.d1,b.d2);
        for(int i=0;i<a.d1;i++)
        {
            for(int j=0;j<b.d2;j++)
            {
                c.p[i][j]=0;
                int value=0;
                for(int k=0;k<a.d2;k++)
                {
                   value=a.p[i][k]*b.p[k][j];
                   c.p[i][j]+=value;
                }
            }
        }

        for(int i=0;i<c.d1;i++)
        {
            for(int j=0;j<c.d2;j++)
            {
                cout<<c.p[i][j]<<"\t";
            }
            cout<<"\n\n";
        }
    }
    else
    {
        cout<<"\n invalid dimension for multiplication check the dimension \n";
    }
}
void matrix::matrix_trans(matrix a)
{
    matrix m1(a.d2,a.d1);
    cout<<endl;
    for(int i=0;i<m1.d1;i++)
    {
        int value=0;
        for(int j=0;j<m1.d2;j++)
        {
            value=a.p[j][i];
            m1.p[i][j]=value;
        }
    }
    for(int i=0;i<m1.d1;i++)
    {
        for(int j=0;j<m1.d2;j++)
        {
            cout<<m1.p[i][j]<<"\t";
        }
        cout<<endl<<endl;
    }
}
void matrix::matrix_trace(matrix m1)
{
    int trace=0;
    if(m1.d1==m1.d2)
    {
        for(int i=0;i<m1.d1;i++)
        {
            for(int j=0;j<m1.d2;j++)
            {
                if(i==j)
                {
                    trace+=m1.p[i][j];
                }
            }
        }
        cout<<trace<<endl<<endl;
    }
    else{
        cout<<"invalid dimension for trace \n ";
    }
    
    
}




int main()
{
    int a,b;
    int c,d;
    cout<<"enter the dimension of 1st metrix row & coloum : "<<endl;
    cin>>a>>b;
    cout<<"enter the dimension of 2nd metrix row & coloum : "<<endl;
    cin>>c>>d;
    matrix m1(a,b),m2(c,d),m3;
    cout<<"enter the element row wise for first matrix : \n"<<endl;
    m1.create();
    cout<<"first matrix is : "<<endl;
    m1.display();
    cout<<"enter the element row wise for second matrix : \n"<<endl;
    m2.create();
    cout<<"second matrix is : "<<endl;
    m2.display();
    m3.matrix_add(m1,m2);
    cout<<"\n the multiplication of two matrix is : \n\n";
    m3.matrix_mul(m1,m2);
    cout<<"the transpose of first matrix is : \n";
    m3.matrix_trans(m1);
    cout<<" the transpose of second matrix is : \n";
    m3.matrix_trans(m2);
    cout<<"the trace of first matrix is : \n";
    m3.matrix_trace(m1);
    cout<<"the trace of second matrix is : \n";
    m3.matrix_trace(m2);
    return 0;
}

