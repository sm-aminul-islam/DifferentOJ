#include<bits/stdc++.h>
using namespace std;
#define int long long int
int32_t main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,y;
        cin>>x>>y;
        if(x<y)
        {
            int ans;
            if(y%2!=0)
            {
                ans=(y*y)-x+1;
            }
            else

            {
                ans=(y-1)*(y-1)+x;

            }
               cout<<ans<<"\n";



        }
        else
        {
            int ans;
            if(x%2!=0)
            {
                  ans=(x-1)*(x-1)+y;
            }



            else
            {
                  ans=(x*x)-y+1;

            }
               cout<<ans<<"\n";

        }

    }
    return 0;
}
