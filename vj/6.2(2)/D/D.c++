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
  int n,k;cin>>n>>k;
  int x[n+10][n+10]={0};
  memset(x,0,sizeof(x));
  if(n*n<k){
    cout<<-1 endl;return ;
  }
//   for(int i=1;i<=n;i++){
//     if(k>=2&&i-1>=1&&i-1>=1){
//         x[i][i-1]=1;
//         x[i-1][i]=1;k-=2;
//     }
//     if(x[i][i]==0&&k>=1){
//         k--;x[i][i]=1;
//     }
//     if(k==0)break;
//   }
  if(k!=0){
  k--;x[1][1]=1;
  for(int i=1;i<=n;i++){
    if(k>=1&&x[i][i]==0){
        x[i][i]=1;k--;
    }
    for(int j=i;j<=n;j++){
        if(k>=2&&i!=j){
            x[i][j]=1;x[j][i]=1;k-=2;
        }
        // if(k>=1&&x[j][j]==0){
        //     x[j][j]=1;k--;
        // }
        if(k==0)break;
    }
    if(k==0)break;
  }
   }
//   if(k%2==0){
//     x[1][1]=1;k--;
//     if(k!=0)
//     for(int i=1;i<=n;i++){
//         for(int j=i;j<=n;j++){
//             if(i==1&&j==1)continue;
//             if(k<=1){
//                 for(int i=1;i<=n;i++){
//                     if(x[i][i]==0){
//                         k--;
//                         x[i][i]=1;break;
//                     }
//                 }
//                 break;
//             }
//             x[i][j]=1;
//             x[j][i]=1;
//             k-=2;
//             if(k==0)break;
//         }
//         if(k<=0)break;
//     }
    
//   }else{
//     k--;x[1][1]=1;
//     for(int i=2;i<=n;i++){
//         if(k>=3)
//         x[i][i]=1,k--;
//         else break;
//     }
//     for(int i=1;i<=n;i++){
//         for(int j=i;j<=n;j++){
//             if(i==1&&j==1)continue;
//             if(k<=1){
//                 for(int i=1;i<=n;i++){
//                     if(x[i][i]==0){
//                         k--;
//                         x[i][i]=1;break;
//                     }
//                 }
//                 break;
//             }
//             x[i][j]=1;
//             x[j][i]=1;
//             k-=2;
//             if(k==0)break;
//         }
//         if(k<=0)break;
//   }
 
// } 
for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout<<x[i][j] endd;
        }
        cout endl;
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