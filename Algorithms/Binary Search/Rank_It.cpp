#include <iostream>
#include<math.h>
#include <string>
#include <bits/stdc++.h>
using namespace std;
int mid;
int binarySearch(int low,int high,int &keyword,int arr[])

{

   while(low<=high)
   { //making

int mid=(low+high)/2;
     if(arr[mid]<keyword)
     {
         low=mid+1;
     }
     else if(arr[mid]>keyword)
     {
         high=mid-1;
     }
     else
     {
         return mid;
     }

   }

                  //key not found so move further
 }




int main(){
    int n ,q;
    cin>> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    int k = sizeof(arr)/sizeof(arr[1]);

    sort(arr, arr+k);

cin>>q;
    int key[q];
    for (int j=0;j<q;j++){
        cin>> key[j];
    }


int t;
    for (int t=0;t<q;t++ ){

    int low=0;
    int high=n-1;



int ans=binarySearch(low,high,key[t],arr);
ans=ans+1;
cout<<ans<<endl;


    }
    return 0;
}
