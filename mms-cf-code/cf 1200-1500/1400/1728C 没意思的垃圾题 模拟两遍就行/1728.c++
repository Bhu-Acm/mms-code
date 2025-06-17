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
int bit(ll x){
    int cnt=0;
    while(x>0){
        cnt++;
        x/=10;
    }
    return cnt;
}
//最多两次操作能让不同的两个数相等
void solve() {   
    int n;cin>>n;
    map<ll,ll>mp,mp1;ll cnt=0;
    ll a[n+10];ll b[n+10];
    for(int i=1;i<=n;i++){
        cin>>a[i];
        mp[a[i]]++;
    }
    for(int j=1;j<=n;j++){
        cin>>b[j];
        mp1[b[j]]++;
    }
    for(auto it:mp){
        if(mp1[it.fi]!=0){
            ll minn=min(mp[it.fi],mp1[it.fi]);
            mp[it.fi]-=minn;
            mp1[it.fi]-=minn;
        }
    }
    vector<ll>a1,b1;
    for(auto it:mp){
        while(mp[it.fi]!=0){
            if(it.fi>=10)
            a1.push_back(bit(it.fi)),cnt++;
            else
            a1.push_back(it.fi);
            mp[it.fi]--;
        }
    }
    for(auto it:mp1){
        while(mp1[it.fi]!=0){
            if(it.fi>=10)
            b1.push_back(bit(it.fi)),cnt++;
            else
            b1.push_back(it.fi);
            mp1[it.fi]--;
        }
    }
    sort(all(a1));sort(all(b1));
    if(a1==b1){
        cout<<cnt endl;
    }else{
        map<ll,ll>aa,bb;
        for(auto it:a1){
            aa[it]++;
        }
        for(auto it:b1){
            bb[it]++;
        }
        for(int i=1;i<=9;i++){
            ll minn=min(aa[i],bb[i]);
            aa[i]-=minn;bb[i]-=minn;
        }
        for(auto it:aa){
            if(it.se!=0&&it.fi!=1){
                cnt+=it.se;
            }
        }
        for(auto it:bb){
            if(it.se!=0&&it.fi!=1){
                cnt+=it.se;
            }
        }
        cout<<cnt endl;
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