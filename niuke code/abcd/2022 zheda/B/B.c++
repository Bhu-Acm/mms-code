//fly!
#include<bits/stdc++.h>
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
//#define double long double
#define endd <<" "
using namespace std;
//atuo lfy 琴弦断了，缘也尽了，你也走了
//ll x[500010] = { 0 };
void solve() {   
  int h1,h2,m;cin>>h1>>h2>>m;
    map<ll,ll>mp;int flag=0;
    while(m--){
        int shi=0,fen=0;
        int t;
        scanf("%d:%d %d",&shi,&fen,&t);
        int sum=shi*60+fen;
        if(t==1){
            flag=1;
            h1+=800;
        }else if(t==2){
            h1+=h2;
        }else{
            int a;cin>>a;
            if(sum-mp[a]>=30&&flag==1||mp[a]==0&&flag==1){
               h1+=(ll)(125+h1*0.06)*0.1;
                mp[a]=sum;
            }
        }
    }
    cout<<h1 endl;
}
int main() {
  //  std::ios::sync_with_stdio(false);
    // cin.tie(0);cout.tie(0);
    int T = 1;
    // scanf("%d", &T);
    // cin >> T;
    while (T--) {
        solve();
    }
    return 0;
}