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
  ll n,m,a,b;cin>>n>>m>>a>>b;
  int cnt=0;
  ll n1=n,m1=m;
  while(n1!=1){
    ll t=n1-a+1;//砍掉剩下长度
    t=min(t,a);
    a=(t+1)/2;//中点
    n1=t;cnt++;
  }ll m2=(m+1)/2;
  while(m1!=1){
    ll t=m1-m2+1;
    t=min(t,m2);
    cnt++;
    m2=(t+1)/2;
    m1=t;
  }
  int cnt1=0;
  m1=m;n1=n;ll n2=(n+1)/2;
  while(m1!=1){
    ll t=m1-b+1;
    t=min(t,b);
    b=(t+1)/2;
    m1=t;cnt1++;
  }
  while(n1!=1){
    ll t=n1-n2+1;
    t=min(t,n2);
    n2=(t+1)/2;
    n1=t;
    cnt1++;

  }
  cout<<min(cnt,cnt1) endl;
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