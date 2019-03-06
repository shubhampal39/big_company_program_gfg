#include<iostream>
using namespace std;
#define M 32
int findleftrotate(int n,int d)
{

return (n<<d)|(n>>(M-d));

}

int findrightrotate(int n,int d)
{

return (n >> d)|(n << (M- d)); 
}

int main()
{
int t;
cin>>t;
while(t--)
{
int n,d;
cin>>n>>d;
cout<<findleftrotate(n,d)<<endl;
cout<<findrightrotate(n,d)<<endl;

}
return 0;
}
