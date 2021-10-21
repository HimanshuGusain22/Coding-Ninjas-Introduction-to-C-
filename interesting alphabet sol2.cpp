/*

Print the following pattern for the given number of rows.
Pattern for N = 5

E
DE
CDE
BCDE
ABCDE

*/

#include <iostream>
using namespace std;

int main()
{
   int n;
   cin >> n;

   char c='A';
   c=c+n-1;

   int i=1;

   while(i<=n){

       int j=1;

       while(j<=i){

          cout<<c;
         c++;
         j++;

       }cout<<endl;

       i++;
        c=c-i;
   }

    return 0;
}

