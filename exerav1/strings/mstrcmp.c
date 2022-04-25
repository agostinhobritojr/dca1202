#include <stdio.h>
#include <string.h>

int mstrcmp(const char* str1, const char* str2) {
  const char* s1 = str1;
  const char* s2 = str2;
  while (*str1 != 0 && *str2 != 0) {
    if (*str1 > *str2) {
      return -1;
    } else if (*str1 < *str2) {
      return 1;
    }
    str1++;
    str2++;
  }

  if(*str1 == 0 && *str2 != 0){
    return -1;
  }
  else if(*str2 == 0 && *str1 != 0){
    return 1;
  }
  return 0;
/*  if (strlen(s1) < strlen(s2)) {
    return -1;
  } else if (strlen(s1) > strlen(s2)) {
    return 1;
  } else {
    return 0;
  }*/
}

int main(void) {
  char str1[40] = "Agosti";
  char str2[40] = "Agosti";
  printf("compara = %d\n", mstrcmp(str1, str2));
}