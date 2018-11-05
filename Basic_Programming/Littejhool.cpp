#include <iostream>

#include <string>

using namespace std;

int n;


int main (){

int i;
   
 string uk;
    
getline(cin,uk);
 
   int len = uk.length();
 
   string t1="000000";
   
 string t2="111111";
    for (i=1;i<=len-5;i++){
        string rashi=uk.substr(i,6);
        if (rashi.compare(t1)==0||rashi.compare(t2)==0)
{
            cout<<"Sorry, sorry!";
                goto goku;
        }

    }
    cout<<"Good luck!";

    goku:
return 0;
}
