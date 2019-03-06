//Find first set bit 
#include <iostream>
using namespace std;
int main() {
    
    int t;
    cin>>t;

    while(t--)
    {
        int a,count=0;
        cin>>a;
 
       if(a==0)
        {
            cout<<count<<endl;
        }
  else{
        while(a>0)
        {
          count++;
           if(a&1)
            {
             cout<<count<<endl; break;
            }
         
         a=a>>1;   
        }

       } 
    }
    
	//code
	return 0;
}
