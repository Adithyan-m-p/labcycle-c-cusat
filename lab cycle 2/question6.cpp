#include<iostream>
using namespace std;
class student
{
    protected:
    char*name;
    int roll_no;
    public:
    void getdata()
    {
        cout<<"enter the name of the student : ";
        name=new char[10];
        cin>>name;
        cout<<"enter the roll number : ";
        cin>>roll_no;
    }
};
class test:public virtual student
{
    protected:
    float sub[4];
    public:
    void getmark();
};
void test :: getmark()
{
    cout<<"enter the mark obtained in english : ";
    cin>>sub[0];
    cout<<"enter the mark obtained in maths : ";
    cin>>sub[1];
    cout<<"enter the mark obtained in chemistry : ";
    cin>>sub[2];
    cout<<"enter the mark obtained in physics : ";
    cin>>sub[3];
};
class sports:public virtual student
{
    protected:
    float score;
    public:
    void getscore()
    {
        cout<<"enter the mark obtained in sports out of 50 : ";
        cin>>score;
    }
};
class result:public test,public sports
{
    float tmark;
    const char*status;
    public:
    void display();
    void getdata();
};
void result :: getdata()
{
    tmark=0;
    int mark=0;
    for(int i=0;i<4;i++)
    {
        mark+=sub[i];
    }
    tmark=(mark/2.0)+score;
    status=new char[10];
    if(tmark>=150)
    {
        status="pass";
    }
    else
    {
        status="fail";
    }
}
void result :: display()
{
    cout<<"-------------------------------------\n";
    cout<<"name : "<<name<<endl;
    cout<<"roll no : "<<roll_no<<endl;
    cout<<"total mark : "<<tmark<<endl;
    cout<<"status : "<<status<<endl;
    cout<<"-------------------------------------\n\n";
}
int main()
{
    cout<<"enter how many student : ";
    int a;
    cin>>a;
    result st[a];
    for(int i=0;i<a;i++)
    {
        st[i].student::getdata();
        st[i].getmark();
        st[i].getscore();
        st[i].getdata();
        cout<<endl;
    }
    for(int i=0;i<a;i++)
    {
        st[i].display();
    }
    return 0;

}