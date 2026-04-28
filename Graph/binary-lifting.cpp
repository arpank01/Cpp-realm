#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define vvi vector<vi>
#define LOG 14
int parent[1000];
int depth[1000];
int anc[1000][LOG];
int vis[10000];

void dfs(int root,int par,int dep,vvi &tree){
    if(vis[root]==1){
        return;
    }
    vis[root]=1;
    parent[root]=par;
    depth[root]=dep;
    for(auto it : tree[root] ){
        dfs(it,root,dep+1,tree);
    }
}

void lift(){
    for(int k=1;k<=12;k++){
         anc[k][0]=parent[k];
    }
   
    for(int i=1;i<LOG-1;i++){
        for(int j=1;j<=12;j++){
        anc[j][i]=anc[anc[j][i-1]][i-1];
    }
    }
}

int kthanc(int root,int k){
    for(int  i=0;i<=20;i++){
        if(k&(1<<i)){
            root=anc[root][i];
        }else{

        }
    }
    return root;
}


int main() {
    vector<vector<int>>tree(300000);
    int n;
    n=12;
    for(int i=1;i<=n-1;i++){
        int a,b;
        cin>>a>>b;
        tree[a].push_back(b);
        tree[b].push_back(a);
    }
   

   dfs(1,0,0,tree);
   lift();
   cout<<kthanc(12,9);

    
    return 0;
}
//sample input 
/*
1 2
1 3
2 4
2 5
3 6
3 7
4 8
5 9
6 10
7 11
11 12
  */
