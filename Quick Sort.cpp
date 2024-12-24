{\rtf1\ansi\ansicpg1252\cocoartf2821
\cocoatextscaling0\cocoaplatform0{\fonttbl\f0\fswiss\fcharset0 Helvetica;}
{\colortbl;\red255\green255\blue255;}
{\*\expandedcolortbl;;}
\paperw11900\paperh16840\margl1440\margr1440\vieww11520\viewh8400\viewkind0
\pard\tx566\tx1133\tx1700\tx2267\tx2834\tx3401\tx3968\tx4535\tx5102\tx5669\tx6236\tx6803\pardirnatural\partightenfactor0

\f0\fs24 \cf0 #include<stdio.h>\
#include<conio.h>\
\
void quicksort(int array[],int left, int right);\
\
void main()\
\
\{\
	int array[50],n,left,right,i;\
\
	printf("enter number of elements:\\n");\
	scanf("%d",&n);\
\
	for(i=0;i<n;i++)\
	\{\
		printf("enter values:\\n");\
		scanf("%d",&array[i]);\
	\}\
\
\
	left=0;\
	right=n-1;\
\
	quicksort(array,left,right);\
\
	printf("after sorting:\\n");\
\
	for(i=0;i<n;i++)\
	\{\
		printf(" %d  ",array[i]);\
	\}\
\}\
\
void quicksort(int array[], int left, int right)\
\
\{\
\
int flag=false,i=0,j=0,temp=0,partition;\
\
if(right>left)\
\{\
	i=left;\
	j=right;\
	partition=array[left];\
	flag=false;\
	while(!flag)\
	\{\
		while((array[i]<=partition) && (i<=right))\
		\{\
			i++;\
		\}\
\
		while((array[j]>=partition) && (j>left))\
		\{\
			j--;\
		\}\
\
		if(j<i)\
		\{\
			flag=true;\
		\}\
		else\
		\{\
			temp=array[i];\
			array[i]=array[j];\
			array[j]=temp;\
		\}\
\
	\}\
	temp=array[left];\
	array[left]=array[j];\
	array[j]=temp;\
\
\
\
quicksort(array,left,j-1);\
quicksort(array,i,right);\
\}\
return;\
\}}