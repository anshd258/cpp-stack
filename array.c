#include<stdio.h>

int main()
{
    int b[]={1,2,3,4};
    int a[4][4];
    for(int i=0;i<4;i++)
    for(int j=0;j<4;j++)
    {
        printf("\n enter the values of array row =%d column =%d",i+1,j+1);
        scanf("%d",&a[i][j]);

    }

 return 0;
}