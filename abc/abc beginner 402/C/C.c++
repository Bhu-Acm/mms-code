//fly!
#include<bits/stdc++.h>
#include<algorithm>
#include<string>
#include<map>
#include<stack>
#include<queue>
#include<deque>
#include<numeric>
#define ll long  long
#define ull unsigned long long
#define itn int 
#define mian main
#define N 1000010
#define yes true
#define no false
#define fi first
#define all(x) x.begin(),x.end()
#define se second
#define be begin()
#define en end()
//#define endl <<"\n"
#define double long double
#define endd <<" "
using namespace std;
//atuo lfy 琴弦断了，缘也尽了，你也走了
//ll x[500010] = { 0 };
ll sumy = 0;//ll x[1000010]={0};
struct S{
  int id=1;
  map<ll,ll>x1;
  int cnt=0;
}x[500010];
void solve() {   
    int n,m;
    cin>>n>>m;
    int t[m+10];
    for(int i=1;i<=m;i++){
      int k;cin>>k;
      t[i]=k;
      for(int j=1;j<=k;j++){
       // cin>>t[k];//种类总数
        int a;cin>>a;//分别
        x[a].x1[i]++;
      }
    }int ans=0;
    for(int i=1;i<=n;i++){
      int a;cin>>a;
      for(auto it:x[a].x1){
        if(x[a].x1[it.fi]==0)continue;
        x[a].x1[it.fi]=0;
        t[it.fi]--;
        if(t[it.fi]==0)ans++;
      }
      cout<<ans<<"\n";
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