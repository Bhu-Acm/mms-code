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
  int n,k;cin>>n>>k;
  ll x[n+10];
  for(int i=1;i<=n;i++){
    cin>>x[i];
  }int t=0;int f=0;
  for(int i=1;i<=n;i++){
    if(x[i]==1&&t==0)t++,f=i;
    if(t==1){
    for(int j=i+k;j<=n;j++){
      if(x[j]==1){
        cout<<"NO\n";return ;
      }
    }
    break;
    }
  }
  cout<<"YES\n";
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