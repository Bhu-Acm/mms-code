//fly!
#include<bits/stdc++.h>
#define ll long  long
#define ull unsigned long long
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
void solve() {   
  int n,m,k;cin>>n>>m>>k;
  ll a[n+10];
  ll b[m+10];
  map<ll,ll>mp,mp1,t;
  for(int i=1;i<=n;i++){
    cin>>a[i];
    
  }for(int i=1;i<=m;i++){
    cin>>b[i];
    mp[b[i]]++;mp1[b[i]]++;
  }
  int cnt=0;
  for(int i=1;i<=m;i++){
    if(mp[a[i]]!=0){
        cnt++;
        mp[a[i]]--;
    }t[a[i]]++;
  }
  int l=1,r=m;int ans=0;
  while(l<=n&&r<=n){
    if(cnt>=k)ans++;
    if(mp1[a[l]]!=0){
        if(t[a[l]]-1<mp1[a[l]])
        cnt--;
        t[a[l]]--;
        mp[a[l]]++;
    }
    if(mp1[a[r+1]]!=0){
        if(t[a[r+1]]<mp1[a[r+1]])
        cnt++;
        t[a[r+1]]++;
        mp[a[r+1]]--;
    }
    l++;r++;
  }
  cout<<ans endl;
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