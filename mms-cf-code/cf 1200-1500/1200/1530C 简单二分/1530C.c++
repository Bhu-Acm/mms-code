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
bool cmp(ll a,ll b){
    return a>b;
    }
void solve() {   
    int n;cin>>n;
   // ll sum1=0;
    ll a1[n+10];ll b1[n+10];
    for(int i=1;i<=n;i++){
        cin>>a1[i];
    }
    for(int j=1;j<=n;j++){
        cin>>b1[j];
    }
    sort(a1+1,a1+n+1,cmp);sort(b1+1,b1+n+1,cmp);
    ll k=n-(n/4);ll su=0;ll su1=0;
    for(int i=1;i<=k;i++){
        su+=a1[i];
        su1+=b1[i];
    }
    if(su>=su1){
        cout<<0 endl;return ;
    }
    ll a=1;ll b=(ll)1e17;
    while(a<b){
        ll sum=0;ll sum1=0;
        ll w=(a+b)>>1;
        ll w1=w+n;
        ll k=w1-(w1/4);
        if(k>w){
            sum+=w*100;
            for(int i=1;i<=k-w;i++){
                sum+=a1[i];
               // sum1+=b1[i];
            }
        }else{
            sum+=k*100;
        }
            for(int i=1;i<=min((ll)n,k);i++){
                sum1+=b1[i];
            }
        if(sum>=sum1){
            b=w;
        }else{
            a=w+1;
        }
    }
    cout<<a endl;
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