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
void insertionSort(vector<int>& array, int n) \{\
    for (int i = 1; i < n; i++) \{\
        int key = array[i];\
        int j = i - 1;\
\
        // Move elements of array[0..i-1] greater than key one position ahead\
        while (j >= 0 && array[j] > key) \{\
            array[j + 1] = array[j];\
            j--;\
        \}\
        array[j + 1] = key;\
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
    insertionSort(array, n);\
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