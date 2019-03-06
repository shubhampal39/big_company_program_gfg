//Given a positive integer N. The task is to check if N is a power of 2. That is N is 2x for some x.

#include<iostream>
using namespace std;


int main()
{
int t;
cin>>t;

while(t--)
{
  
int n;
cin>>n;

if(n==0)
{cout<<"NO"<<endl;}

else{

  int b=~(n^(n-1));
    cout<<b;
    if(b==0)
       {cout<<"YES"<<endl;}
     else
        {cout<<"NO"<<endl;}
 
        }
}
return 0;

}

