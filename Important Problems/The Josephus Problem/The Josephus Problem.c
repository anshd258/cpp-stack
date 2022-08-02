#include<stdio.h>
#include<math.h>
main()
{int testcase;
printf("\nEnter the number of testcases:");
scanf("%d",&testcase);
while(testcase--)
 {

    int temp,i,j,safeSeat=1,n,power=0;
    printf("\nEnter the total number of players:");
    scanf("%d",&n);

     if( n == 1 )///Base case
     {
         printf("\nThe safe seat is:%d",safeSeat);
     }
     else
     {
         while( pow(2,power) <= n )
         {
             ++power;
             if( pow(2,power) == n) ///For the power of two
              {
                   printf("\nThe safe seat is:%d",safeSeat);
              }
         }
        if( pow(2,power-1) < n) ///Remaining cases
         {
            temp = n - pow(2,power-1);
            safeSeat= (2*temp) + 1;
            printf("\nThe safe seat is:%d",safeSeat);
        }
     }

 }
}
