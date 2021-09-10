#include <stdio.h>
int main ()
{
    int i,j,C;
    char T;
    float sum=0, M[12][12];
    scanf("%d",&C);
    scanf(" %c",&T);
    for(i=0; i<12; i++)
    {
        for(j=0; j<12; j++)
        {
            scanf("%f", &M[i][j]);
        }
    }
    if(T=='S')
    {
        for(i=0; i<12; i++)
        {
            sum=sum+M[i][C];
        }

    }
    if(T=='M')
    {
        for(i=0; i<12; i++)
        {
            sum=sum+M[i][C];
        }
        sum=sum/12;

    }
    printf("%.1f\n",sum);


    return 0;
}
