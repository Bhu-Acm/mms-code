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
int pd(ll a){
    ll t=a;
    int cnt=0;
    while(t!=0){
        t/=10;cnt++;
    }
    return cnt;
}
//说实话 似懂非懂就是没懂
void solve() {   
ll n;cin>>n;
if(n%11*111<=n){
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