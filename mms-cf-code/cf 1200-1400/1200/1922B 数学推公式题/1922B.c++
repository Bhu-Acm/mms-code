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

  map<ll,ll>sum;
  for(int i=1;i<=n;i++){
    cin>>x[i];
    sum[x[i]]++;
  }
  ll s=0,ans=0;
  for(int i=0;i<=n;i++){
	if(sum[i]>1)ans+=sum[i]*(sum[i]-1)/2*s;
    if(sum[i]>2)ans+=sum[i]*(sum[i]-1)*(sum[i]-2)/6;
    s+=sum[i];
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