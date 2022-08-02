#include<iostream>
using namespace std;

bool is_safe(int** arr,int x ,int y,int n){
    if( x<n && y<n && arr[x][y] == 1){
        return true;
    }
    return false;
}
    rat_in_maze(int** arr, int x, int y, int n, int**solArr){

    if(x==n-1 && y ==n-1){
         solArr[x][y]=1;
         return true;
    }

    if(is_safe(arr,x,y,n)){
       solArr[x][y]=1;
        if(rat_in_maze(arr,x+1,y,n,solArr)){
          ///  cout<<"change in x\n the"<<x<<" "<<y<<endl;
            return true;
        }
        if(rat_in_maze(arr,x,y+1,n,solArr)){
         /// cout<<"Change in y\n the"<<x<<" "<<y<<endl;
            return true;
        }
        solArr[x][y]=0;
        return false;
    }
    return false;
    }




main()
{
    int n,i,j;
    cin>> n;

   int** arr=new int*[n];
   for( i=0;i<n;i++){
    arr[i]=new int[n];
   }


   for( i=0 ; i<n ; i++)
    for( j=0 ; j<n ; j++)
    cin>>arr[i][j];

   int** solArr=new int*[n];
   for( i=0;i<n;i++){
    solArr[i]=new int[n];
       for( j=0 ; j<n ; j++){
        solArr[i][j] = 0;
       }
   }


    if( rat_in_maze(arr,0,0,n,solArr)){
      for( i=0 ; i<n ;i++){
        for( j=0 ; j<n ; j++){
            cout<<solArr[i][j]<<" ";}
         cout<<endl;}
}
}
