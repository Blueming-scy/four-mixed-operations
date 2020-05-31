#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int plus(int x, int y)
{
    if (x+y<= 100)
        return x+y;
    else
        return -1;
}

int subtract(int x, int y)
{
    if (x-y > 0)
        return x-y;
    else
        return -1;
}

int multiply(int x, int y)
{
    if (x*y < 100)
        return x*y;
    else
        return -1;
}

int divide(int x, int y)
{
    if (x > y && y != 0 && (double)x / y - x / y == 0)           //被除数必须大于除数
        return x/y;
    else
        return -1;
}

void main()
{
    int x,y,t;    //定义两个操作数x,y，结果z，输入结果t
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
            if(plus(x,y)>0)    //保证和在100内
            {
            	printf("%d + %d = ",x,y);
            	scanf("%d",&t);
        		if(t==plus(x,y))
        		{
            		sum++;
            		printf("正确\n");
        		}
        		else
            		printf("错误\n");
			}
            else
            	i--;
            break;
        case 1:
            if(subtract(x,y)>=0)             //差大于0
			{
				printf("%d - %d = ",x,y);
            	scanf("%d",&t);
        		if(t==subtract(x,y))
        		{
            		sum++;
            		printf("正确\n");
        		}
        		else
            		printf("错误\n");
			}
            else
            	i--;
            break;
        case 2:
            if(multiply(x,y)>=0)    //保证积小于100
            {
            	printf("%d × %d = ",x,y);
            	scanf("%d",&t);
        		if(t==multiply(x,y))
        		{
           			sum++;
            		printf("正确\n");
        		}
        		else
            		printf("错误\n");
			}
            else
            	i--;
            break;    
		case 3:
            if(divide(x,y)>0)           //被除数必须大于除数
            {
            	printf("%d ÷ %d = ",x,y);
            	scanf("%d",&t);
        		if(t==divide(x,y))
        		{
            		sum++;
            		printf("正确\n");
        		}
        		else
            		printf("错误\n");	
			}
            else
            	i--;
            break;
        }

    }
    /**< 输出答对题数和得分 */
    printf("答对 %d 题，得分：%d\n",sum,sum*10);
    if(sum<=6)
        printf("错误较多，请继续努力！\n");
    else if(sum<=9) 
        printf("加油，你会做得更好！\n");
    else
        printf("你真棒！！！") ; 
}
