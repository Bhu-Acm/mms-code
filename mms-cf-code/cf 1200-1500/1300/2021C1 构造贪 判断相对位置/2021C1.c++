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
  int n,m,q;cin>>n>>m>>q;
  ll x[n+10],a[m+10];
  vector<ll>v,v1;
  for(int i=1;i<=n;i++){
    cin>>x[i];
    v.push_back(x[i]);
  }map<ll,ll>mp;
  for(int i=1;i<=m;i++){
    int a;cin>>a;
    if(mp[a]==0){
        v1.push_back(a);
    }
    mp[a]++;
  }
  for(int i=0;i<min(v.size(),v1.size());i++){
    if(v[i]!=v1[i]){
        cout<<"TIDAK\n";return ;
    }
  }
  cout<<"YA\n";
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