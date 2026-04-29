//building roads cses with dsu 
#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define vvi vector<vi>
int parent[100001];
int vis[100001];
vvi tree(100001);
void make(int x){
    parent[x]=x;
}
int find(int x){
    if (parent[x]==x){
        return x;
    }else{
        parent[x]=find(parent[x]);
        return parent[x];
    }
}
void merge(int a,int b){
    int p=find(a);
    int q=find(b);
    if(p!=q){
        parent[q]=p;
        return;
    }
}

int main(){
  
  int n ,m;
  cin>>n>>m;


  for(int i=1;i<=n;i++){
    make(i);
  }

  for(int i =1;i<=m;i++){
    int u,v;
    cin>>u>>v;
    tree[u].push_back(v);
    tree[v].push_back(u);
    merge(u,v);
  }
  unordered_set<int>s;
  for(int i=1;i<=n;i++){
    s.insert(find(i));
  }
  vector<int>ans;

  for(auto it : s){
    ans.push_back(it);
  }
  cout<<ans.size()-1<<endl;
  for(int i=0;i<ans.size()-1;i++){
    cout<<ans[i]<<" "<<ans[i+1]<<endl;
  }

return 0;

}
