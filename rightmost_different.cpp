#include <iostream>
using namespace std;
int main() 
{   

    int t; 
   cin>>t;

    while(t--)
    {
        int m,n,count=1;
        cin>>m>>n;
        int b=(m^n);

        while(b>0)
        {
           if(!(b&1))
            {
               count++;
            }
            else
            {
                cout<<count<<endl;
                break;    
            }         
         b=b>>1;
 
        }

        
    }
    
	//code
	return 0;
}
