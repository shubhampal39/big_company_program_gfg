//Given a number N and a value K. From the right, set the Kth bit in the binary representation of N. 
#include<iostream>
using namespace std;


int main()
{
int t;
cin>>t;

while(t--)
{
  
int n,k;
cin>>n>>k;
int b=n;
if((b>>k)&1)
{
cout<<n<<endl;
}
else
{
int ans=n^(1<<k);
cout<<ans<<endl;
}

}
return 0;

}

