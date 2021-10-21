/*

Terms of AP
Write a program to print first x terms of the series 3N + 2 which are not multiples of 4.

Sample Input 1 :
10
Sample Output 1 :
5 11 14 17 23 26 29 35 38 41

*/

#include <iostream>
using namespace std;

int main()
{
  int n;
  cin>>n;

  for(int i=1,count=1; count<=n; i++){
      int term=((3*i)+2);

      if(term%4==0){
          continue;
      }
      else{
          cout<<term<< " ";
          count++;
      }
  }
}
