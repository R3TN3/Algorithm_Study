#include <stdio.h>

int main(){
   char s[16];
   int num[16],i=0, t=0;
   scanf("%s", s);
   while(s[i]!='\0'){
      if(s[i]=='A' || s[i]=='B' || s[i]=='C') num[i]=2;
      else if(s[i]=='D' || s[i]=='E' || s[i]=='F') num[i]=3;
      else if(s[i]=='G' || s[i]=='H' || s[i]=='I') num[i]=4;
      else if(s[i]=='J' || s[i]=='K' || s[i]=='L') num[i]=5;
      else if(s[i]=='M' || s[i]=='N' || s[i]=='O') num[i]=6;
      else if(s[i]=='P' || s[i]=='Q' || s[i]=='R'|| s[i]=='S') num[i]=7;
      else if(s[i]=='T' || s[i]=='U' || s[i]=='V') num[i]=8;
      else if(s[i]=='W' || s[i]=='X' || s[i]=='Y'|| s[i]=='Z') num[i]=9;
      i++;
   }
   for(int j=0;j<i;j++){
      t=t+num[j]+1;
   }
   printf("%d", t);
    
   return 0;
}