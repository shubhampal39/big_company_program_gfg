#include <iostream>
using namespace std;

void printLeaders(int arr[], int size) 
{ 
    int max_from_right[size],c=1,max_ele=arr[size-1]; 
  max_from_right[0]=arr[size-1];
      
    for (int i = size-2; i >= 0; i--) 
    { 
        if (arr[i] >=max_ele) 
        {            
            max_from_right[c] = arr[i];
            max_ele = arr[i];
            c++;
        } 
    }
    
    
    for (int i =c-1; i >= 0; i--) 
    { 
            cout << max_from_right[i] << " "; 
      
    }
    
    cout<<endl;
} 


int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	        
	    }
	    
	    
	  printLeaders(a,n); 
     
	}
	
	return 0;
}
