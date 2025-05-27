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
inline ll gcd(ll a, ll b) { return b > 0 ? gcd(b, a % b) : a; }// from kdb
using namespace std;
//atuo lfy 琴弦断了，缘也尽了，你也走了
void solve() {   
  ll a,b;cin>>a>>b;
  for(ll i=a+1;i<b;i++){
    if(gcd(i,a)==1&&gcd(i,b)==1){
        cout<<i endl;return ;
  }
  }
  cout<<-1 endl;return ;
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