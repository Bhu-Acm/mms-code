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
inline ll gcd(ll a, ll b) { return b > 0 ? gcd(b, a % b) : a; }// from kdb
void solve() {   
  int n;cin>>n;
  ll x[n+10];
  vector<ll>v;
  for(int i=1;i<=n;i++){
    cin>>x[i];
    if(i>=2){
        v.push_back(gcd(x[i],x[i-1]));
    }
  }int f=0,f1,f2;
  vector<ll>v1,v2,v4,v5;
  for(int i=0;i<v.size()-1;i++){
    if(v[i]>v[i+1]&&f==0){
        f1=i+2;f2=i+1;
         f=i+3;continue;
    }
  }
  vector<ll>v7,v8;
  for(int i=1;i<=n;i++){
    if(i==f2){
        continue;
    }else{
        v7.push_back(x[i]);
    }
  }
  for(int i=1;i<v7.size();i++){
    v8.push_back(gcd(v7[i],v7[i-1]));
  }
  vector<ll>v9(v8);sort(all(v9));
  for(int i=1;i<=n;i++){
    if(i==f){
        continue;
    }else{
        v1.push_back(x[i]);
    }
  }
  for(int i=1;i<=n;i++){
    if(i==f1){
        continue;
    }else{
        v4.push_back(x[i]);
    }
  }
  for(int i=1;i<v4.size();i++){
    v5.push_back(gcd(v4[i],v4[i-1]));
  }
  for(int i=1;i<v1.size();i++){
    v2.push_back(gcd(v1[i],v1[i-1]));
  }
  vector<ll>v3(v2);
  vector<ll>v6(v5);
  sort(all(v5));
  sort(all(v2));
  if(v2==v3||v5==v6||v8==v9){
    cout<<"YES\n";
  }else{
    cout<<"NO\n";
  }
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