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
 ll x[200];  int n,m;
int pd(int t){
    map<ll,ll>mp;
    for(int i=1;i<=t;i++){
        mp[x[i]]++;
    }
    for(int i=1;i<=m;i++){
        if(mp[i]==0){
            return 0;
        }
    }
    return 1;
}
void solve() {   
cin>>n>>m;
  for(int i=1;i<=n;i++){
    cin>>x[i];
  }
  int f=n;ll sum=0;
  while(pd(f)!=0){
    f--;sum++;
  }
  cout<<sum endl;
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