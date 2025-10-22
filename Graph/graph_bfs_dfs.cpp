#include <bits/stdc++.h>
using namespace std;

class graph{
    public:
    unordered_map<int,vector<int>>adjList;
};
void addEdge(graph & s){
    int v,nbr;
    bool dirn;
    cout<<"V NBR DIRN : "<<endl;
    cin>>v>>nbr>>dirn;
    if(dirn){
        s.adjList[v].push_back(nbr);
    }else{
         s.adjList[v].push_back(nbr);
          s.adjList[nbr].push_back(v);
    }
}
void bfs(graph g , int src){
    unordered_map<int,bool>visited;
    queue<int>q;
    q.push(src);
    visited[src]=1;


    while(!q.empty()){
        int front=q.front();
        q.pop();
        cout<<front;
        
        for(auto it : g.adjList[front]){
            if(!visited[it]){
                q.push(it);
                visited[it]=1;
            }
        }
    }
}
void dfs(graph s,int src,unordered_map<int,bool>&visited){
    if(visited[src])return;
    cout<<src;
    visited[src]=1;
    for(auto it : s.adjList[src]){
        dfs(s,it,visited);
    }



}
int main(){
    int a;
    graph s;
    cin>>a;
    while(a--){
        addEdge(s);
    }
    while(true){
        int b;
        cout<<endl;
        cout<<"source node : ";
        cin>>b;
    bfs(s,b);
    }
}
