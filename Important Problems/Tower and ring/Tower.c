#include<stdio.h>
int move( int,char,char,char);
main()
{
    int n;
    scanf("%d",&n);
    move(n ,'A','B','C');
}

move( int n, char source, char dest, char spare)
{
    if( n==1)
    {
        printf("\nMove from %c to %c\n",source, dest);
    }
    else
    {
        printf("%c ,%c ,%c\n",source,dest,spare);

        move(n-1,source,spare,dest);
             printf("%c ,%c ,%c\n",source,dest,spare);
        move(1,source,dest,spare);
             printf("%c ,%c ,%c\n",source,dest,spare);
        move(n-1,spare,dest,source);

    }
}

