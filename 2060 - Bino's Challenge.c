#include <stdio.h>
int main()
{
    int i,N,M[1000],P[4]={0};
    scanf("%d", &N);
    for(i=0; i<N; i++)
    {
        scanf("%d", &M[i]);
    }
    for(i=0; i<N; i++)
    {
        if(M[i]%2==0)
        {
            P[0]++;
        }
        if(M[i]%3==0)
        {
            P[1]++;
        }
        if(M[i]%4==0)
        {
            P[2]++;
        }
        if(M[i]%5==0)
        {
            P[3]++;
        }
    }
    for(i=0; i<4; i++)
    {
        printf("%d Multiplo(s) de %d\n",P[i],i+2);
    }

    return 0;
}
