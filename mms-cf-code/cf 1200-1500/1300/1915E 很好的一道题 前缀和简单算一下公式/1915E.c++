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
  int n;cin>>n;
  ll x[n+10];
  ll sum1[n+10]={0};
  ll sum2[n+10]={0};
  for(int i=1;i<=n;i++){//前缀和处理
    cin>>x[i];
    if(i%2==0){
        sum2[i]=sum2[i-1]+x[i];
        sum1[i]=sum1[i-1];
    }else{
        sum1[i]=sum1[i-1]+x[i];
        sum2[i]=sum2[i-1];
    }
  }
  map<ll,ll>mp;//用map快速查询
  for(int i=1;i<=n;i++){
    ll t=sum1[i]-sum2[i];
    if(mp[t]!=0||t==0){
        cout<<"YES\n";return ;
    }
    mp[sum1[i]-sum2[i]]++;
  }
  cout<<"NO\n";
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