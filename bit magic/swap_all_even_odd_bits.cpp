#include<iostream>
using namespace std;


int find(int x)
{

int even_left= x & 0xAAAAAAAA;
int odd_right= x & 0x55555555;
even_left=even_left>>1;
odd_right=odd_right<<1;

return(even_left|odd_right);

}

int main()
{
int t;
cin>>t;
while(t--)
{
int n;
cin>>n;
cout<<find(n)<<endl;

}
return 0;
}
