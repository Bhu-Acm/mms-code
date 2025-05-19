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
  ll n,k;
  cin>>n>>k;
  ll x[n+10];ll sum=1;
  string s;__int128 maxx=0;
  for(int i=1;i<=k;i++)s.push_back('9');
  int t=s.size();
  for(int i=0;i<t;i++){
    maxx*=10;
    maxx+=s[i]-'0';
  }
  for(int i=1;i<=n;i++){
    cin>>x[i];
  }
  for(int i=1;i<=n;i++){
    if(sum*x[i]>maxx){
        sum=1;
    }else{
        sum*=x[i];
    }
    
  }cout<<sum endl;
}
int main() {
    std::ios::sync_with_stdio(false);
    // cin.tie(0);cout.tie(0);
    int T = 1;
    // scanf("%d", &T);
    // cin >> T;
    while (T--) {
        solve();
    }
    return 0;
}