#include <stdio.h>
#include <string.h>
 int main()
{
  char a[1000], b[1000];
  scanf("%s %s",&a,&b);
  strcat(a, b);
  printf("%s\n", a);
 
  return 0;
}
