#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int i=0;
     
    int sum=0;
     while(i<=n)
     {sum=sum+i;
     i=i+1;}
     cout<< " the sum is"<< sum;




      int m;
    cin>>m;
    int i=1;
    while(i<=m){int j=1;
        while(j<=m){cout<<"*";
            j=j+1;
        }cout<<endl;
        i=i+1;
     return 0;
}

