//You are given two numbers A and B. Write a program to count number of bits needed to be flipped to convert A to B.

#include<iostream>
using namespace std;
int main()
{
int t;
cin>>t;

while(t--)
{
  
int n,m;
cin>>n>>m;

 int ans=(n^m);
int count=0;

while(ans)
{//count += ans & 1; 
   //     ans >>= 1;
   count++;
   ans=ans&(ans-1);
}
cout<<count<<endl;

}
return 0;

}

