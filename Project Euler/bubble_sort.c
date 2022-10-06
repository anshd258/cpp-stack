/*

aim : to sort te given array 

*/



#include<stdio.h>

void bubble(int arr[],int n){
    int i,j;
    
    for (i = 0; i < n; i++)
    {
        for ( j = 0; j < n-i; j++)
        {
        
            
            if(arr[j]>arr[j+1])
            {
                int temp = arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
        
    }
    
}

void main(){
    int var;
    printf("enter te no of elements");
    scanf("%d",&var);
     int a[var];
    
    printf("enter te array elements \n");
    for (int i = 0; i < var; i++)
    {
        scanf("%d",&a[i]);
    }
    bubble(a,var);
    printf("sorted array \n");

     for (int i = 0; i < var; i++)
      {
        printf("%d \n",a[i]);
      }

}