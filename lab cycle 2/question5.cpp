#include<iostream>
#include<cstring>
using namespace std;
class student
{
    protected:
    int roll_no;
    string name;
    public:
    void put_data();
};
void student::put_data()
{
    int i=1;
    cout<<"enter the name of student  : ";
    cin>>name;
    cout<<"enter the roll_number of student  : ";
    cin>>roll_no;
    i++;
}
class text
{
    protected:
    float*sub;
    public:
    text()
    {}
    text(int);
    void get_mark(int);
};
text::text(int a)
{
    sub=new float[a];
}
void text::get_mark(int i)
{
    cout<<"enter the mark of subject out of 80 : ";
    cin>>sub[i];
}
class result:public text
{
    protected:
    float tmark;
    float*grace;
    public:
    result()
    {}
    result(int a):text(a)
    {
        tmark=0;
        grace=new float[a];
    }
    void get_gmark(int a)
    {
        
        cout<<"enter grace mark obtained by  student out of 20 : ";
        cin>>grace[a];
        
    }
    void get_tmark(int);
};
void result::get_tmark(int i)
{
    
    tmark+=sub[i]+grace[i];
}
class grades:public student,public result
{
    string grade;
    public:
    grades(int a):result(a)
    {}
    void calgrade();
    void display(int);
};
void grades::calgrade()
{
    if(tmark >90 && tmark <=100)
    {
        grade ="A+";
    }
    else if(tmark >80 && tmark<=90)
    {
        grade ="A";
    }
    else if(tmark >70 && tmark <=80)
    {
        grade ="B+";
    }
    else if(tmark>60  && tmark <=70)
    {
        grade ="B";
    }
    else if(tmark >50 && tmark <=60)
    {
        grade ="C+";
    }
    else if(tmark >40 && tmark <=50)
    {
        grade ="C";
    }
    else if(tmark >30 && tmark <=40)
    {
        grade ="D+";
    }
    else if(tmark >20 && tmark <=30)
    {
        grade ="D";
    }
    else 
    {
        grade ="E";
    }

}
void grades::display(int i)
{
    cout<<"____________________________________\n";
    cout<<"student : "<<name<<"\n";
    cout<<"roll no : "<<roll_no<<endl;
    cout<<"mark obtained : "<<sub[i]<<endl;
    cout<<"grace mark obtained : "<<grace[i]<<endl;
    cout<<"total mark : "<<tmark<<endl;
    cout<<"grade : "<<grade<<endl;
    cout<<"____________________________________\n";
}
int main()
{
    int a;
    cout<<"enter how many students are present : ";
    cin>>a;
    grades s[a](a);
    for(int i=0;i<a;i++)
    {
        s[i].put_data();
        s[i].get_mark(i);
        s[i].get_gmark(i);
        s[i].get_tmark(i);
        s[i].calgrade();
        cout<<endl;
    }
     for(int i=0;i<a;i++)
    {
        s[i].display(i);
    }
    return 0;

}