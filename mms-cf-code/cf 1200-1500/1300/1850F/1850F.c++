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
ll sumy = 0;ll x[1000010]={0};
void solve() {   
  itn n;cin>>n;
  map<ll,ll>mp,mp1;
  for(itn i=1;i<=n;i++){
    cin>>x[i];
    if(x[i]<=n)
    mp[x[i]]++;
  }
  ll maxx=0;
  for(auto it:mp){
    ll sum=0;int a=it.fi;
    while(a<=n){
       // mp1[a]+=mp[a];
        mp1[a]+=it.se;
        maxx=max(maxx,mp1[a]);
        a+=it.fi;
    }
    
  }
  cout<<maxx endl;
}
int main() {
    std::ios::sync_with_stdio(false);
     cin.tie(0);cout.tie(0);
    int T = 1;
    // scanf("%d", &T);
     cin >> T;
    while (T--) {
        solve();
    }
    return 0;
}