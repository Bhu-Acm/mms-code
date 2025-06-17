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
// 奇妙结论 maybe 看了洛谷的题解
//三次操作之后 再加上每个数的（n-i）次 泰强
//不是谁想出来的这种题目啊 真服了
void solve() {   
  int n;cin>>n;
  ll x[n+10];
 // map<ll,ll>mp,mp1;
  ll sum=0;
  for(int i=1;i<=n;i++){
    cin>>x[i];
    sum+=x[i];
   // mp[x[i]]++;
  }
  vector<ll>v,v1;map<ll,ll>mp;ll maxx=0; //sum=0;
  v.push_back(0);v1.push_back(0);
  for(int i=1;i<=n;i++){
    mp[x[i]]++;
    if(mp[x[i]]>=2&&x[i]>=maxx){
        maxx=x[i];
    }
    x[i]=maxx;
    if(x[i]!=0){
        v.push_back(x[i]);
    }
    sum+=x[i];
  }
  mp.clear();maxx=0;
  for(int i=1;i<v.size();i++){
    mp[v[i]]++;
    if(mp[v[i]]>=2&&v[i]>=maxx){
        maxx=v[i];
    }
    v[i]=maxx;
    if(v[i]!=0){
        v1.push_back(v[i]);
    }
    sum+=v[i];
  }
  mp.clear();maxx=0;v.clear();v.push_back(1);
  for(int i=1;i<v1.size();i++){
    mp[v1[i]]++;
    if(mp[v1[i]]>=2&&v1[i]>=maxx){
        maxx=v1[i];
    }
    v1[i]=maxx;
    if(v1[i]!=0){
        v.push_back(v1[i]);
    }
    //sum+=v1[i];
  }
  ll ans=0;
  for(int i=1;i<v.size();i++){
    ans+=(v.size()-i)*v[i];
  }
  cout<<ans+sum endl;
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