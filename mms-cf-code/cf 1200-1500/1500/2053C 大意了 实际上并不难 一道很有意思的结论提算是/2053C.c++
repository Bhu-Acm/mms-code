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
//傻逼了 我靠 实际上并不难 每次拆分的时候 左边和右边的数相加一定会是
//一开始中位数的2倍 所以只要看一共能搞到几对数就行 也就是2的次方（层数）
ll n,k;ll ans=0;int flag=0;int maxx=0;
void dfs(ll a,ll b,int cnt){
   // maxx=max(maxx,cnt);
   // if(flag==1)return ;
    ll t=(a+b)>>1;
    if((b-a+1)%2==0){
        if(t-a+1<k||b-t-1+1<k){
            return ;
        }
        dfs(a,t,++cnt);//dfs(t+1,b);
    }else{
        ll s=1;
        for(int i=1;i<=cnt;i++){
            s*=2;
        }
        maxx+=s;
        if(a!=b){
            if(t-1-a+1<k||b-t-1+1<k){
                return ;
            }
            dfs(a,t-1,++cnt);//dfs(t+1,b);
        }
    }
}
void solve() {   
  cin>>n>>k;
  if(k==1){
    ll t=n+(n-1)*n/2;
    cout<<t endl;return ;
  }
  dfs(1,n,0);
  ans=maxx*(1+n)/2;
  cout<<ans endl;
}
int main() {
    std::ios::sync_with_stdio(false);
     cin.tie(0);cout.tie(0);
    int T = 1;
    // scanf("%d", &T);
     cin >> T;
    while (T--) {
        flag=0;ans=0;maxx=0;
        solve();
    }
    return 0;
}