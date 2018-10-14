#include<iostream>

using namespace std;

step(int n, int i)
{
if(n==0)
return 1;
int ans = 0;
if (n>=1){
for(int j = 1; j<=i && j<=n ; j++)
ans += step(n-j, i);
}
return ans;
}
int main()
{
int n,i;
cin>>n>>i;
cout<<step(n,i);
return 0;
}
/end of
