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
  map<ll,ll>mp,mp1;
  ll sum[n+10]={0};
  ll sum1[n+10]={0};
  for(int i=1;i<=n;i++){
    cin>>x[i];mp[x[i]]++;
    sum[i]=sum[i-1];
    int f=sum[i];
    while(mp[f])f++;
    sum[i]=f;
  }
  for(int i=n;i>=1;i--){
    sum1[i]=sum1[i+1];
    mp1[x[i]]++;
    int f=sum1[i];
    while(mp1[f])f++;
    sum1[i]=f;
  }
  for(int i=1;i<n;i++){
    if(sum[i]==sum1[i+1]){
        cout<<2 endl;
        cout<<1 endd<<i endl;
        cout<<i+1 endd<<n endl;return ;
    }
  }
  cout<<-1 endl;
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