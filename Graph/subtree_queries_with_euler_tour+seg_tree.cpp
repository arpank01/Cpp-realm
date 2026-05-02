#include <bits/stdc++.h>
#define int long long
#define vi vector<int>
#define vvi vector<vi>
#define N 200005
using namespace std;
vvi tree(N);
int val[N];
int timer=1;
int flat[N];
int tin[N];
int tout[N];
int seg[4*N];

void build(int idx, int l , int r ){
        if(l==r){
                seg[idx]=val[flat[l]];
                return ;
        }
        int mid= (l+r)>>1;
        build(2*idx, l , mid);
        build(2*idx+1, mid+1, r);
        seg[idx]=seg[2*idx]+seg[2*idx+1];
}

int query(int idx, int l , int r , int ql, int qr ){
        if(ql <=l && qr >=r){
                return seg[idx];
        }
        if(qr<l || ql >r){
                return 0;
        }
        int mid= (l+r)>>1;
        int a =query(2* idx , l, mid, ql , qr);
        int b =query(2*idx+1, mid+1,r, ql,qr);
        return a+b;
}
void update(int idx , int l , int r , int pos , int val){
        if(l==r){
                seg[idx]=val;
                return;
        }
        int mid=(l+r)>>1;
        if(pos<=mid){
                update(2*idx,l,mid,pos,val);
        }else{
                update(2*idx+1,mid+1,r,pos,val);
        }
        seg[idx]=seg[2*idx]+seg[2*idx+1];
}
void dfs(int node , int par){
        tin[node]=timer;
        flat[timer]=node;
        timer++;
        for(auto it : tree[node]){
                if (it==par)continue;
                dfs(it,node);
        }
        tout[node]=timer-1;
}

int32_t main(){
        int n,q;
        cin>>n>>q;
        for(int i=1;i<=n;i++){
                cin>>val[i];
        }
        for(int i=1;i<=n-1;i++){
                int u,v;
                cin>>u>>v;
                tree[u].push_back(v);
                tree[v].push_back(u);
        }
        dfs(1,0);
        build(1,1,n);
     
        for(int i =1;i<=q;i++){
                int u;
                cin>>u;

                if(u==2){
                        int u;
                        cin>>u;
                        cout<<query(1,1,n,tin[u],tout[u])<<endl;
                }else{
                        int l,r;
                        cin>>l>>r;
                        update(1,1,n,tin[l],r);
                } 
        }
 }
