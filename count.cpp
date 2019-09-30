#include <iostream>
using namespace std;
int main() {
    int n,ce,co;
    ce=co=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
            cin>>a[i];
            if(a[i]%2==0)
                ce++;
            else    
                co++;

    }
    if(ce>co)
    {
            cout<<co;
    }
    if(ce<co)
    {
            cout<<ce;
    }
    if(ce==co)  
            cout<<ce;
}
