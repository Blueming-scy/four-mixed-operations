#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int x,y,z,t;    //定义两个操作数x,y，结果z，输入结果t
    char k;         //运算符k可取“＋、－、×、÷”
    int i,sum=0;    //题目数量i,答对数目sum
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
            while((z=x+y)>100)    //��֤����100��
            {
                x=rand()%100+1;
                y=rand()%100+1;
            }
            printf("%d + %d = ",x,y);
            break;