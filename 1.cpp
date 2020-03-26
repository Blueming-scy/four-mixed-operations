#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int x,y,z,t;    //定义两个操作数x,y，结果z，输入结果t
    char k;         //运算符k可取“＋、－、×、÷”
    int i,sum=0;    //题目数量i,答对数目sum
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
		case 3:
            if(x<y)           //被除数必须大于除数
            {
                z=x;
                x=y;
                y=z;
            }
            x=(x/y)*y;      //保证整除
            z=x/y;
            printf("%d ÷ %d = ",x,y);
            break;
        }
        /**< 输入你的计算结果 */
        scanf("%d",&t);
        if(z==t)
        {
            sum++;
            printf("正确\n");
        }
        else
            printf("错误\n");

    }