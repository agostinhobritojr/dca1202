#include<stdio.h>

int main()
{
  void fun(int, int[]);
  int arr[] = {1, 2, 3, 4};
  int i;
  fun(4, arr);
  for(i=0; i<4; i++)
    printf("%d,", arr[i]);
  return 0;
}
void fun(int n, int arr[])
{
  int *p=0;
  int i=0;
  while(i++ < n){
    p = &arr[i];
  }
  *p=0;
}
