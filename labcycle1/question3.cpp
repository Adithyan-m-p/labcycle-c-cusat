#include <iostream>
#include<string.h>

using namespace std;
const int size=50;
class bank
{
    string cust_name[size];
    int acc_no[size];
    int k=1000;
    string acc_type[size];
    double balance[size];
    double withdrawamount[size];
    double depositeamount[size],initialamount[size];
    double pin[size];
    int i=0;
    public:
    double new_acc();
    double withdraw();
    double deposite();
    void showbalance();
    void acc_statement();
};
double bank::new_acc()
{
    balance[i]=0;
    withdrawamount[i]=0;
    depositeamount[i]=0;
    cout<<"\n enter your name :  ";
    cin>>cust_name[i];
    cout<<"\n enter your acc_type : ";
    cin>>acc_type[i];
    cout<<"\n enter initial amount to deposite : ";
    cin>>initialamount[i];
    balance[i]+=initialamount[i];
    cout<<"\n enter pin : ";
    cin>>pin[i];
    acc_no[i]=k;
    for(int j=0;j<::size;j++)
    cout<<"------------------------------------------------------------------";
    cout<<"\t\t\n your account is created ";
    cout<<"\t\t\n name of  account holder : "<<cust_name[i];
    cout<<"\t\t\n acoount type : "<<acc_type[i];
    cout<<"\t\t\n account number : "<<acc_no[i];
    cout<<"\t\t\n pin number : "<<pin[i];
    cout<<"\t\t\n balance :  "<<balance[i];
    cout<<"\n -----------------------------------------------------------------\n";
    i++;
    k++;
    return pin[i],balance[i],acc_no[i];
}
double bank::deposite()
{
    
    int a,b,c;
    cout<<"enter pin \n";
    cin>>a;
    cout<<"enter account number \n";
    cin>>c;
    for(b=0;b<::size;b++)
    {
        if(a==pin[b] && c== acc_no[b])
        {
            cout<<"enter the amount to deposite \n";
            cin>>depositeamount[b];
            balance[b]=balance[b]+depositeamount[b];
            cout<<"-----------------------------------------------------------------\n";
            cout<<"deposite succesfull \n";
            cout<<"-----------------------------------------------------------------\n";
            break;
        }
        else if(b>i)
        {
            cout<<"-----------------------------------------------------------------\n";
            cout<<"invalid pin \n";
            cout<<"-----------------------------------------------------------------\n";
            break;
        }
    }
 
    return balance[b],depositeamount[b];
}
double bank::withdraw()
{
    int a,b,c;
    cout<<"enter pin number : \n";
    cin>>a;
    cout<<"enter account number \n";
    cin>>c;
    for(b=0;b<::size;b++)
    {
        if(a==pin[b] && c==acc_no[b])
        {
            cout<<"enter amount to withdraw : \n";
            cin>>withdrawamount[b];
            if(balance[b]>=500)
            {
                balance[b]-=withdrawamount[b];
                cout<<"-----------------------------------------------------------------\n";
                cout<<"withdraw successfull \n";
                cout<<"remaining balance = "<<balance[b]<<"\n";
                cout<<"-----------------------------------------------------------------\n";
                break;
                
            }
            else
            {
                cout<<"low balance";
                break;
            }
        }
    
        else if(b>i)
        {
            cout<<"-----------------------------------------------------------------\n";
            cout<<"invalid pin \n";   
            cout<<"-----------------------------------------------------------------\n";  
            break; 
        }
    }

    return balance[b],withdrawamount[b];
}
void bank::showbalance()
{
    int a,b,c;
    cout<<"enter pin \n";
    cin>>a;
    cout<<"enter account number \n";
    cin>>c;
    for(b=0;b<::size;b++)
    {
        if(a==pin[b] && c==acc_no[b])
        {
            cout<<"-----------------------------------------------------------------\n";
            cout<<"balance : "<<balance[b]<<"\n";
            cout<<"-----------------------------------------------------------------\n";
            break;
        }
        else if(b>i)
        {
            cout<<"-----------------------------------------------------------------\n";
            cout<<"invalid pin \n";
            cout<<"-----------------------------------------------------------------\n";
            break;
        }
    }
}
void bank::acc_statement()
{
    int a,b,c;
    cout<<"enter pin \n";
    cin>>a;
    cout<<"enter account number \n";
    cin>>c;
    for(b=0;b<::size;b++)
    {
        if(a==pin[b] && c==acc_no[b])
        {
           cout<<"---------------------------------------------------------------\n";
           cout<<"\t\taccount holder name : "<<cust_name[b]<<"\n";
           cout<<"\t\taccount type : "<<acc_type[b]<<"\n";
           cout<<"\t\tinitial amount : "<<initialamount[b]<<"\n";
           cout<<"\t\t last deposite amount : "<<depositeamount[b]<<"\n";
           cout<<"\t\tlast withdraw : "<<withdrawamount[b]<<"\n";
           cout<<"\t\tavailable balance : "<<balance[b]<<"\n";
           cout<<"---------------------------------------------------------------\n";
           break;
        }
    
        else if(b>i)
        {
            cout<<"---------------------------------------------------------------\n";
            cout<<"invalid pin \n";
            cout<<"---------------------------------------------------------------\n";
            break;
        }
    }
}

int main()
{
    bank a;
    int b;
    do
    {
        cout<<"*******************************************************\n";
        cout<<"1 add account \n";
        cout<<"2 deposite \n";
        cout<<"3 withdraw \n";
        cout<<"4 showbalance\n";
        cout<<"5 account statement\n";
        cout<<"6 quit \n";
        cout<<"*******************************************************\n";
        cout<<"what is your choice\n";
        cin>>b;
        switch(b)
        {
            case 1:
            a.new_acc();
            break;
            case 2:
            a.deposite();
            break;
            case 3:
            a.withdraw();
            break;
            case 4:
            a.showbalance();
            break;
            case 5:
            a.acc_statement();
            break;
            case 6:
            cout<<"---------------------------------------------------------------\n";
            cout<<"thank you visite again \n";
            cout<<"---------------------------------------------------------------\n";
            break;
            default:
            cout<<"---------------------------------------------------------------\n";
            cout<<"invalid input";
            cout<<"---------------------------------------------------------------\n";
        }
    }while(b!=6);

    return 0;
}
