#include<iostream>
#include<cstring>
using namespace std;
class calgrade
{
    private:
    string name;
    int roll_no;
    float mark[3];
    string grade[4];
    
    public:
    void input();
    void calcgrade();
    void display()
    {
        cout<<"-----------------------------------------------\n";
        cout<<"\t\tname of the student : "<<name<<"\n";
        cout<<"\t\troll number : "<<roll_no<<"\n";
        cout<<"\t\tfor english   "<<grade[0]<<" grade\n";
        cout<<"\t\tfor  maths    "<<grade[1]<<" grade\n";
        cout<<"\t\tfor chemistry "<<grade[2]<<" grade\n";
        cout<<"------------------------------------------------\n";
    }
    
};

void calgrade::input()
{
    cout<<"enter name of the student\n";
    cin>>name;
    cout<<"enter rollno of the student\n";
    cin>>roll_no;
    cout<<"enter mark of english maths chemistry respectivily\n";
    for(int i=0;i<3;i++)
    {
        cin>>mark[i];
    }
}

void calgrade::calcgrade()
{
    int i=0,j=0;
    while(j<3)
    {
        while(i<3)
        {
            if(mark[i]>90 && mark[i]<=100)
            {
                grade[j]="A+";
            }
            else if(mark[i]>80 && mark[i]<=90)
            {
                grade[j]="A";
            }
            else if(mark[i]>70 && mark[i]<=80)
            {
                grade[j]="B+";
            }
            else if(mark[i]>60 && mark[i]<=70)
            {
                grade[j]="B";
            }
            else if(mark[i]>50 && mark[i]<=60)
            {
                grade[j]="C+";
            }
            else if(mark[i]>40 && mark[i]<=50)
            {
                grade[j]="C";
            }
            else if(mark[i]>30 && mark[i]<=40)
            {
                grade[j]="D+";
            }
            else if(mark[i]>20 && mark[i]<=30)
            {
                grade[j]="D";
            }
            else 
            {
                grade[j]="E";
            }
            i++;
            j++;
        }
        
    }
    
}


int main()
{
    int no_s;
    cout<<"enter how many student\n";
    cin>>no_s;
    calgrade a[no_s];
    for(int i=0;i<no_s;i++)
    {
    a[i].input();
    a[i].calcgrade();
    }
    for(int i=0;i<no_s;i++)
    {
        a[i].display();
    }
    return 0;
}

