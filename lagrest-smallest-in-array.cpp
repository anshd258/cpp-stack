#include<bits/stdc++.h>
using namespace std;

int main()
{
    int great,low,n;
    printf("enter te array values");
    scanf("%d",&n);

    
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    


    great= arr[0];
    low=arr[0];
    for(int i=1;i<n;i++){
    
        if(arr[i]>great)
        great=arr[i];

        if(arr[i]<low)
        low = arr[i];
    }
   printf("greatest %d \n",great);

   printf("lowes %d",low);
}