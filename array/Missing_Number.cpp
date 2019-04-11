#include <iostream>
using namespace std;

int main() {
    int t;
cin>>t;
    while(t--)
    {
    int n;
    cin>>n;

    int a[n-1];

    for(int i=0;i<n-1;i++)
    {
        cin>>a[i];
    }

    int sum=0,sum1=0;
    
      sum1=n*(n+1)/2;
    
    for(int i=0;i<n-1;i++)
    {
        sum+=a[i];
    }
    
    cout<<sum1-sum<<endl;
    
    
        
        
    }
    
	//code
	return 0;
}
