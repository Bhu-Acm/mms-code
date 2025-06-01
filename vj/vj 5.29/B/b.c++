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
//妙妙题  提炼信息 本质上一开始那个1不管怎么分裂还是1
//也就是只要看 每天增长的
void solve() {   
  ll n;cin>>n;
  vector<ll>v;v.push_back(1);
  ll t=1;
  ll sum=0;
  while(sum<n){
    sum+=t;v.push_back(t);
    t*=2;
    if(sum+t>n){
        t=n-sum;
    }
  }
  sort(all(v));
  cout<<v.size()-2 endl;
  for(int i=1;i<v.size()-1;i++){
    cout<<v[i+1]-v[i] endd;
  }cout endl;

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