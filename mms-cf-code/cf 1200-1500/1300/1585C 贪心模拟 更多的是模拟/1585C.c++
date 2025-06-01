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
  int n,k;cin>>n>>k;
  vector<ll>a;
  vector<ll>b;
  map<ll,ll>mp;
  for(int i=1;i<=n;i++){
    ll t;cin>>t;
    if(t>0){
        a.push_back(t);
    }else if(t<0){
        b.push_back(-t);
    }
    mp[t]++;
  }
  int a1=a.size()-1;int b1=b.size()-1;
  sort(all(a));sort(all(b));
  ll maxx=0;
  ll sum=0;
  for(int i=a1;i>=0;i-=k){
    sum+=(a[i]*2);maxx=max(maxx,a[i]);
  }
  for(int i=b1;i>=0;i-=k){
    sum+=(b[i]*2);maxx=max(maxx,b[i]);
  }
  sum-=maxx;
  cout<<sum endl;
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