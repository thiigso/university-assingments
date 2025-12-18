
#include <stdio.h> 
 
 
void tratastr(char *str){ 
 
  while (*str){ 
    if(*str == ' '){ 
      int i = 1; 
      while (*(str + i)== ' ') i++; 
      printf("%s",str);
      *str = *(str + i); 
      if (*str)  *(str + i) = ' '; 
      else break; 
    } 
    str++; 
  } 
} 
 
 
void main(){ 
  char str[100]; 
 
  fgets(str, sizeof(str), stdin); 
 
  printf ("\n%s", str); 
  tratastr(str); 
  printf ("\n%s", str); 
 
} 