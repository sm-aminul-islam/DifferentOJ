#include<bits/stdc++.h>
using namespace std;
int32_t main(){
int n;
cin>>n;
int sum=0;
for(int i=1;i<=n;i++){
    sum^=i;
 
}
for(int i=0;i<n-1;i++){
    int x;
    cin>>x;
    sum^=x;
}
cout<<sum<<"\n";
 
}
