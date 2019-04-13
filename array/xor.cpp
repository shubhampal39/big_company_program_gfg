#include <iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    
    
    while(t--)
    {
        int n,ans;
        cin>>n;
        int a[n];
        for(int i= 0;i<n;i++)
        {cin>>a[i];}
        
        ans=a[0];
        
        for(int i=1;i<n;i++)
        {
           ans=ans^a[i];   
        }
      cout<<ans<<endl;   
    }
   
	//code
	return 0;
}
