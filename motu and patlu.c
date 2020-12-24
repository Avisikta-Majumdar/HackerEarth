#include<stdio.h>
int main()
{    int a[10],i,no,pos,ch,value,size;
    printf("Enter the sizes:-  ");
    scanf("%d",&size);
    printf("Enter the elements of the array: -");
    for(i=0;i<size;++i)
       {scanf("%d",&a[i]);}
    aaavvv:
   while(ch!=0){
        printf("Enter ur choice :\n 1. INSERT\t2.DELETE\n\n1)begining\t2)end\t3)any pos\n\nENTER UR CHOICE::");
        scanf("%d",&ch);
        switch(ch)
        {
            case 11:
            {
            scanf("%d",&value);
            ++size;
            for(i=(size-1);i>=0;--i)
            {a[i]=a[i-1];}
                a[0]= value;
                for(i=0;i<size;++i)
                    printf("%d ",a[i]);
                printf("\n");
                goto aaavvv;
            }
            case 12:
                {
                   scanf("%d",&value);
                   a[size]=value;
                   ++size;
                   for(i=0;i<size;++i)
                        printf("%d ",a[i]);
                    printf("\n");
                   goto aaavvv;

                }
            case 13:
                {
                    scanf("%d %d",&value,&pos);
                    for(i=(size-1);i>=pos-1;--i)
                    {a[i+1]=a[i];}
                    a[pos-1]=value;
                    ++size;
                    for(i=0;i<size;++i)
                        printf("%d ",a[i]);
                    printf("\n");
                    goto aaavvv;
                }
            case 21:
                {
                for(i=0;i<size-1;++i)
                {
                    a[i]=a[1+i];
                }--size;
                for(i=0;i<size;++i)
                    printf("%d ",a[i]);
                printf("\n");
                goto aaavvv;
                }
            case 22:
                {
                    a[size-1] = '\0';
                    --size;
                for(i=0;i<size;++i)
                    printf("%d ",a[i]);
                printf("\n");
                goto aaavvv;

                }
            case 23:
                {
                    scanf("%d",&pos);
                for(i=(pos-1);i<(size-1);++i)
                {
                    a[i]=a[i+1];
                }
                --size;
                for(i=0;i<size;++i)
                    printf("%d ",a[i]);
                printf("\n");
                goto aaavvv;
                }
        }

            }
}
