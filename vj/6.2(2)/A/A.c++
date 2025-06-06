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
ll dd[200000][3];
ll x1,y11,x2,y2;ll n;string s;
ll sumx=0,sumy=0;
void solve() {   
  cin>>x1>>y11>>x2>>y2;
  cin>>n;
  cin>>s;
  for(int i=0;i<s.size();i++){
    if(s[i]=='U'){
      dd[i][1]=1;dd[i][0]=0;
    }else if(s[i]=='D'){
      dd[i][1]=-1;dd[i][0]=0;
    }else if(s[i]=='L'){
      dd[i][0]=-1;dd[i][1]=0;
    }else{
      dd[i][0]=1;dd[i][1]=0;
    }
    sumx+=dd[i][0];sumy+=dd[i][1];
  }
  ll a=1;ll b=1e15;
  while(a<b){
    ll mid=(a+b)>>1;
    ll t=mid;ll posx=x1,posy=y11;
    if(mid>=n){
      ll t1=mid/n;
      posx+=t1*sumx;posy+=t1*sumy;
      mid%=n;
    }
    for(int i=0;i<mid;i++){
      posx+=dd[i][0];posy+=dd[i][1];
    }
    ll ans=abs(posx-x2)+abs(posy-y2);
    if(ans<=t){
      b=t;
    }else{
      a=t+1;
    }
    
  }if(a==1e15){
      cout<<-1 endl;
    }else{
      cout<<a endl;
    }
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