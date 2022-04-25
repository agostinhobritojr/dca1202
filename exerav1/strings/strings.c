#include <stdio.h>
#include <string.h>

char *mstrcpy(char *dest, const char *src) {
  char *ret;
  ret = dest;
  while (*src != 0) {
    *dest = *src;
    dest++; 
    src++;
  }
  *dest = 0;
  return ret;
}

int main(void) {
  char src[40], dst[40];
  int i;
  mstrcpy(src, "Ag0stinho");
//  src[3]=0; src[3]=99;
  puts(src);
  printf("addr = %p\n", src);
  printf("%s\n", src);
  for(i=0; i<strlen(src); i++){
    printf("%c: %d\n", src[i], src[i]);
  }

}









