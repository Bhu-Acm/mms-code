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
  int n;cin>>n;
  ll x[n+10];map<ll,ll>mp;
  vector<ll>v;
  for(int i=1;i<=n;i++){
    cin>>x[i];
    if(mp[x[i]]==0){
        v.push_back(x[i]);
    }
    mp[x[i]]++;
  }
  sort(all(v));ll maxx=0;
  int n1=v.size();
  for(int i=1;i<=100;i++){
    int t=i;int flag=0;
    for(int j=0;j<n1;j++){
        if(v[j]>=t)flag+=mp[v[j]];
    }
    if(flag>=t){
        maxx=max(maxx,(ll)t);
    }
  }
  cout<<maxx endl;
}
int main() {
    std::ios::sync_with_stdio(false);
     cin.tie(0);cout.tie(0);
    int T = 1;
    // scanf("%d", &T);
    // cin >> T;
    while (T--) {
        solve();
    }
    return 0;
}