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
//用map会超时 注意 建议使用普通数组
void solve() {   
  int n;cin>>n;
  string s;cin>>s;
  ll mp[n+10]={0},mp1[n+10]={0};vector<ll>v;
  //memset(mp,0,sizeof(mp));
  //memset(mp1,0,sizeof(mp1));
  ll maxx=-1;
  for(int i=0;i<s.size();i++){
    if(s[i]=='0'){
        v.push_back(i+1);
        mp[i+1]++;
    }
  }ll ans=0;int flag=0;
  for(int i=0;i<v.size();i++){
    ll t=v[i];
    //if(mp[v[i]]==-1)continue;
    for(int j=1;v[i]*j<=n;j++){
      if(mp[v[i]*j]!=0){
        if(mp1[v[i]*j]!=-1){
        ans+=t;flag++;
        if(flag==v.size()){
          cout<<ans endl;return ;
        }
        }
        //v[i]=-1;
        mp1[v[i]*j]=-1;
      }else{
        break;
      }
    }
    // if(mp[v[i]]==0){
    //     ans+=v[i];mp1[v[i]]++;mp[v[i]]=v[i];
    //     mp[v[i]*(mp1[v[i]]+1)]=v[i];
    // }else{
    //     ans+=mp[v[i]];mp1[mp[v[i]]]++;
    //     if(mp1[v[i]]==0){
    //         mp1[v[i]]++;mp[v[i]]=v[i];
    //         ll minn=mp[v[i]];
    //       //  mp[v[i]*(mp1[v[i]]+1)]=min(minn,v[i]);
    //     }
    //     mp[mp[v[i]]*(mp1[mp[v[i]]]+1)]=mp[v[i]];
    // }
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