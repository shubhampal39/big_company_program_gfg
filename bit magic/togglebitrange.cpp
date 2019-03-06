//Given a non-negative number N and two values L and R. The problem is to toggle the bits in the range L to R in the binary representation of N, i.e, to toggle bits from the rightmost Lth bit to the rightmost Rth bit

#include<iostream>
using namespace std;


int main()
{
int t;
cin>>t;

while(t--)
{
  
int n,l,r;
cin>>n>>l>>r;
int num=((1<<r)-1)^(1<<(l-1)-1);    //((1<<r)-l) error
int ans=n^num;
cout<<ans<<endl;
}
return 0;

}

