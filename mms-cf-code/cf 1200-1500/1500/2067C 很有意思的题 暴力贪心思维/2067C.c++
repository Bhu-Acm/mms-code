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
//看了洛谷题解直接恍然大悟
//之前有猜测最多次数不多 但是没想出具体的写法
//算是一道思维规律题了 难度一般
int pd(ll n){
    while(n>0){
        if(n%10==7){
            return 1;
        }
        n/=10;
    }
    return 0;
}
void solve() {   
    ll n;cin>>n;
    ll ans=LLONG_MAX;ll sum=9;
    for(int i=1;i<=9;i++){
        ll cnt=0;ll t=n;
        while(1){
            if(pd(t)==1){
                break;
            }
            t+=sum;cnt++;
            if(pd(t)==1){
                break;
            }
        }
        ans=min(ans,cnt);
        sum*=10;sum+=9;
    }
    cout<<ans endl;
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