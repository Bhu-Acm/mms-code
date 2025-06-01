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
map<ll,ll>mp;
ll lowbit(ll x){
    return x&(-x);
}
void solve() {   
  ll x;cin>>x;
  vector<ll>v;v.push_back(x);
  while(x>1&&mp[x]==0){
    ll t=lowbit(x); 
 //   if(t==x)break;
    x-=t;
    v.push_back(x);
  }
  while(x>1){
    x/=2;
    v.push_back(x);
  }
  cout<<v.size() endl;
  for(int i=0;i<v.size();i++){
    cout<<v[i] endd;
  }cout endl;
}
int main() {
    std::ios::sync_with_stdio(false);
    // cin.tie(0);cout.tie(0);
    int T = 1;
    // scanf("%d", &T);
     cin >> T;
     int sum=1;
     for(int i=0;i<=100;i++){
        sum*=2;
        mp[sum]++;
     }
    while (T--) {
        solve();
    }
    return 0;
}