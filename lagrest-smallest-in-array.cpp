#include<bits/stdc++.h>
using namespace std;

int main()
{
    int great,low;
    int arr[10]= {5,7,8,3,9,12,55,0,68,52};
    great= arr[0];
    low=arr[0];
    for(int i=1;i<10;i++){
    
        if(arr[i]>great)
        great=arr[i];

        if(arr[i]<low)
        low = arr[i];
    }
   cout<<great<<"\n";
   cout<<low;
}