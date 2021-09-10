#include <stdio.h>
int main ()
{
    int i,j,count=0;
    char O;
    float sum=0, M[12][12];
    scanf(" %c",&O);
    for(i=0; i<12; i++)
    {
        for(j=0; j<12; j++)
        {
            scanf("%f", &M[i][j]);
        }
    }
    if(O=='S')
    {
        for(i=1; i<12; i++)
        {
            for(j=0; j<i; j++)
            {
                sum=sum+M[i][j];
            }
        }

    }
    if(O=='M')
    {
        for(i=1; i<12; i++)
        {
            for(j=0; j<i; j++)
            {
                sum=sum+M[i][j];
                count++;
            }
        }
        sum=sum/count;

    }
    printf("%.1f\n",sum);


    return 0;
}
