
// C++ program for Huffman Coding 
#include <bits/stdc++.h> 
using namespace std; 
  
// A Huffman tree node 
struct MinHeapNode { 
  
    // One of the input characters 
    char data; 
  
    // Frequency of the character 
    unsigned freq; 
  
    // Left and right child 
    MinHeapNode *left, *right; 
  
    MinHeapNode(char data, unsigned freq) 
  
    { 
  
        left = right = NULL; 
        this->data = data; 
        this->freq = freq; 
    } 
}; 
