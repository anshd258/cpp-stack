// Vector-Erase --Easy


// You are provided with a vector of  integers. Then, you are given  queries. For the first query, you are provided with  integer, which denotes a position in the vector. The value at this position in the vector needs to be erased. The next query consists of  integers denoting a range of the positions in the vector. The elements which fall under that range should be removed. The second query is performed on the updated vector which we get after performing the first query.

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {

    int n,q,value,place,i,a,b;
    vector<int> v;

    cin>>n;
    for( i=0; i<n ;i++)
    {
        cin>>value;
        v.push_back(value);
    }

    cin>>place;
    v.erase(v.begin()+place-1);

    cin>>a>>b;
    v.erase(v.begin()+a-1, v.begin()+b-1);


cout<<v.size()<<endl;
for( i=0 ; i<v.size() ; i++)
cout<<v[i]<<" ";


    return 0;
}
