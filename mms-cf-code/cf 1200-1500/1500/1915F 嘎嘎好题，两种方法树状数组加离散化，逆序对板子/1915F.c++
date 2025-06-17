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
    ll a;
    ll b;
    ll id;
}x[300000];
bool cmp(S a,S b){
    return a.a<b.a;
}
//也可以树状数组加离散化做
// 归并排序板子 计算逆序对
int a[300000],b[300000];ll ans=0;
void msort(int l,int r)
{
	if(l==r) return;
	int mid=l+r>>1;
	msort(l,mid);
	msort(mid+1,r);
	int i=l,j=mid+1,k=l;
	while(i<=mid&&j<=r)
	{
		if(a[i]<=a[j]) b[k++]=a[i++];
		else {b[k++]=a[j++];ans+=mid-i+1;}
	}
	while(i<=mid) b[k++]=a[i++];
	while(j<=r)   b[k++]=a[j++];
	for(i=l;i<=r;i++) a[i]=b[i]; 
   // return cnt;
}
void solve() {   
  int n;cin>>n;
  for(int i=1;i<=n;i++){
    cin>>x[i].a>>x[i].b;
  }
  sort(x+1,x+n+1,cmp);
  for(int i=1;i<=n;i++){
    a[i]=x[i].b;
  }
   ans=0;
  msort(1,n);
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