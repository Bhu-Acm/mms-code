//fly!
#include<bits/stdc++.h>
#define ll int
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
ll lowbit(ll x){return x&(-x);}
int n,m;ll t1[2050][2050]={0},t2[2050][2050]={0},t3[2050][2050]={0},t4[2050][2050]={0};
void treeadd1(int x,int y,int v){
    for(int i=x;i<=n;i+=lowbit(i)){
        for(int j=y;j<=m;j+=lowbit(j)){
            t1[i][j]+=v;
            t2[i][j]+=v*x;
            t3[i][j]+=v*y;
            t4[i][j]+=v*x*y;
        }
    }
}
void treeadd(int x1,int y1,int x2,int y2,int k){
    treeadd1(x1,y1,k);treeadd1(x1,y2+1,-k);
    treeadd1(x2+1,y1,-k);treeadd1(x2+1,y2+1,k);
}
ll treehe1(int x,int y){
    ll sum=0;
    for(int i=x;i;i-=lowbit(i)){
        for(int j=y;j;j-=lowbit(j)){
            sum+=(x+1)*(y+1)*t1[i][j]-(y+1)*t2[i][j]-(x+1)*t3[i][j]+t4[i][j];
        }
    }
    return sum;
}
ll treehe(int x1,int y1,int x2,int y2){
    return treehe1(x2,y2)-treehe1(x2,y1-1)-treehe1(x1-1,y2)+treehe1(x1-1,y1-1);
}
void solve() {   
  char c;cin>>c>>n>>m;
  while(cin>>c){
    if(c=='L'){
        int a,b,c,d,k;cin>>a>>b>>c>>d>>k;
        treeadd(a,b,c,d,k);
    }else{
        int a,b,c,d;cin>>a>>b>>c>>d;
        cout<<treehe(a,b,c,d) endl;
    }
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