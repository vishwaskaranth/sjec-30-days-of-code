#include<iostream>
using namespace std;
int main()
{
    int i,a,b;
    cout<<"ENTER 2 NUMBERS: ";
    cin>>a>>b;
    for( i=0;i<=b;i++)
    {if (i%3==0)
    cout<<"Foo"<<endl;
    else if(i%2==0)
    {cout<<"Bar"<<endl;
    }
    else{
        cout<<"Baz"<<endl;
    }}
    return 0;
    
    
}