#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    set<int>dnum;
    for(int i=0;i<n;i++){
        int number;
        cin>>number;
        dnum.insert(number);

    }
    cout<<dnum.size()<<"\n"<<endl;
    return 0;

}
