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
  ll sum[2000000]={0};
  int mp[2000000]={0}; 
  ll x[2000000]={0};
void solve() {   
  int n;cin>>n;
 
  for(int i=1;i<=n;i++){
    cin>>x[i];
  }

  for(int i=1;i<=n;i++){
    sum[i]=sum[i-1];
    if(mp[x[i]]==0){
        sum[i]++;
    }
    mp[x[i]]++;
  }
  int m;cin>>m;
  while(m--){
    int a,b;cin>>a>>b;
    cout<<max((ll)1,sum[b]-sum[a-1]) endl;
  }
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