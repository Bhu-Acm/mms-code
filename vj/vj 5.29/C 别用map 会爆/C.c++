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
inline ll gcd(ll a, ll b) { return b > 0 ? gcd(b, a % b) : a; }// from kdb
#define endd <<" "
using namespace std;
//atuo lfy 琴弦断了，缘也尽了，你也走了
//欧拉筛
vector<ll> pri;
bool not_prime[15000010];
void oula(ll n) {
  for (int i = 2; i <= n; ++i) {
    if (!not_prime[i]) {
      pri.push_back(i);
    }
    for (int pri_j : pri) {
      if (i * pri_j > n) break;
      not_prime[i * pri_j] = true;
      if (i % pri_j == 0) {
        break;
      }
    }
  }
}ll mp[20000010]={0};
void solve() {   
  int n;cin>>n;
  ll x[n+10];
  ll t;
  for(int i=1;i<=n;i++){
    cin>>x[i];
    if(i>=2){
        t=gcd(t,x[i]);
    }else{
        t=x[i];
    }
  }ll maxx=0;
  for(int i=1;i<=n;i++){
    x[i]/=t;mp[x[i]]++;
    maxx=max(maxx,x[i]);
  }
  oula(maxx);//maxx=0;
  ll ans=0;
  for(int i=0;i<pri.size();i++){
    ll sum=0;
    for(int j=1;j*pri[i]<=maxx;j++){
      sum+=mp[j*pri[i]];
    }
    ans=max(ans,sum);
  }
  if(ans==0){
    cout<<-1 endl;
  }else{
    cout<<n-ans endl;
  }
  
}
int main() {
    std::ios::sync_with_stdio(false);
     cin.tie(0);cout.tie(0);
    int T = 1;
    // scanf("%d", &T);
     //cin >> T;
    while (T--) {
        solve();
    }
    return 0;
}