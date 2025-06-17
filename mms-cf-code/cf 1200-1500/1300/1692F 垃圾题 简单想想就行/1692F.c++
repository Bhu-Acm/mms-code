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
vector<ll>v;
void solve() {   
    int n;cin>>n;
    ll x[n+10];
    map<ll,ll>mp;
    for(int i=1;i<=n;i++){
        cin>>x[i];
        mp[x[i]%10]++;
    }
    for(int i=0;i<v.size();i+=3){
        ll a=v[i];ll b=v[i+1];ll c=v[i+2];
        map<ll,ll>mp1;mp1[a]++;mp1[b]++;mp1[c]++;
        int flag=0;
        for(auto it:mp1){
            if(mp[it.fi]<it.se){
                flag=1;break;
            }
        }
        if(flag==0){
            cout<<"YES\n";return ;
        }
    }
    cout<<"NO\n";
}
int main() {
    for(int i=0;i<=9;i++){
        for(int j=0;j<=9;j++){
            for(int k=0;k<=9;k++){
                if((i+j+k)%10==3){
                   // cout<<i endd<<j endd<<k endl;
                   v.push_back(i);
                   v.push_back(j);
                   v.push_back(k);
                }
            }
        }
    }
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