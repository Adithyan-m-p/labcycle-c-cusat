#include<iostream>
using namespace std;
class matrix
{
	int**p;
	int d1,d2;
	public:
	matrix()
	{}
	matrix(int ,int);
	~matrix();
    void getdata(int i,int j,int value)
    {
        p[i][j]=value;
    }
    void putdata();
    void display(int ,int  );
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
void matrix::putdata()
{
    int value;
    for(int i=0;i<d1;i++)
    {
        for(int j=0;j<d2;j++)
        {
            cin>>value;
            getdata(i,j,value);
        }
    }
}
matrix::~matrix()
{
	for(int i=0;i<d1;i++)
	{
		delete p[i];
	}
	delete p;
}

void matrix::display(int a,int b )
{
    cout<<"the matrix is : \n\n";
	for(int i=0;i<d1;i++)
    {

		for(int j=0;j<d2;j++)
		{
			cout<<p[i][j]<<"   ";
		}
		cout<<endl<<endl;
	}
}

	int main()
	{
		int a,b;
		cout<<"enter dimension correctly"<<endl;
		cin>>a>>b;
		matrix c(a,b);
		cout<<"enter elements of  matrix row by row"<<endl;
        c.putdata();
		c.display(a,b);
		return 0;
	}



              

