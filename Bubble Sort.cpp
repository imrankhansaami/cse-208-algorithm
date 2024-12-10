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
void bubbleSort(vector<int>& array, int n) \{\
    for (int i = 0; i < n - 1; i++) \{\
        bool swapped = false; // Flag to check if a swap occurred\
        for (int j = 0; j < n - i - 1; j++) \{\
            if (array[j] > array[j + 1]) \{\
                // Swap array[j] and array[j + 1]\
                swap(array[j], array[j + 1]);\
                swapped = true;\
            \}\
        \}\
        // If no two elements were swapped in the inner loop, break\
        if (!swapped) \{\
            break;\
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
    bubbleSort(array, n);\
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