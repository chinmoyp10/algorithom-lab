#include<stdio.h>
 int main()
{
    int i,j,p;

    int m,n,row,col;
    int num,student;


     printf("row= ");
     scanf("%d",&row);
     printf("column= ");
     scanf("%d",&col);
     int A[row+1][col+1];
     printf("student= ");
     scanf("%d",&student);
    for(i=1;i<=row;i++)
    {
        for(j=1;j<=col;j++)
        {
            A[i][j]=0;

        }
    }


     for(p=1;p<=student;p++)
    {
        printf("m= ");
        scanf("%d",&m);
        printf("n= ");
        scanf("%d",&n);
        printf("num =");
        scanf("%d",&num);

        A[m][n]=num;
    }
    for(i=1;i<=row;i++)
    {
        for(j=1;j<=col;j++)
        {
            printf("%d",A[i][j]);
        }

        printf("\n");
    }
    return 0;
}
