Multiples of 3 and 5 first question:
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int sum=0;
    for(int i=0;i<n;i++)
    {
        if(i%3==0 or i%5==0)
        {
           sum+=i;
        }
    }
    cout<<sum<<endl;
}
