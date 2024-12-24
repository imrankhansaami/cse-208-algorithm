{\rtf1\ansi\ansicpg1252\cocoartf2821
\cocoatextscaling0\cocoaplatform0{\fonttbl\f0\fswiss\fcharset0 Helvetica;}
{\colortbl;\red255\green255\blue255;}
{\*\expandedcolortbl;;}
\paperw11900\paperh16840\margl1440\margr1440\vieww11520\viewh8400\viewkind0
\pard\tx566\tx1133\tx1700\tx2267\tx2834\tx3401\tx3968\tx4535\tx5102\tx5669\tx6236\tx6803\pardirnatural\partightenfactor0

\f0\fs24 \cf0 #include <stdio.h>\
#define INF 9999\
#define MAX 20\
\
int G[MAX][MAX], spanning[MAX][MAX], n;\
\
int prims() \{\
    int cost[MAX][MAX], distance[MAX], from[MAX], visited[MAX] = \{0\}, min_cost = 0;\
    int i, j, u, v, min_distance, edges = n - 1;\
\
    // Initialize cost and spanning matrices\
    for (i = 0; i < n; i++)\
        for (j = 0; j < n; j++) \{\
            cost[i][j] = G[i][j] ? G[i][j] : INF;\
            spanning[i][j] = 0;\
        \}\
\
    for (i = 1, distance[0] = 0, visited[0] = 1; i < n; i++) \{\
        distance[i] = cost[0][i];\
        from[i] = 0;\
    \}\
\
    while (edges--) \{\
        min_distance = INF;\
\
        // Find the nearest unvisited vertex\
        for (i = 1; i < n; i++)\
            if (!visited[i] && distance[i] < min_distance)\
                min_distance = distance[i], v = i;\
\
        u = from[v];\
        spanning[u][v] = spanning[v][u] = distance[v];\
        min_cost += cost[u][v];\
        visited[v] = 1;\
\
        // Update distance and from arrays\
        for (i = 1; i < n; i++)\
            if (!visited[i] && cost[i][v] < distance[i])\
                distance[i] = cost[i][v], from[i] = v;\
    \}\
\
    return min_cost;\
\}\
\
int main() \{\
    int i, j;\
\
    printf("Enter number of vertices: ");\
    scanf("%d", &n);\
\
    printf("\\nEnter cost adjacency matrix (0 for no edge):\\n");\
    for (i = 0; i < n; i++)\
        for (j = 0; j < n; j++)\
            scanf("%d", &G[i][j]);\
\
    printf("\\nSpanning Tree Matrix:\\n");\
    int total_cost = prims();\
\
    for (i = 0; i < n; i++) \{\
        for (j = 0; j < n; j++)\
            printf("%d\\t", spanning[i][j]);\
        printf("\\n");\
    \}\
\
    printf("\\nTotal cost of spanning tree = %d\\n", total_cost);\
    return 0;\
\}\
}