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
  int n,a,b,c,  a1,b1,c1;//石头 剪刀 布
  cin>>n>>a>>b>>c>>a1>>b1>>c1;
  int a2=a,a3=a1,b2=b,b3=b1,c2=c,c3=c1;
  ll ans=0;ll ans1=0;
  ans+=min(a,b1);ans+=min(b,c1);ans+=min(a1,c);
  int t=min(a,b1);
  a-=t;b1-=t;
  t=min(b,c1);
  b-=t;c1-=t;
  t=min(c,a1);
  c-=t;a1-=t;
  t=min(a,a1);
  a-=t;a1-=t;
  t=min(b,b1);
  b-=t;b1-=t;
  t=min(c,c1);
  c-=t;c1-=t;
  ans-=min(a,c1);ans-=min(b,a1);
  ans-=min(c,b1);
  ans1+=min(a3,b2);ans1+=min(b3,c2);ans1+=min(c3,a2);
  t=min(a3,b2);a3-=t;b2-=t;
  t=min(b3,c2);b3-=t;c2-=t;
  t=min(c3,a2);c3-=t;a2-=t;

  t=min(a3,a2);a3-=t;a2-=t;
  t=min(b2,b3);b2-=t;b3-=t;
  t=min(c2,c3);c2-=t,c3-=t;
  ans1-=min(a3,c2);ans1-=min(b3,a2);ans1-=min(c3,b2);
  cout<<ans endd<<-ans1 endl;return ;
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