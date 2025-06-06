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
struct S{
    ll x[2010];
    string s;
    int id;
}s[2010];
//一开始想的是传字符串然后比较但是傻逼了 高位数就炸钢了后面反正调了好久 换了一个比较函数哎哎 真不如简单粗暴比较 数据比较小
//比较代码询问了ai 当然自己也能写 
//直接return a.x>b.x 实际上返回的是数组地址的大小
bool cmp(S a, S b) {
    for (int i = 0; i < 2010; ++i) {
        if(a.x[i]!=b.x[i]) return a.x[i]>b.x[i];// 大的排前面
    }
return false;
}
void solve() {   
  int n;cin>>n;
  ll x[n+10];
  int f=0;int f1=0;
  for(int i=1;i<=n;i++){
    cin>>x[i];
    if(x[i]==n)f=i-1;
    if(x[i]==n-1)f1=i-1;
  }

  int r=f;
  if(n==1){
    cout<<x[1] endl;return ;
  }
 if(r==0)r=f1;
 if(r==n-1)r=n;
  ll s1[20010];
 for(int i=1;i<=r+1;i++){
    int t=1;
    s[i].id=i;
    for(int j=r+1;j<=n;j++){
        s[i].x[t]=x[j];t++;
     }
    if(i==r){
    //       for(int j=r+1;j<=n;j++){
    //    s[i].x[t]=x[j];t++;s[i].s+=tos(x[j]);
    // }
    s[i].x[t]=x[i];t++;
        for(int j=1;j<i;j++){
        s[i].x[t]=x[j];t++;
    }
     
        continue;
    }
    for(int j=r;j>=i;j--){
       // if(r==i)break;
        s[i].x[t]=x[j];t++;
    }
    for(int j=1;j<i;j++){
        s[i].x[t]=x[j];t++;
    }
 } sort(s+1,s+r+1,cmp);
 for(int i=1;i<=n;i++){
    cout<<s[1].x[i] endd;
 }cout endl;
 //memset(s,0,sizeof(s));
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