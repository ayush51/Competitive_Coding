#include <iostream>
using namespace std;


int main (){
    int n,i=1;
    cin>>n;
    long  ml[n];

    while (i<=n){
        cin>>ml[i];
        i++;

    }
        i=1;
    while (i<=n){
        if (ml[i]<0){
            ml[i]=ml[i]*-1;
        }
        i++;
    }
i=1;

    for(i=1;i<=3;i++){
long t=0;
       int j=i;
    while(j<=n)
 {
t=t+ml[j];
     j=j+3;

}
    cout<<t<<" ";
    }

return 0;
}
