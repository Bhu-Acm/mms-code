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
void solve() {   
  int n,m;cin>>n>>m;
  char x[n+10][m+10];
  for(int i=1;i<=n;i++){
    for(int j=1;j<=m;j++){
        cin>>x[i][j];
    }
  }
  char x1[n+10][m+10];int t=0;
  memset(x1,'.',sizeof(x1));
  for(int j=1;j<=m;j++){
    int flag=0;t=0;
    for(int i=1;i<=n;i++){
        if(x[i][j]=='o'){
            flag=1;
            x1[i][j]='o';
            for(int k=i-1;k>=1&&t>0;k--){
                x1[k][j]='*';t--;
            }
        }
        if(x[i][j]=='*'){
            t++;
        }
    }
    if(flag==0||t!=0){
        for(int k=n;k>=1&&t>0;k--){
            x1[k][j]='*';t--;
        }
    }
  }
  for(int i=1;i<=n;i++){
    for(int j=1;j<=m;j++){
        cout<<x1[i][j];
    }
    cout endl;
  }
 // cout endl;
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