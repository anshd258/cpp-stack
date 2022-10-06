#include<stdio.h>

void main(){
 int row,col,counter=0;
 int arr[100][100];
 printf("enter te no of rows \n");
 scanf("%d",&row);
  printf("enter te no of columns \n");
  scanf(" %d",&col);
  for (int i = 0; i < row; i++)
  {
     printf("enter te values in row %d \n",i);
    for (int j = 0; j < col; j++)
    {
       scanf("%d",&arr[i][j]);
    }
    
  }
  
    for (int i = 0; i < row; i++)
  {
     
    for (int j = 0; j < col; j++)
    {
       if(arr[i][j]!=0)
       {
        counter+=1;
       }
    }
    
  }
   printf("no of non zero elements %d\n",counter);
   int srr[100][3];
  srr[0][0]=row;
  srr[0][1]=col;
  srr[0][2]=counter;
  int m=1;
   for (int i = 0; i < row; i++)
  {
     
    for (int j = 0; j < col; j++)
    {
       if(arr[i][j]!=0&&m!=counter+1)
       {
        srr[m][0]=i;
        srr[m][1]=j;
        srr[m][2]=arr[i][j];
        m++;
       }
    }
    
  }
    for (int i = 0; i <=counter; i++)
  {
     printf("\n");
    for (int j = 0; j < 3; j++)
    {
       printf("%d",srr[i][j]);
    }
    
  }
    
}