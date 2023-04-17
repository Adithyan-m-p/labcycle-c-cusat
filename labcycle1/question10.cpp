#include<iostream>
#include<conio.h>
#include<cstring>
using namespace std;
const int size=50;
class shopping
{
    int count;
    int code[size];
    string name[size];
    float price[size];
    float quantity[size];
    float total_price;
    public:
    shopping()
    {
        count=0;
        total_price=0;

    }
    void add_item();
    void cart();
    void show_item();
    void delete_item();
    void slip();
};
void shopping::add_item()
{
    cout<<"-------------------------------------------\n";
    cout<<"enter the name of the item \n";
    cin>>name[count];
    cout<<"enter the quantity of given item \n";
    cin>>quantity[count];
    cout<<"enter the item code of the function \n";
    cin>>code[count];
    cout<<"enter price of the item \n";
    cin>>price[count];
    total_price+=price[count];
    cout<<"item added \n";
    count++;
    cout<<"-------------------------------------------\n";
}
void shopping:: cart()
{
    cout<<"\t\t cart \n";
    cout<<"-------------------------------------------\n";
    cout<<"  code \t"; cout<<"  name \t"; cout<<"  price \n"; 
    cout<<"-------------------------------------------\n";
    for(int i=0;i<count;i++)
    {
        cout<<"  "<<code[i]<<"\t"; cout<<"  "<<name[i]<<"\t"; cout<<"  "<<price[i]<<"\n\n";
    } 
    cout<<"-------------------------------------------\n";
}
void shopping::delete_item()
{
    int a;
    cout<<"enter the code of item to delete \n";
    cin>>a;
    for(int i=0;i<count;i++)
    {
        if(code[i]==a)
        {
            total_price-=price[i];
            price[i]=0;
            code[i]=0;
            name[i]=" ";
            cout<<"-------------------------------------------\n";
            cout<<"item succesfully removed \n";
            cout<<"-------------------------------------------\n";
            break;
        }
    }
}
void shopping::slip()
{
    cout<<"-------------------------------------------\n";
    cout<<"  code \t"; cout<<"  name \t"; cout<<"  price \n"; 
    cout<<"-------------------------------------------\n";
    for(int i=0;i<count;i++)
    {
        cout<<"  "<<code[i]<<"\t"; cout<<"  "<<name[i]<<"\t"; cout<<"  "<<price[i]<<"\n\n";
    } 
    cout<<"-------------------------------------------\n";
    cout<<"-------------------------------------------\n";
    cout<<"   total amount : \t"<<total_price<<endl;
    cout<<"-------------------------------------------\n";
}
int main()
{
    int a;
    shopping s;
    do{
        cout<<"***********************\n";
        cout<<"1 . add_item \n";
        cout<<"2 . delete_item \n";
        cout<<"3 . slip \n";
        cout<<"4 . quit  \n";
        cout<<"***********************\n";
        cout<<"chose any action : ";
        cin>>a;
        
        switch(a)
        {
            case 1:
            {
               s.add_item();
               break;
            }
            case 2:
            {
                s.delete_item();
                break;
            }
            case 3:
            {
                s.slip();
                break;
            }
            case 4:
            {
                cout<<"\n THANK YOU";
                break;
            }
            default:
            {
                cout<<"\n invalid statement";
            }
        }
        if(a<3)
        {
            s.cart();
        }
        
    }while(a!=4);
}