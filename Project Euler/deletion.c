/*
  aim : to delete and element from user defined position in linear array
*/
#include<stdio.h>

void main(){
    int var;
    printf("enter te no of elements");
    scanf("%d",&var);
    int a[var];
    int p;
    printf("enter te 5 array elements \n");
    for (int i = 0; i < var; i++)
    {
        scanf("%d",&a[i]);
    }
     
     printf("enter te element position \n");
     scanf("%d",&p);
     for (int i = p-1; i < var; i++)
     {
        a[i]=a[i+1];

     }
     
      printf("te resultant array \n");

      for (int i = 0; i < var-1; i++)
      {
        printf("%d \n",a[i]);
      }
      

    
}