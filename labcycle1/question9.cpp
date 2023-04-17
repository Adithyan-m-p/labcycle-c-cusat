#include<iostream>
using namespace std;
class statics
{
    static int count;
    public:
    statics()
    {
        count++;
    }
    static void show()
    {
        cout<<"count = "<<count<<endl;  
    }
};
int statics::count;
int main()
{
    int a;
    cout<<"enter how many object to create \n";
    cin>>a;
    statics s[a];
    statics::show();
    return 0;
}