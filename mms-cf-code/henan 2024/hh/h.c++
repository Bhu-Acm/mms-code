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
#define mod 998244353
ll ksm(ll a,ll b){
    ll res=1;
    while(b){
        if(b&1) res=res*a%mod;
        a=a*a%mod;
        b>>=1;
    }
    return res;
}
void solve() {   
  int n;cin>>n;
  priority_queue<ll,vector<ll>,greater<ll> > q;
  map<ll,ll>mp;ll t=1;vector<ll>v;ll sum=0;
  for(int i=1;i<=2*n;i++){
    int a;cin>>a;
    if(a!=-1){
        q.push(a);
        mp[a]++;sum++;
    }else{
        t*=mp[q.top()]*ksm((ll)q.size(),(ll)mod-2)%mod;
        t%=mod;
        mp[q.top()]--;
        v.push_back(q.top());
        q.pop();sum--;
        
    }
  }
  for(int i=0;i<v.size()-1;i++){
    if(v[i]>v[i+1]){
        cout<<"0\n";return ;
    }
  }
  cout<<t endl;
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