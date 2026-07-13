#include <bits/stdc++.h>
using namespace std;


class Graph{
public:
    vector<vector<int>> vec;

    Graph(int V){
        vec.resize(V);
    }

    void addEdge(int u, int v){
        vec[u].push_back(v);
        vec[v].push_back(u);
    }
};

int main(){
    Graph graph(10);
    graph.addEdge(2, 4);
    graph.addEdge(4, 3);
    graph.addEdge(3, 4);
}