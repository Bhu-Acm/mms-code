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
//构造好题  https://www.luogu.com.cn/problem/solution/CF1923C
void solve() {   
  int n,q;cin>>n>>q;
  ll x[n+10];ll sum[n+10]={0};
  ll sum1[n+10]={0};
  for(int i=1;i<=n;i++){
    cin>>x[i];
    sum[i]=sum[i-1]+x[i]-1;
    sum1[i]=sum1[i-1]+(x[i]==1);
  }
  while(q--){
    int a,b;cin>>a>>b;
    if(a==b){
        cout<<"NO\n";continue;
    }
    if(sum[b]-sum[a-1]<sum1[b]-sum1[a-1]){
        cout<<"NO\n";
    }else{
        cout<<"YES\n";
    }
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