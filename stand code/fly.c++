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
  int z,h,a,b,a1,b1;
  cin>>z>>h>>a>>b>>a1>>b1;
  if(a>a1)swap(a,a1);
  if(b>b1)swap(b,b1);
  ll h1=z+h;
  int n;cin>>n;
  while(n--){
    int x1,y1,z1;cin>>x1>>y1>>z1;
    if(x1>=a&&x1<=a1&&y1>=b&&y1<=b1&&z1>=z&&z1<=h1){
        cout<<"YES\n";
    }else{
        cout<<"NO\n";
    }
  }
}
int main() {
    std::ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int T = 1;
    // scanf("%d", &T);
    // cin >> T;
    while (T--) {
        solve();
    }
    return 0;
}