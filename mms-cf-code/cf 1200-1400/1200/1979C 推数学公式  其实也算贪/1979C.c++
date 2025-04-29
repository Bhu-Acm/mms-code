//fly!
#include<bits/stdc++.h>
#define ll long  long
#define ull unsigned long long
#define itn int 
#define mian main
#define N 1000010
#define yes true
#define no false
#define fi first
#define all(x) x.begin(),x.end()
#define se second
#define be begin()
#define en end()
#define endl <<"\n"
#define double long double
#define endd <<" "
inline ll gcd(ll a, ll b) { return b > 0 ? gcd(b, a % b) : a; }// from kdb
using namespace std;
//atuo lfy 琴弦断了，缘也尽了，你也走了
void solve() {   
  int n;cin>>n;
  ll x[n+10];
  ll sum=1;ll sumy=0;
  for(int i=1;i<=n;i++){
    cin>>x[i];
    sumy+=x[i];
    if(sum%x[i]!=0)
    sum*=x[i];
  }
ll sum1=0;
vector<ll>v;
for(int i=1;i<=n;i++){
    sum1+=sum/x[i];
    v.push_back(sum/x[i]);
}
if(sum1>=sum){
    cout<<"-1\n";return ;
}
ll t=gcd(v[0],v[1]);
for(int i=2;i<v.size();i++){
    t=gcd(t,v[i]);
   // cout<<v[i] endd;
}
for(int i=0;i<v.size();i++){
    cout<<v[i]/t endd;
}
cout endl;
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