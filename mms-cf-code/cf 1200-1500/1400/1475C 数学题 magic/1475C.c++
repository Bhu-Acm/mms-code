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
//https://www.luogu.com.cn/problem/solution/CF1475C
//数学题 magic
ll a1[200100]={0},b1[200100]={0};
  ll sum[200100]={0};ll sum1[200100]={0};
void solve() {   
  int a,b,k;cin>>a>>b>>k;
  for(int i=1;i<=k;i++){
    cin>>a1[i];
    sum[a1[i]]++;
}
for(int i=1;i<=k;i++){
    cin>>b1[i];
    sum1[b1[i]]++;
}
ll ans=0;
   for(int i=1;i<=k;i++){
    ans+=k-sum[a1[i]]-sum1[b1[i]]+1;
   }
   cout<<ans/2 endl;
   for(int i=0;i<k+10;i++){
    sum[a1[i]]=0;sum1[b1[i]]=0;
   }
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