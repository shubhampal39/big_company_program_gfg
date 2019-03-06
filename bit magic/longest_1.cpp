#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {  int n,c=0,max=0;
        cin>>n;
    while(n>0)
    {  
        if(n&1)
          {    c++;
              if(c>max)
              {  max=c;}
                n=n>>1;
          }
        else
        {
            c=0;
            n=n>>1;
        }
    }
    cout<<c<<endl;
          
    }
	//code
	return 0;
}
