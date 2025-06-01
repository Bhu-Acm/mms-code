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
//贪心 构造全是一个数的就行
void solve() {   
  int n;cin>>n;
  ll x[n+10];
  for(int i=1;i<=n;i++){
    cin>>x[i];
  }
  if(n==1){
    cout<<0 endl;return ;
  }
  vector<ll>v;
  ll t;
  v.push_back(1);v.push_back(n);
  if((x[1]+x[n])%2==0){
    x[1]=x[n];
    t=x[1];
  }else{
    x[n]=x[1];
    t=x[n];
  }
  for(int i=2;i<n;i++){
    if((x[i]+t)%2==0){
        v.push_back(i);
        v.push_back(n);
    }else{
        v.push_back(1);
        v.push_back(i);
    }
  }
  cout<<v.size()/2 endl;
  for(int i=0;i<v.size();i+=2){
    cout<<v[i] endd<<v[i+1] endd;
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