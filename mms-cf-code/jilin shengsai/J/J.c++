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
  ll a,b;cin>>a>>b;
  ll _0,_1;
  if(a%2==0){
    _0=a;
    _1=b;
  }else{
    _1=a;
    _0=b;
  }
  if(_1>_0){
    cout<<1 endl;
  }else{
    cout<<2 endl;
  }
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