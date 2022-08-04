/// Largest prime factor

//The prime factors of 13195 are 5, 7, 13 and 29.
//What is the largest prime factor of the number 600851475143 ?


#include<iostream>
using namespace std;

int main(){

unsigned long long int i,target,factor=2,temp,greatest =1;
cout<<"Enter Number:";
cin>>target;

    while(target>1)
    {
        if(target%factor==0){
        target/=factor;
        }
        else factor++;

        if( factor > greatest)
        {
            greatest = factor;
        }
    }


    cout<<"Largest Factor of "<<target<<" is:"<<greatest;
return 0;
}
