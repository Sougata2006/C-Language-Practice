#include <stdio.h>
int main(){
  int r,bs,i;
  char ch,c;
  //printf("Enter the no of rows: ");
  scanf("%d",&r);
  c= 65+(r-1);
  for(i=0;i<r;i++){
    for(bs =0;bs<i;bs++){
      printf(" ");
    }
      for(ch = c-i;ch>='A';ch--){
      printf("%c",ch);
      }
      printf("\n");
    }
    return 0;
  }
