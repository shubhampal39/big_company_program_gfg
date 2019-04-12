#include <iostream>
using namespace std;
int find(int a[],int n)
{
int sum=0,leftsum=0;    

for(int i=0;i<n;i++){sum+=a[i];}    
    
for(int i=0;i<n;i++)
{
  sum-=a[i];
 if(sum==leftsum){ return i+1;}
 leftsum+=a[i];
    
    
}

return -1;    
}



int main() {
int t;
cin>>t;
while(t--)
{ int n;
    cin>>n;
  int a[n]; 
   for(int i=0;i<n;i++)
    {cin>>a[i];}
    
    cout<<find(a,n)<<endl;
    
}
	//code
	return 0;
}
