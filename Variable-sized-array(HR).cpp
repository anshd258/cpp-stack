// Variable Sized Array

// Consider an -element array, , where each index  in the array contains a reference to an array of  integers (where the value of  varies from array to array). See the Explanation section below for a diagram.

// Given a[i], you must answer q queries. Each query is in the format i j, where  denotes an index in array a and j  denotes an index in the array located at a[i]. For each query, find and print the value of element j in the array at location a[i] on a new line.


#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
     int n,q,i,j,test,value,a,b;

     vector<vector<int> >row;
     vector<int> column;



    cin>>n>>q;

    for(i =0; i<n ;i++)
    { cin>>test;
    for( j=0 ; j<test ; j++)
    {
        cin>>value;
        column.push_back(value);
    }
    row.push_back(column);
    column.clear();

    }




    for( i=0 ; i<q; i++ ){

    cin>>a>>b;

    cout<<row[a][b]<<endl;


    }
    return 0;
}
