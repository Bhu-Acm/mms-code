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
#define mod 998244353
using namespace std;
//atuo lfy 琴弦断了，缘也尽了，你也走了
ll ksm(ll a,ll b){
  ll sum=1;
  while(b>0){
    if(b&1) sum=(sum*a)%mod;
    a=(a*a)%mod;
    b>>=1;
    //b%=mod;
  }
  return sum%mod;
}
//快速幂 找规律
void solve() {   
  ll n,m;cin>>n>>m;
  if(n%2==0&&m%2==0){
    cout<<1 endl;return ;
  }else if(n%2!=0&&m%2!=0){
    cout<<ksm(2,n+m-2) endl;
  }else if(n%2==0&&m%2!=0){
    cout<<ksm(2,n-1) endl;
  }else{
    cout<<ksm(2,m-1) endl;
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