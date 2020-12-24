#include<stdio.h>
#include<string.h>
/*void swapp(int *aa,int *bb)
{
    int temp;
    temp = *aa;
    *aa =*bb;
    *bb = temp;
}*/
int main()
{
    int testcases;
    scanf("%d",&testcases);
    while(testcases--)
    {
        char a[100000],b[100000];
        scanf("%s %s",a,b);
        int i,j,found = 0;
        int mama,lena = strlen(a);
        int lenb = strlen(b);
        for(i=0;i<lena;++i)
        {    if((found ==0)&&(i!=0))
             {(printf("NO\n"));
             break;}
            for(j=0;j<(lenb-i);++j)
            {//printf(" a[i]  = %c\tb[j] = %c\n",a[i],b[j]);
                if(a[i]==b[j])
                {
                  char temp = b[j];
                   b[j]=b[lenb-1-i];
                    b[lenb-1-i]= temp;
                     found = 1;
                    break;
                }
                else
                {found = 0;continue;}
            }// printf("\n");
        }if(i==lena)
        {
            (printf("YES\n"));
        }
    }
}
