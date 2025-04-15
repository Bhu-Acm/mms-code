//fly!
#include<bits/stdc++.h>
#include<algorithm>
#include<string>
#include<map>
#include<stack>
#include<queue>
#include<deque>
#include<numeric>
#define ll long  long
#define ull unsigned long long
#define itn int 
#define mian main
#define N 1000010
#define yes true
#define no false
#define fi first
#define all(x) x.begin(),x.end()
#define se second
#define be begin()
#define en end()
#define endl <<"\n"
#define double long double
#define endd <<" "
using namespace std;
//atuo lfy 琴弦断了，缘也尽了，你也走了
//ll x[500010] = { 0 };
ll sumy = 0;ll x[400100]={0};
void solve() { 
  int n,l,r;cin>>n>>l>>r;
  vector<ll>dp(n*2+10,INT_MIN);
  for(itn i=0;i<=n;i++){
    cin>>x[i];
  }
  dp[0]=0;ll maxx=INT_MIN;
  for(itn i=0;i<n+l;i++){
    for(itn j=l;j<=r;j++){
      dp[i+j]=max(dp[i+j],dp[i]+x[i+j]);
      // if(i-j>=0){
      //   dp[i]=max(dp[i],dp[i-j]+x[i]);
      // if(i+j>=n)
      //   maxx=max(maxx,dp[i+j]);
      // }
    }
  }
  for(int i=n;i<n+l;i++){
    maxx=max(maxx,dp[i]);
  }
  cout<<maxx endl;
}
int main() {
    std::ios::sync_with_stdio(false);
    // cin.tie(0);cout.tie(0);
    int T = 1;
  //  init();
    // scanf("%d", &T);
    // cin >> T;
    while (T--) {
        solve();
    }
    return 0;
}