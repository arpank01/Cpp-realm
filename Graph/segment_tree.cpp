#include <bits/stdc++.h>
#define int long long
#define vi vector<int>
#define vvi vector<vi>
#define pii pair<int,int>
#define N 1000000
using namespace std;
int arr[2*N];
int seg[4*N];

void build(int idx , int l , int r ){
        if(l==r){
                seg[idx]=arr[l];return;
        }
        int mid=(l+r)>>1;
        build(2*idx,l,mid);
        build(2*idx+1,mid+1,r);
        seg[idx]=min(seg[2*idx],seg[2*idx+1]);
}
void update(int idx,int l , int r , int pos , int val){
        if(l==r){
                seg[idx]=val;
                return;
        }
        int mid=(l+r)>>1;
        if(pos<=mid){
                update(2*idx,l, mid,pos,val);
        }else{
                update(2*idx+1,mid+1,r,pos,val);
        }

        seg[idx]=min(seg[2*idx],seg[2*idx+1]);
}
int query(int idx, int l , int r , int ql , int qr){
        if(ql<=l && qr>=r ){
                return seg[idx];
        }
        if(ql>r || qr<l){
                return INT_MAX;
        }
        int mid=(l+r)>>1;
        int a=query(2*idx,l,mid,ql,qr);
        int b=query(2*idx+1,mid+1,r,ql,qr);
        return min(a,b);
}
int32_t main(){
        int n,q;
        cin>>n>>q;
        for(int i=1;i<=n;i++){
                cin>>arr[i];
        }
        build(1,1,n);
        for(int i=1;i<=q;i++){
                int a;
                cin>>a;
                 int u,v;
                cin>>u>>v;
                if(a==1){
                        update(1,1,n,u,v);
                }else{
                        cout<<query(1,1,n,u,v)<<endl;

                }
        }


}
