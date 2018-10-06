#include<bits/stdc++.h>
using namespace std;
// it will find the length of common sequence
 int lcs(char *X,char *Y,int m, int n){
int L[m+1][n+1];//it will store our common length trick
int i,j;

 //following steps build the L[m+1][n+1] in bottom up fashion
// and it keep track of the longest common sequence

  for(i=0;i<=m;i++){
   for (j=0;j<=n;j++)
   {
     if (i==0 || j==0){
       L[i][j]=0;// making the first row and first column all elements equal to zero

     }
