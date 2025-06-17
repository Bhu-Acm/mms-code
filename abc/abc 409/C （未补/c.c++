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
  int n,l;cin>>n>>l;
  ll x[n+10];
  ll sum=0;
  ll t=l/3;
  if(l%3!=0){
    cout<<0 endl;return ;
  }
  for(int i=1;i<=n-1;i++){
    cin>>x[i];
    if(x[i]%l==0)sum++;
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