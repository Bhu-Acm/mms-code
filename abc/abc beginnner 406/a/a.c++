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
  int a,b,c,d;cin>>a>>b>>c>>d;
  ll t=a*60+b;
  ll t1=c*60+d;
  if(t1>t){
    cout<<"No\n";
  }else{
    cout<<"Yes\n";
  }
}
int main() {
    std::ios::sync_with_stdio(false);
    // cin.tie(0);cout.tie(0);
    int T = 1;
    // scanf("%d", &T);
    // cin >> T;
    while (T--) {
        solve();
    }
    return 0;
}