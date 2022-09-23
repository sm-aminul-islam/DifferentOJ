#include<bits/stdc++.h>
using namespace std;
int32_t main()
{
    string s;
    cin>>s;
    int n=s.length(), c=1,sum=0;
    for(int i=0; i<n; i++)
    {
     if(s[i]==s[i+1]) c++;
     else{
        sum=max(c,sum);
        c=1;
     }
    }
    c=max(c,sum);
    cout<<c<<endl;
 
 
return 0;
}
