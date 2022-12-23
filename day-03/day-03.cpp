#include<iostream>
using namespace std;
int main()
{
    int avg,n,a[100],sum,i,m;
    cout<<"enter no of element: ";
    cin>>n;
    cout<<"enter the elements to the array";
    for(i=0;i<n;i++)
    {cin>>a[i];}
    sum=0;
    avg=0;
    for(i=0;i<n;i++)
    {sum+=a[i];
    }
    avg=sum/n;
    for(i=0;i<n;i++)
    {if(a[i]>avg)
    {cout<<a[i]<<" ";
    }}
    return 0;

}