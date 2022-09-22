#include<bits/stdc++.h>
using namespace std;

int main()
{
    int great,low,n;
    cout<<"enter number";
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    


    great= arr[0];
    low=arr[0];
    for(int i=1;i<n;i++){
    
        if(arr[i]>great)
        great=arr[i];

        if(arr[i]<low)
        low = arr[i];
    }
   cout<<"greatest is "<<great<<"\n";
   cout<<"lowest is "<<low;
}