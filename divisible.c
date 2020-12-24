#include<stdio.h>
#include<math.h>
int main()
{
    int i=1,n;scanf("%d",&n);int middle=(n/2),mmo=(n-1),sum = 0;
    avisikta:
    while(i<=n)
    {   if(i<=middle)
        {char a[100];scanf("%s",a);
            int tempfirst=((int)(a[0]-48));
            sum += (tempfirst * pow(10,mmo));mmo--;printf("sum    %d for i = %d mmo = %d\n ",sum,i,mmo);i++;
        }
        else
        {   int temp;
            scanf("%d",temp);int remonder = (temp%10);// int tempfirst=((int)(a[0]-48));
            sum += (remonder * pow(10,mmo));mmo--;printf("sum    %d for i = %d  mmo = %d\n ",sum,i,mmo);
            i++;}
    }
}
