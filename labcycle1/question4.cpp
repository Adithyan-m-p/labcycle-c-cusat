#include<iostream>
#include<cstring>
using namespace std;
class strings
{
    char*name;
    int length;
    public:
    strings()
    {
        length=0;
        name=new char[length+1];
    }
    strings( char *a);
    void concatinate(strings,strings);
    void compare(strings,strings);
    void display();
};
strings::strings( char *a)
{
    length=strlen(a);
    name=new char[length+1];
    strcpy(name,a);
}
void strings :: concatinate(strings a,strings b)
{
    length=strlen(a.name)+strlen(b.name);
    delete name;
    name=new char[length+1];
    strcpy(name,a.name);
    strcat(name,b.name);
}
void strings :: compare(strings a,strings b)
{
    int l1,l2;
    delete name;
    l1=strlen(a.name);
    l2=strlen(b.name);
    if(l1==l2)
    {
        cout<<"both strings are of same size \n";
    }
    else if(l1<l2)
    {
        cout<<b.name<<" is larger than "<<a.name<<endl;
    }
    else
    {
        cout<<a.name<<" is larger than "<<b.name<<endl;
    }
}
void strings::display()
{
    cout<<"the concatinated string is : "<<name<<endl;
    cout<<"its size is : "<<length<<endl;
}
int main()
{
    char *a;
    char *b;
    a=new char[10];
    b=new char[10];
   cout<<"enter first string : ";
    cin>>a;
    cout<<"enter second string : ";
    cin>>b;
    strings s1(a);
    strings s2(b);
    strings s3;
    s3.concatinate(s1,s2);
    s3.display();
    s3.compare(s1,s2);
    
    return 0;
}