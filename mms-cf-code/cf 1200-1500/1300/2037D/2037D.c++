//fly!
#include<bits/stdc++.h>
#include<algorithm>
#include<string>
#include<map>
#include<stack>
#include<queue>
#include<deque>
#include<numeric>
#define ll long  long
#define ull unsigned long long
#define itn int 
#define mian main
#define N 1000010
#define yes true
#define no false
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
//ll x[500010] = { 0 };
 ll sumy = 0;
struct S{
    ll a;
   ll y;
}x[200010]={0};;
void solve() {  
     sumy=0;
  ll n,m,l;cin>>n>>m>>l;
  vector<ll>v;ll t=1;
  map<ll,ll>mp;
  for(itn i=1;i<=n;i++){
    int a,b;cin>>a>>b;
    v.push_back(a);
    v.push_back(b);
  }
  for(itn i=1;i<=m;i++){
    cin>>x[i].a>>x[i].y;
  }
  //找障碍
  ll pos=1;priority_queue<ll>q;
  for(int i=0;i<v.size();i+=2){
    ll a=v[i];ll b=v[i+1];
    int flag=0;
    for(;pos<=m&&x[pos].a<=a;pos++){
            q.push(x[pos].y);
    }
    if(a-1+t<b+1){
        while(q.size()!=0&&a-1+t<b+1){
            t+=q.top();
            q.pop();
            sumy++;
        }
        if(a-1+t<b+1&&q.size()==0){
            cout<<-1 endl;return ;
        }
    }
   // pos=b+1;
  }
  cout<<sumy endl;
}
int main() {
    std::ios::sync_with_stdio(false);
     cin.tie(0);cout.tie(0);
    int T = 1;
   // init();
    // scanf("%d", &T);
     cin >> T;
    while (T--) {
     //   memset(x,0,sizeof(x));
        solve();
    }
    return 0;
}