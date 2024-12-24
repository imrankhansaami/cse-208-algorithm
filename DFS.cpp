{\rtf1\ansi\ansicpg1252\cocoartf2821
\cocoatextscaling0\cocoaplatform0{\fonttbl\f0\fswiss\fcharset0 Helvetica;}
{\colortbl;\red255\green255\blue255;}
{\*\expandedcolortbl;;}
\paperw11900\paperh16840\margl1440\margr1440\vieww11520\viewh8400\viewkind0
\pard\tx566\tx1133\tx1700\tx2267\tx2834\tx3401\tx3968\tx4535\tx5102\tx5669\tx6236\tx6803\pardirnatural\partightenfactor0

\f0\fs24 \cf0 #include<stdio.h>\
#include<conio.h>\
int a[20][20],reach[20],n;\
void dfs(int v)\
\{\
 int i;\
reach[v]=1;\
 for(i=1;i<=n;i++)\
  if(a[v][i] && !reach[i])\
  \{\
\
   dfs(i);\
\
   printf("%d ",i);\
  \}\
\
\}\
\
void main()\
\{\
 int i,j,count=0,start;\
\
 printf("Enter number of vertices:");\
 scanf("%d",&n);\
 for(i=1;i<=n;i++)\
 \{\
  reach[i]=0;\
  for(j=1;j<=n;j++)\
   a[i][j]=0;\
 \}\
 printf("\\nEnter the adjacency matrix: ");\
 for(i=1;i<=n;i++)\
  for(j=1;j<=n;j++)\
    a[i][j]=0;\
   //scanf("%d",&a[i][j]);\
while(1)\
\{\
    printf("\\nEnter edge (u,v): ");\
    scanf("%d %d",&i,&j);\
     if((i == -1) && (j == -1))\
            break;\
    a[i][j]=1;\
\}\
printf("\\nEnter the starting node: ");\
scanf("%d",&start);\
 dfs(start);\
 printf("%d ",start);\
//print rest of unvisited nodes\
 for(i=1;i<=n;i++)\
 \{\
     if(!reach[i])\
        \{\
           dfs(i);\
            printf(" %d",i);\
        \}\
\
\
//printf("%d ",reach[i]);\
 \}\
 /*for(i=1;i<=n;i++)\
 \{\
  if(reach[i])\
   count++;\
 \}\
 if(count==n)\
  printf(" Graph is connected");\
 else\
  printf(" Graph is not connected");\
  */\
\}}