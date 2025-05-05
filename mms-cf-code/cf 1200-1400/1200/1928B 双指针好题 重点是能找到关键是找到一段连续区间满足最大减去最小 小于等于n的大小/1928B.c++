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
  ll x[n+10];vector<ll>v;v.push_back(0);
  map<int,int>mp;int maxx=-1;
  for(int i=1;i<=n;i++){
    cin>>x[i];
    if(mp[x[i]]==0){
        v.push_back(x[i]);
    }
    mp[x[i]]++;
  }
  sort(all(v));
  int n1=v.size()-1;
  int a=1;int b=1;
  while(a<=n1&&b<=n1){
    while(v[b]-v[a]>=n&&a<=b)a++;
    maxx=max(maxx,b-a+1);
    b++;
  }
  cout<<maxx endl;
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