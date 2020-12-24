#include<stdio.h>
int main()
{

    int n;scanf("%d",&n);
    while(n--)
    {
        int temp,rem;
        scanf("%d",&temp);rem=(temp%12);
      {
          if((rem>=4)&&(rem<=12))
          {if((temp%6==0)||(temp%6==1))
        {(temp%6==0)?(printf("%d WS\n",(temp+1))):(printf("%d WS\n",(temp-1)));}
        else if((temp%6==2)||(temp%6==5))
        {(temp%6==5)?(printf("%d MS\n",(temp+3))):(printf("%d MS\n",(temp-3)));}
        else if((temp%6==3)||(temp%6==4))
        {(temp%6==4)?(printf("%d AS\n",(temp+5))):(printf("%d AS\n",(temp-5)));}
          }
          else
          {{if((temp%6==0)||(temp%6==1))
        {(temp%6==0)?(printf("%d WS\n",(temp+11))):(printf("%d WS\n",(temp+11)));}
         else if((temp%6==2)||(temp%6==5))
        {(temp%6==5)?(printf("%d MS\n",(temp-9))):(printf("%d MS\n",(temp+9)));}
          else if((temp%6==3)||(temp%6==4))
        {(temp%6==4)?(printf("%d AS\n",(temp-7))):(printf("%d AS\n",(temp+7)));}
          }
          }
      }
}
}
