#include<iostream>
using namespace std;
class times
{
	int hour;
	int minute;
	int second;
	public:
	times()
	{}
	times(int,int,int);
	void display()
	{
	cout<<hour<<" hours "<<minute<<" minute "<<second<<" seconds "<<endl;
	}
        void  add(times&,times&);
};

times::times(int a,int b,int c)
{
	hour=a;
	minute=b;
	second=c;
	
}
void times::add(times&a,times&b)
{
	times c;
	second=a.second+b.second;
	minute=second/60;
	second=second%60;
	minute=minute+a.minute+b.minute;
	hour=minute/60;
	minute=minute%60;
	hour=a.hour+b.hour+hour;
}

int main()
{
	
	int h1,h2;
	int m1,m2;
	int s1,s2;
	cout<<"enter 2  hour respectivily "<<endl;
	cin>>h1>>h2;
	cout<<"enter 2 minutes respectivily "<<endl;
	cin>>m1>>m2;
	cout<<"enter 2 seconds respectivily "<<endl;
	cin>>s1>>s2;
	times t1(h1,m1,s1),t2(h2,m2,s2),t3;
	t3.add(t1,t2);
	t3.display();
	return 0;
}




	
	
