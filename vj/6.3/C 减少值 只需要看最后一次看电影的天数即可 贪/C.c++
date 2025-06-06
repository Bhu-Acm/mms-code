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
  ll n,m,d;cin>>n>>m>>d;
  ll x[n+10];
  priority_queue<ll,vector<ll>,greater<ll> >q;
  for(int i=1;i<=n;i++){
    cin>>x[i];
  }
  ll sum=0;ll ans=0;
  for(int i=1;i<=n;i++){
    if(x[i]>0){
        q.push(x[i]);sum+=x[i];
    }
    while(q.size()>m)sum-=q.top(),q.pop();
    ans=max(ans,sum-d*i);//关键代码 减少值是最后一天看电影的天数
  }
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