//https://www.luogu.com.cn/problem/P4779
//再手搓一遍 从建图到遍历再到输出
#include<bits/stdc++.h>
using namespace std;
#define ll long long
struct Tu{
    ll v;
    ll w;
    ll next;
}tu[200010];
struct CMP{
    ll x;
    ll id;
    bool operator<(const CMP & a)const{
        return a.x<x;
    }
};
ll cnt=0;ll head[200010];
void add(ll u,ll v,ll w){
    tu[++cnt].v=v;
    tu[cnt].w=w;
    tu[cnt].next=head[u];
    head[u]=cnt;
}
ll dis[200010]={0};
ll pos[200010]={0};
int main(){
    memset(head,-1,sizeof(head));
     ll n,m,s;
     cin>>n>>m>>s;
     priority_queue<CMP>q;
     for(int i=1;i<=m;i++){
        ll u,v,w;cin>>u>>v>>w;
        add(u,v,w);
        dis[i]=999999999999999;
     }
     q.push(CMP{0,s});
     ll u;
     dis[s]=0;
     while(q.size()!=0){
        CMP w=q.top();
        q.pop();
        u=w.id;
        if(pos[u]==0){
            pos[u]=1;
        for(int i=head[u];i;i=tu[i].next){
            ll v=tu[i].v;
            if(dis[v]>dis[u]+tu[i].w){
                dis[v]=dis[u]+tu[i].w;
                if(pos[v]==0)
                q.push((CMP){dis[v],v});
                
            }
        }
    }
     }
     for(int i=1;i<=n;i++){
        cout<<dis[i] <<" ";
     }
    return 0;
}