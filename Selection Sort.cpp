{\rtf1\ansi\ansicpg1252\cocoartf2818
\cocoatextscaling0\cocoaplatform0{\fonttbl\f0\fswiss\fcharset0 Helvetica;}
{\colortbl;\red255\green255\blue255;}
{\*\expandedcolortbl;;}
\paperw11900\paperh16840\margl1440\margr1440\vieww11520\viewh8400\viewkind0
\pard\tx566\tx1133\tx1700\tx2267\tx2834\tx3401\tx3968\tx4535\tx5102\tx5669\tx6236\tx6803\pardirnatural\partightenfactor0

\f0\fs24 \cf0 #include <iostream>\
#include <vector>\
using namespace std;\
\
void selectionSort(vector<int>& array, int n) \{\
    for (int i = 0; i < n - 1; i++) \{\
        int minIndex = i;\
\
        // Find the minimum element in the unsorted part of the array\
        for (int j = i + 1; j < n; j++) \{\
            if (array[j] < array[minIndex]) \{\
                minIndex = j;\
            \}\
        \}\
\
        // Swap the found minimum element with the first element of the unsorted part\
        if (minIndex != i) \{\
            swap(array[i], array[minIndex]);\
        \}\
    \}\
\}\
\
int main() \{\
    int n;\
    cout << "Enter the size of the array: ";\
    cin >> n;\
\
    if (n <= 0) \{\
        cout << "Invalid array size. Size must be greater than 0." << endl;\
        return 1;\
    \}\
\
    vector<int> array(n);\
    cout << "Enter " << n << " elements of the array: ";\
    for (int i = 0; i < n; i++) \{\
        cin >> array[i];\
    \}\
\
    selectionSort(array, n);\
\
    cout << "Sorted array: ";\
    for (int i = 0; i < n; i++) \{\
        cout << array[i] << " ";\
    \}\
    cout << endl;\
\
    return 0;\
\}\
}