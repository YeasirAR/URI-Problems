#include <stdio.h>
#include <string.h>
int main ()
{
    int i,V,rem,count=0;
    char hex[10];
    scanf("%d",&V);
    if(V<16)
    {
        if(V>9)
        {
            printf("%c\n",V+55);

        }
        else
        {
            printf("%c\n", V+48);
        }

    }
    else
    {
        for(i=0; V>0; i++)
        {
            rem=V%16;
            V=V/16;
            if(rem>9)
            {
                if(rem==10)
                {
                    hex[i]='A';
                }
                if(rem==11)
                {
                    hex[i]='B';
                }
                if(rem==12)
                {
                    hex[i]='C';
                }
                if(rem==13)
                {
                    hex[i]='D';
                }
                if(rem==14)
                {
                    hex[i]='E';
                }
                if(rem==15)
                {
                    hex[i]='F';
                }

            }
            else
            {
                hex[i]=rem+48;
            }
            count++;

        }

        for(i=count-1; i>=0; i--)
        {
            printf("%c", hex[i]);
        }
        printf("\n");
    }
    return 0;
}
