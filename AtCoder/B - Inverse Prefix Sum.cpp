#include<bits/stdc++.h>
using namespace std;
#define int long long int
int32_t main()
{
   int n;
   cin>>n;
   vector<int> vt(n),prefix(n+1,0);
   for(int i=0;i<n;i++)
   {
       cin>>vt[i];
   }
    prefix[0]=vt[0];
    for(int i=1;i<n;i++)
    {
        prefix[i]=vt[i]-vt[i-1];
    }
    for(int i=0;i<n;i++)
    {
        cout<<prefix[i]<<" ";
    }


    return 0;
}
