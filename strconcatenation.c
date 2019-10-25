#include <stdio.h>
#include <string.h>
 int main()
{
  char a[1000], b[1000],c[1000],d[1000], i,j;
  scanf("%s %s",&a,&b);
for(i=0;a[i]!= '\0',b[i]!= '\0';i++)
{
c[i]=a[i];
d[i]=b[i];
}
  printf("string concatenation using strcat() function \n");
  strcat(c, d);
  printf("%s\n", c);
 printf("String concatenation without using strcat() function\n"); 
     for(i = 0; a[i] != '\0'; ++i);
    for(j = 0; b[j] != '\0'; ++j, ++i)
    {
        a[i] = b[j];
    }
    a[i] = '\0';
    printf("%s\n", a);
  return 0;
}
  
