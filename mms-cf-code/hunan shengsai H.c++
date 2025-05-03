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
//atuo lfy 琴弦断了，缘也尽了，你也走
void solve() {   
  ll n,k;cin>>n>>k;
  if(n==k){
    cout<<"2 2" endl;return ;
  }else if(n>k){
    cout<<min(n-k,k) endd<<max(n-k,k) endl;
  }else{
    k=k*gcd(n,k);
    ll t=(sqrt(n*n-4*k)+n)/2;
    cout<<min(t,n-t) endd<<max(t,n-t) endl;
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