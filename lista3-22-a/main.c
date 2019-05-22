#include <stdio.h>

int main(){
  int x[]={4,5,6,1,8};
  int n=5;
  int max, i, j;
  max = x[0];
  for(i=1; i<n; i++){
    if(x[i]>max){
      max = x[i];
    }
  }
  for(i=0; i<n; i++){
    x[i] = max-x[i];
  }
  for(i=0; i<max; i++){
    for(j=0; j<n; j++){
      if(x[j] <= 0){
        printf("*");
      }
      else{
        printf(" ");
      }
      x[j]=x[j]-1;
    }
    printf("\n");
  }
  return 0;
}
