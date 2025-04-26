//fly!
#include<bits/stdc++.h>
#include<algorithm>
#include<string>
#include<map>
#include<stack>
#include<queue>
#include<deque>
#include<numeric>
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
using namespace std;
//atuo lfy 琴弦断了，缘也尽了，你也走了
//ll x[500010] = { 0 };
ll sumy = 0;ll x[1000010]={0};
void solve() {   
  int n,m;cin>>n>>m;
  int pos[n+10];
  for(int i=1;i<=n;i++){
    cin>>x[i];
  }
  int a=0,b=(int)1e6+1;
  while(a<b){
    int w=(a+b)/2;
    ll sum=0;//map<ll,ll>mp;
  //注意这里不能使用map 因为map的清除函数 clear（）是O（n）；
  set<ll>t;
    for(int i=1;i<=n;i++){
      if(x[i]<w)
      t.insert(x[i]);
      if(t.size()==w){
        sum++;t.clear();
      }
        }
    if(sum>=m){
      a=w+1;
    }else{
      b=w;
    }
  }
  cout<<a-1 endl;
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