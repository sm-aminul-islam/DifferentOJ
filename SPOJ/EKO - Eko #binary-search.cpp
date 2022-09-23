#include<bits/stdc++.h>
using namespace std;

bool possible(vector<long long> &ar, long long n, long long m, long long mid){
    long long cur = 0;
    for(int i = 0; i < n; i++){
        if(ar[i] >= mid) cur += (ar[i] - mid);

        if(cur >= m)return true;
    }
    return false;
}

int main()
{
  long long n, m;
  cin >> n >> m;
  vector<long long> ar(n);
  for(int i = 0; i < n; i++)cin >> ar[i];
  long long l = 0, r = accumulate(ar.begin(),ar.end(), 0LL), ans = 0;

  while(l <= r){
    long long mid = (l + r) >> 1;
    if(possible(ar, n, m, mid)){
            ans = mid;
            l = mid + 1;
    }else r = mid - 1;
  }
  cout << ans << '\n';
}
