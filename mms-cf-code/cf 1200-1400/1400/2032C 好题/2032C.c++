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
// 原先的思路是 abc 三条边 固定 bc 找a 但是这样可能性讨论的复杂度太高了（bc的范围可能性比较多）
// 题解是去找abc 三条边中 两个小的a+b>c的个数
void solve() {   
  int n;cin>>n;
  ll x[n+10];
  map<ll,ll>mp;ll maxx1=-1;
  for(int i=1;i<=n;i++){
    cin>>x[i];
    mp[x[i]]++;
  }ll maxx=-1;
  ll t=0;
  for(auto it:mp){
    t=max(t,it.se);
  }
  maxx1=max(maxx1,n-t);
  sort(x+1,x+n+1);
  for(int i=1;i<n;i++){
    int w=lower_bound(x+1,x+n+1,x[i]+x[i+1])-x;
    maxx1=min(maxx1,(ll)n-w+i);
  }
  cout<<maxx1 endl;
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