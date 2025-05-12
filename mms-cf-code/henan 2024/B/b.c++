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
// struct S{
//     int id;
//     ll v;
// }x[200010];
// bool cmp(S a,S b){
//     if(a.v==b.v){
//         return a.id<b.id;
//     }
//     return a.v<b.v;
// }
void solve() {   
  int n;cin>>n;
  ll x[n+10];ll sum[n+10];
  for(int i=1;i<=n;i++){
    cin>>x[i];
   // sum[i]=
  }
  ll minn=INT_MAX;
  for(int i=n;i>=1;i--){
    sum[i]=min(minn,x[i]);
    minn=sum[i];
  }
  int t=0;int cnt=0;
  for(int i=1;i<=n;i++){
    t++;
    if(x[i]==sum[i]){
        cnt+=t/x[i];
        t=t%x[i];
    }
  }
  cout<<cnt endl;
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