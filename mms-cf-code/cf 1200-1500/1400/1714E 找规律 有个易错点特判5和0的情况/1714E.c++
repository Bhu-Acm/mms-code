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
//注释掉的是我看了题解之后的代码 
//但是实际上我原先代码少了一个特判
//不是很难主要是特判卡了
void solve() {   
    int n;cin>>n;
    map<ll,ll>mp,w;
    ll x[n+10];int flag=0;
    for(int i=1;i<=n;i++){
        cin>>x[i];
        if(x[i]%10==5)x[i]+=5;//提前处理5和0结尾的情况
        if(x[i]%10==0)flag++;w[x[i]]++;
       // x[i]%=20;
    }
    if(n==1||w.size()==1){
        cout<<"Yes\n";return ;
    }
    if(flag==n){
        cout<<"No\n";return ;
    }
    for(int i=1;i<=n;i++){
        map<ll,ll>mp1;
        ll t=x[i];
        while(mp1[t%20]==0){
            mp1[t%20]++;
            mp[t%20]++;
            t+=t%10;t%=20;
        }
    }
    for(auto it:mp){
        if(it.se>=n){
            cout<<"Yes\n";return ;
        }
    }
    cout<<"No\n";
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
/*//fly!
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
    int n;cin>>n;
    map<ll,ll>mp,w;
    ll x[n+10];int flag=0;
    for(int i=1;i<=n;i++){
        cin>>x[i];
        
        if(x[i]%10==5)x[i]+=5;
        if(x[i]%10==0)flag++;w[x[i]]++;
       // x[i]%=20;
    }
    if(n==1||w.size()==1){
        cout<<"Yes\n";return ;
    }
    if(flag==n){
        cout<<"No\n";return ;
    }
    for(int i=1;i<n;i++){
        map<ll,ll>mp1;
        ll t=x[i];ll t1=x[i+1];
        if(t%5==0&&t1%5!=0||t%5!=0&&t1%5==0){
            cout<<"No\n";return ;
        }
        for(int i=1;;i++){
            if(t%10==t1%10)break;
            for(int j=1;j<=5;j++){
                t1+=t1%10;
                 if(t%10==t1%10)break;
            }
            if(t%10==t1%10)break;
            t+=t%10;
        }
        if(t/10%10%2!=t1/10%10%2){
            cout<<"No\n";return ;
        }
    }
    // for(auto it:mp){
    //     if(it.se>=n){
    //         cout<<"Yes\n";return ;
    //     }
    // }
    cout<<"Yes\n";
   // cout<<32/10%10%2;
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
}*/