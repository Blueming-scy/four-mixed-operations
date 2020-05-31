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
    if (x > y && y != 0 && (double)x / y - x / y == 0)           //������������ڳ���
        return x/y;
    else
        return -1;
}

void main()
{
    int x,y,t;    //��������������x,y�����z��������t
    char k;         //�����k��ȡ���������������¡�
    int i,sum=0;    //��Ŀ����i,�����Ŀsum
    srand(time(0)); 

	printf("Сѧ100��������������ϰ�⣡��\n"); 
    for(i=0;i<10;i++)
    {
        x=rand()%100+1;
        y=rand()%100+1;
        k=rand()%4;     //0��ӣ�1�����2��ˣ�3���

        /**< ���ݺϸ��жϼ���ʽ��ʾ */
        printf("��%d�⣺",i+1);
        switch(k)
        {
        case 0:
            if(plus(x,y)>0)    //��֤����100��
            {
            	printf("%d + %d = ",x,y);
            	scanf("%d",&t);
        		if(t==plus(x,y))
        		{
            		sum++;
            		printf("��ȷ\n");
        		}
        		else
            		printf("����\n");
			}
            else
            	i--;
            break;
        case 1:
            if(subtract(x,y)>=0)             //�����0
			{
				printf("%d - %d = ",x,y);
            	scanf("%d",&t);
        		if(t==subtract(x,y))
        		{
            		sum++;
            		printf("��ȷ\n");
        		}
        		else
            		printf("����\n");
			}
            else
            	i--;
            break;
        case 2:
            if(multiply(x,y)>=0)    //��֤��С��100
            {
            	printf("%d �� %d = ",x,y);
            	scanf("%d",&t);
        		if(t==multiply(x,y))
        		{
           			sum++;
            		printf("��ȷ\n");
        		}
        		else
            		printf("����\n");
			}
            else
            	i--;
            break;    
		case 3:
            if(divide(x,y)>0)           //������������ڳ���
            {
            	printf("%d �� %d = ",x,y);
            	scanf("%d",&t);
        		if(t==divide(x,y))
        		{
            		sum++;
            		printf("��ȷ\n");
        		}
        		else
            		printf("����\n");	
			}
            else
            	i--;
            break;
        }

    }
    /**< �����������͵÷� */
    printf("��� %d �⣬�÷֣�%d\n",sum,sum*10);
    if(sum<=6)
        printf("����϶࣬�����Ŭ����\n");
    else if(sum<=9) 
        printf("���ͣ�������ø��ã�\n");
    else
        printf("�����������") ; 
}
