#include<stdio.h>
#include<string.h>
int main()
{
    int test;
    scanf("%d",&test);
    while(test --)
    {
        char a[10],b[10];
        int i,j,k,l,zero = 0;
        scanf("%s",a);
        scanf("%s",b);
        int lena =strlen(a);
        int lenb=strlen(b);
        for(i=0;i<lena;++i)
        {   for(j=0;j<lenb;++j)
                {if(a[i]==b[j])
                {
                    a[i]=0;
                    b[j]=0;
                    zero+=2;
                    break;
                }
                else
                {
                    continue;

                }
            }
        }
        printf("%d \n",(lena+lenb -zero));
    }
}
