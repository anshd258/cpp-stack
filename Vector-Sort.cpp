// Vector-Sort - Easy


// You are given N integers.Sort the N  integers and print the sorted order.
// Store the N integers in a vector.Vectors are sequence containers representing arrays that can change in size.



#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n,value,i;
    cin>>n;

    vector<int> sort_vector;

    for( i = 0 ; i < n ; i++)
    {
        cin>>value;
        sort_vector.push_back(value);
    }

    sort(sort_vector.begin(), sort_vector.end()); //Will Sort the vector

    for( i = 0 ; i < n ; i++){
        cout<<sort_vector[i]<<" ";
    }
    return 0;
}
