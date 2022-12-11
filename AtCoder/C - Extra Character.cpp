#include<bits/stdc++.h>
using namespace std;
#define int long long int
int32_t main()
{
  string s,t;
  cin>>s>>t;

  int idx=(int)s.size()+1;
  for(int i=0;i<(int)s.size();i++)
  {
      if(s[i]!=t[i])
      {
          idx=i+1;
          break;
      }
  }
  cout<<idx<<"\n";

    return 0;
}
