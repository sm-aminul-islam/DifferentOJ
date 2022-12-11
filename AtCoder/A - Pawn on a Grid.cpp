#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    vector<string> st(n);
    for(int i=0;i<n;i++)
    {
        cin>>st[i];
    }
    int cnt=0;
    for(int i=0;i<n;i++)
    {
        for(auto x: st[i])
        {
            if(x=='#')
            {
                cnt++;
            }
        }
    }
    cout<<cnt<<"\n";

    return 0;
}
