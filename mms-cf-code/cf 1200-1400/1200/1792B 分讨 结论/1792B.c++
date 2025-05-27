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
  ll a,b,c,d;cin>>a>>b>>c>>d;
  ll a1=0,b1=0;
  if(a==0){
    cout<<1 endl;return ;
  }
  ll ans=0;
  a1+=a;b1+=a;
ans+=a;
  ans+=min(b,c)*2;
  ans+=min(a+1,abs(b-c)+d);//比较值 d多就是可以执行当前值的次数 
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