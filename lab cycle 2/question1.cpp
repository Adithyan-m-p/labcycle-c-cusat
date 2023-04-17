#include<iostream>
#include<cmath>
using namespace std;
class vector
{
    int i;
    int j; 
    int k;
    public:
    vector()
    {}
    vector(int,int,int);
    void display();
    int operator == (vector);
    int operator != (vector);
    int operator <  (vector);
    int operator >  (vector);
    int operator <= (vector);
    int operator >= (vector);
};
vector::vector(int a, int b, int c)
{
    i=a;
    j=b;
    k=c;
}
int vector:: operator ==(vector a)
{
    if(i==a.i && j==a.j && k==a.k)
    {
        return 1;
    }
    else{ 
        return 0;
    }
}
int vector :: operator !=(vector a)
{
    if(i != a.i || j!=a.j || k!=a.k)
    {
        return 1;
    }
    else 
    {
        return 0;
    }
}
int vector :: operator < (vector a)
{
    int d = sqrt(pow(i,2)+pow(j,2)+pow(k,2));
    int b = sqrt(pow(a.i,2)+pow(a.j,2)+pow(a.k,2));
    vector c;
    if(d<b)
    {
        return 1;

    }
    else{
        return 0;
    }

}

int vector :: operator > (vector a)
{
    int d = sqrt(pow(i,2)+pow(j,2)+pow(k,2));
    int b = sqrt(pow(a.i,2)+pow(a.j,2)+pow(a.k,2));
    vector c;
    if(d>b)
    {
        return 1;

    }
    else{
        return 0;
    }

}
int vector :: operator <= (vector a)
{
    int d = sqrt(pow(i,2)+pow(j,2)+pow(k,2));
    int b = sqrt(pow(a.i,2)+pow(a.j,2)+pow(a.k,2));
    vector c;
    if(d<=b)
    {
        return 1;

    }
    else{
        return 0;
    }

}
int vector :: operator >= (vector a)
{
    int d = sqrt(pow(i,2)+pow(j,2)+pow(k,2));
    int b = sqrt(pow(a.i,2)+pow(a.j,2)+pow(a.k,2));
    vector c;
    if(d>=b)
    {
        return 1;

    }
    else{
        return 0;
    }

}

void vector :: display()
{
    cout<<"< "<<i<<" ,"<<j<<" ,"<<k<<" >";
}
int main()
{
    int a;
    int i1,j1,k1;
    int i2,j2,k2;
    cout<<"enter the dimension of first vector i,j,k respectivily : \n";
    cin>>i1>>j1>>k1;
    cout<<"enter the dimension of second vector i,j,k respectivily : \n";
    cin>>i2>>j2>>k2;
    vector v1(i1,j1,k1);
    vector v2(i2,j2,k2);
    cout<<endl;
    cout<<"first vector : ";
    v1.display();
    cout<<endl<<endl;
    cout<<"second vector : ";
    v2.display();
    cout<<endl<<endl;
    do 
    {
        cout<<"1 checking  vectors equall or not \n";
        cout<<"2 checking  vectors smaller or larger \n";
        cout<<"3 checking  <= \n";
        cout<<"4 checking >=  \n";
        cout<<"5 quit \n\n";
        cout<<"what is your option : ";
        cin>>a;
        cout<<endl;

        switch(a)
        {
            case 1:
            {
                if(v1==v2)
                {
                    cout<<"both vector are equal \n\n";
                }
                else if(v1!=v2)
                {
                    cout<<"not equal \n\n";
                }
                break;
            }
            case 2:
            {
                if(v1<v2)
                {
                    cout<<"the smallest vector is :";
                    v1.display();
                    cout<<endl;
                }
                else
                {
                    cout<<"the smallest vector is :";
                    v2.display();
                    cout<<endl;
                }
                if(v1>v2)
                {
                    cout<<"the largest vector is :";
                    v1.display();
                    cout<<endl<<endl;
                }
                else
                {
                    cout<<"the largest vector is :";
                    v2.display();
                    cout<<endl<<endl;
                }
                break;
            }
            case 3:
            {
                if(v1<=v2)
                {
                    v1.display();
                    cout<< " <= ";
                    v2.display();
                    cout<<endl;
                    cout<<"true ";
                    cout<<endl<<endl;
                }
                else{
                    v1.display();
                    cout<< " <= ";
                    v2.display();
                    cout<<endl;
                    cout<<"false \n\n";
                }
                break;
            }
            case 4:
            {
               if(v1>=v2)
                {
                    v1.display();
                    cout<< " >= ";
                    v2.display();
                    cout<<endl;
                    cout<<"true ";
                    cout<<endl<<endl;
                }
                else{
                    v1.display();
                    cout<< " >= ";
                    v2.display();
                    cout<<endl;
                    cout<<"false \n\n";
                }
                break;
            }
            case 5:
            {
                cout<<"thank you ";
                break;

            }
            default:
            {
                cout<<"enter valid input \n";
            }
        }

    }while(a!=5);
    return 0;
}