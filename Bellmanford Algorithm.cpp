{\rtf1\ansi\ansicpg1252\cocoartf2821
\cocoatextscaling0\cocoaplatform0{\fonttbl\f0\fswiss\fcharset0 Helvetica;}
{\colortbl;\red255\green255\blue255;}
{\*\expandedcolortbl;;}
\paperw11900\paperh16840\margl1440\margr1440\vieww11520\viewh8400\viewkind0
\pard\tx566\tx1133\tx1700\tx2267\tx2834\tx3401\tx3968\tx4535\tx5102\tx5669\tx6236\tx6803\pardirnatural\partightenfactor0

\f0\fs24 \cf0 #include <iostream>\
#include <vector>\
#include <tuple>\
#include <climits>\
using namespace std;\
\
class Graph \{\
    int V;\
    vector<tuple<int, int, int>> edges;\
\
public:\
    Graph(int vertices) : V(vertices) \{\}\
\
    void addEdge(int u, int v, int w) \{\
        edges.push_back(\{u, v, w\});\
    \}\
\
    void bellmanFord(int src) \{\
        vector<int> dist(V, INT_MAX);\
        dist[src] = 0;\
\
        for (int i = 0; i < V - 1; i++) \{\
            for (auto &[u, v, w] : edges)\
                if (dist[u] != INT_MAX && dist[u] + w < dist[v])\
                    dist[v] = dist[u] + w;\
        \}\
\
        for (auto &[u, v, w] : edges)\
            if (dist[u] != INT_MAX && dist[u] + w < dist[v]) \{\
                cout << "Graph contains a negative-weight cycle" << endl;\
                return;\
            \}\
\
        for (int i = 0; i < V; i++)\
            cout << i << "\\t" << (dist[i] == INT_MAX ? "INF" : to_string(dist[i])) << endl;\
    \}\
\};\
\
int main() \{\
    Graph g(5);\
    g.addEdge(0, 1, -1);\
    g.addEdge(0, 2, 4);\
    g.addEdge(1, 2, 3);\
    g.addEdge(1, 3, 2);\
    g.addEdge(1, 4, 2);\
    g.addEdge(3, 2, 5);\
    g.addEdge(3, 1, 1);\
    g.addEdge(4, 3, -3);\
\
    g.bellmanFord(0);\
    return 0;\
\}\
}