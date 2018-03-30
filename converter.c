#include<stdio.h>
#include<string.h>
int main()
{
        FILE *fp,*fp1;
        int done=0,choice,choice1,t,c;
        float value,value1,base,base1,val,val1;
        while(!done)
        {
                t=0;
                printf("Enter the base currency\n");
                printf("1.Rupee\t2.Dollar\t3.Pounds\t4.Yen\t5.Yuan\t6.Bitcoin\t7.Ethereaum\n");
                scanf("%d",&choice);
                printf("Enter the comparing currency\n");
                printf("1.Rupee\t2.Dollar\t3.Pounds\t4.Yen\t5.Yuan\t6.Bitcoin\t7.Ethereaum\n");
                scanf("%d",&choice1);
                fp=fopen("dollar.txt","r");
                while(!feof(fp))
                {
                        t++;
                        fscanf(fp,"%f\n",&val);
                        if(t==choice)
                        {
                                value=val;
                                break;
                        }
                }
                t=0;
                fclose(fp);
                fp1=fopen("dollar.txt","r");
                while(!feof(fp1))
                {
                        t++;
                        fscanf(fp1,"%f\n",&val1);
                        if(t==choice1)
                        {
                                value1=val1;
                                break;
                        }
                }
                fclose(fp1);
                printf("Enter the base value\n");
                scanf("%f",&base);
                base1=(base)*((value1)/value);
                printf("The value of comparative currency is %f\n",base1);
                printf("Do you want to continue?(1 for yes,0 for no)\n");
                scanf("%d",&c);
                if(c==1)
                        done=0;
                else
                        done=1;
                }
        return 0;
        }
