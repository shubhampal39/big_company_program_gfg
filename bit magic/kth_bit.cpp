//Check whether K-th bit is set or not 
#include <iostream>
using namespace std;
int main() 
{   
 
   int t; 
    cin>>t;

    while(t--)
    {
        int m,k,count=1;
        cin>>m>>k;

        int b=(m>>k);
        
    
        if(b&1)
            {
                cout<<"Yes"<<endl;
                 }
        else
          cout<<"No"<<endl;

 }   
	//code
	return 0;
}
