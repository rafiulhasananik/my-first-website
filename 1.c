#include<stdio.h>
int main()
{
   char name[100];
   printf("input any char : ");
   gets(name);

   for(int i=0;name[i] !='\0';i++){
    printf("%c",name[i] + i);

   }
   return 0;
}
