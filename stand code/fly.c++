//fly!
#include<bits/stdc++.h>
#define ll long long
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
    int n;
    cin>>n;
    vector<ll> a(n),b(n);
    for(int i=0;i<n;i++)cin>>a[i]>>b[i];
    if(n==1){
        cout<<1 endl;
        return;
    }
    vector<pair<ll,int>>x(n),y(n);
    for(int i=0;i<n;i++){
        x[i]={a[i],i};
         y[i]={b[i],i};
    }
    sort(all(x));sort(all(y));
  vector<ll> sum1(n+1,LLONG_MAX),sum2(n+1,LLONG_MIN);
  vector<ll> sum3(n+1,LLONG_MAX),sum4(n+1,LLONG_MIN);
  vector<ll> sum5(n+1,LLONG_MAX),sum6(n+1,LLONG_MIN);
  vector<ll> sum7(n+1,LLONG_MAX),sum8(n+1,LLONG_MIN);
    for(int i=0;i<n;i++){
        sum1[i+1]=min(sum1[i],x[i].fi);
        sum2[i+1]=max(sum2[i],x[i].fi);
        sum3[i+1]=min(sum3[i],y[i].fi);
        sum4[i+1]=max(sum4[i],y[i].fi);
    }
    for(int i=n-1;i>=0;i--){
        sum5[i]=min(sum5[i+1],x[i].fi);
        sum6[i]=max(sum6[i+1],x[i].fi);
        sum7[i]=min(sum7[i+1],y[i].fi);
        sum8[i]=max(sum8[i+1],y[i].fi);
    }
    vector<int> px(n),py(n);
    for(int i=0;i<n;i++){
        px[x[i].se]=i;
        py[y[i].se]=i;
    }
    ll ans=LLONG_MAX;
    for(int i=0;i<n;i++){
        int p1=px[i],p2=py[i];
        ll minn1=min(sum1[p1],sum5[p1+1]);
        ll maxx1=max(sum2[p1],sum6[p1+1]);
        ll minn2=min(sum3[p2],sum7[p2+1]);
        ll maxx2=max(sum4[p2],sum8[p2+1]);
        ll w=maxx1-minn1+1,h=maxx2-minn2+1;
        ll area=w*h;
        if(area>=n){
            ans=min(ans,area);
        }else{
            ll w2=(n+h-1)/h,h2=(n+w-1)/w;
            ans=min({ans,w2*h,h2*w});
        }
    }
    cout<<ans endl;
}
int main() {
    std::ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int T = 1;
    cin >> T;
    while (T--) {
        solve();
    }
    return 0;
}
