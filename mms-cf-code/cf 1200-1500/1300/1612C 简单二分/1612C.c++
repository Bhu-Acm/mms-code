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
  ll k,x;cin>>k>>x;
  ll a=1;ll b=2*k;int flag=1;
  while(a<b){
    ll w=(a+b)>>1;
    ll sum=0;
    if(w>=k){
        sum+=(k+k*(k-1)/2);
        ll k1=w-k;
        sum+=((k-1)*k1-k1*(k1-1)/2);
    }else{
        sum+=(w+w*(w-1)/2);
    }
    if(sum>=x){
        b=w;
    }else{
        a=w+1;
    }
  }
  cout<<min(a,2*k-1) endl;
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