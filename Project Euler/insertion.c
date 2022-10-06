/*
aim: to insert an element at user defined position in liner array



*/
#include<stdio.h>

void main(){
    int var;
    printf("enter te no of elements");
    scanf("%d",&var);
    int a[var];
    int z,p;
    printf("enter te 5 array elements \n");
    for (int i = 0; i < var-1; i++)
    {
        scanf("%d",&a[i]);
    }
     printf("enter te element value to be inserted \n");
    scanf("%d",&z);
     printf("enter te element position \n");
     scanf("%d",&p);
     a[p-1]=z;
      printf("te resultant array \n");

      for (int i = 0; i < var-1; i++)
      {
        printf("%d \n",a[i]);
      }
      

    
}