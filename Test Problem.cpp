#include <cstdio>
#include <string>
#include <iostream>
using namespace std;
int main(){
   int n;
   while(scanf("%d",&n)!=EOF){
      if(n!=42)printf("%d\n",n);
      else break;
   }
}
