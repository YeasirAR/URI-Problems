#include <stdio.h>
int main()
{
    int i,T,N[20];
    for(i=0; i<20; i++)
    {
        scanf("%d",&N[i]);
    }
    for(i=0; i<10; i++)
    {
        T=N[19-i];
        N[19-i]=N[i];
        N[i]=T;
    }
    for(i=0; i<20; i++)
    {
        printf("N[%d] = %d\n",i,N[i]);
    }
    return 0;
}
