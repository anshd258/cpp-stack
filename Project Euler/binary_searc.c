/*
aim: to find te element using binary searc
*/

#include<stdio.h>


int bineary_searc(int arr[],int x,int low,int ig){
    int mid ;
    mid =(ig+low)/2;
    while (ig-low >1)
    {
        if(x>mid){  
            low=mid+1;
        }
        else{
            ig=mid;
        }
        
    }
    return low;
    
    

}

void main(){
    int var,find;
    printf("enter te no of elements");
    scanf("%d",&var);
     int a[var];
    
    printf("enter te array elements \n");
    for (int i = 0; i < var; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("please enter te element to find \n");
    scanf("%d",&find);
    int result = bineary_searc(a,find,0,var-1);
    printf("found value at %d \n",result);

    

}