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
//贪 
void solve() {   
  int n;cin>>n;
  ll x[n+10];
  map<ll,ll>mp;vector<ll>v;ll maxx=-1;
  for(int i=1;i<=n;i++){
    cin>>x[i];
    mp[x[i]]++;
  }
  sort(x+1,x+n+1);
  int a=1,b=n;int f=0;
  map<ll,ll>mp1;
  for(auto it:mp){
    mp1[it.se]++;
    maxx=max(maxx,it.se);
  }
  if(n-maxx==maxx){
    cout<<0 endl;return ;
  }
  if(n%2==0&&mp1.size()==1&&mp.size()!=1){
    cout<<0 endl;return ;
  }
  if(n%2!=0&&maxx<=n/2){
    cout<<1 endl;return ;
  }
  cout<<max(maxx*2-n,(ll)0) endl;return ;
//   while(a<b){
//     if(x[a]==x[b])break;
//     a++;b--;
//     f++;
//   }
//   cout<<n-2*f endl;
//   if(mp.size()==1){
//     cout<<n endl;return ;
//   }
//   while(1){
//     int flag=0;
//   for(auto it:mp){
//     if(it.se==0){
//        // mp.erase(it.fi);
//        continue;
//     }
//     v.push_back(it.fi);
//     mp[it.first]--;
//     flag=1;
//   }
//   if(flag==0)break;
//   }int f=0;
//   for(int i=0;i<v.size();i+=2){
//     if(v[i]==v[i+1]||i==v.size()-1&&v.size()%2!=0)break;
//     f++;
//   }
//   cout<<n-2*f endl;
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