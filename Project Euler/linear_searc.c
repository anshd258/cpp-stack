/*
aim: to get te element in array troug linear searc
*/

#include<stdio.h>

void main(){
    int var;
    printf("enter te no of elements");
    scanf("%d",var);
      int a[var];
     int find;
    printf("enter te  array elements \n");
    for (int i = 0; i < var-1; i++)
    {
        scanf("%d",&a[i]);
    }
    printf(" enter te element to find in array");
    scanf("%d",&find);
     for (int i = 0; i < var-1; i++)
     {
        if(a[i]==find){
            printf("found te value at %d",i+1);
        }
     }
     
}