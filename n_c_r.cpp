#include<bits/stdc++.h>
using namespace std; 

int n_c_r(int n, int r)
{
    if (n<r)
    {
        return 0;
    }
    
    if (r==1)
    {
        return n;
    }
    if (r==0)
    {
        return 1; 
    }
    if (n==1)
    {
        return 1; 
    }
    else
    {
     return (n_c_r(n-1,r-1) + n_c_r(n-1,r));   
    } 
}
int main()
{
    int n,r; 
    cout<<"Enter n: "<<endl;
    cin>>n;
    cout<<"Enter r: "<<endl;
    cin>>r;
    cout<<n_c_r(n,r);
    return 0;
}