#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int x,y,z,t;   
    char k;         
    int i,sum=0;    
    srand(time(0));

	printf("小学100以内四则运算练习题！！\n"); 
    for(i=0;i<10;i++)
    {
        x=rand()%100+1;
        y=rand()%100+1;
        k=rand()%4;     //0表加，1表减，2表乘，3表除

        /**< 数据合格判断及算式显示 */
        printf("第%d题：",i+1);
        switch(k)
        {
        case 0:
            while((z=x+y)>100)    //保证和在100内
            {
                x=rand()%100+1;
                y=rand()%100+1;
            }
            printf("%d + %d = ",x,y);
            break;
        case 1:
            if(x<y)             //被减数大于减数
            {
                z=x;
                x=y;
                y=z;
            }
            z=x-y;
            printf("%d - %d = ",x,y);
            break;
        case 2:
            while((z=x*y)>100)    //保证积小于100
            {
                x=rand()%100+1;
                y=rand()%100+1;
            }
            printf("%d × %d = ",x,y);
            break;    
