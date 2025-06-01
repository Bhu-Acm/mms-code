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
  int n,s;cin>>n>>s;
  ll x[n+10];
  for(int i=1;i<=n;i++){
    cin>>x[i];
  }
  x[0]=0;
  for(int i=1;i<=n;i++){
    ll t=x[i]-x[i-1];
    if(t>=s+1){
        cout<<"No\n";return ;
    }
  }
  cout<<"Yes";
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