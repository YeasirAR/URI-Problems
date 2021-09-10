#include <stdio.h>
int main()
{
    int N;
    int i, j, a=0, b=0, c=0;
    int result1, result2, result3;
    char M[15], sum1[5], sum2[5], sum3[5];
    scanf("%d", &N);
    while(N--)
    {

        scanf("%s",M);
        for(j=0; j<13; j++)
        {
            if(j==2 || j==3)
            {
                sum1[a]=M[j];
                a++;
            }
            if(j==5 || j==6 || j==7)
            {
                sum2[b]=M[j];
                b++;
            }
            if(j==11 || j==12)
            {
                sum3[c]=M[j];
                c++;
            }
        }
        sum1[a]='\0';
        sum2[b]='\0';
        sum3[c]='\0';
        a=0;
        b=0;
        c=0;
        result1=0;
        result2=0;
        result3=0;

        for(i=0; sum1[i]!='\0'; i++)
        {
            result1=result1*10+sum1[i]-'0';
        }
        for(i=0; sum2[i]!='\0'; i++)
        {
            result2=result2*10+sum2[i]-'0';
        }
        for(i=0; sum3[i]!='\0'; i++)
        {
            result3=result3*10+sum3[i]-'0';
        }
        printf("%d\n",result1+result2+result3);
    }

    return 0;
}
