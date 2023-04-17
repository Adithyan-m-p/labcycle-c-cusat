#include <iostream>
using namespace std;

template <class T>
void divide(T a,T b)
{
    
        if(b==0)
        {
            throw(a);
        }
        else
        {
            cout<<"the division occure value is : "<<a/b<<endl;
        }
}

int main()
{
    
      try{
        divide<int> (10,5);
        divide<float> (10.5,0);
     }
     catch(...)
     {
      cout<<"an exception catched \n";
     }
    
    return 0;
    
}
    
    
    

