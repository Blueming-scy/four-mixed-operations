#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int x,y,z,t;   
    char k;         
    int i,sum=0;    
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
        case 1:
            if(x<y)             //���������ڼ���
            {
                z=x;
                x=y;
                y=z;
            }
            z=x-y;
            printf("%d - %d = ",x,y);
            break;
        case 2:
            while((z=x*y)>100)    //��֤��С��100
            {
                x=rand()%100+1;
                y=rand()%100+1;
            }
            printf("%d �� %d = ",x,y);
            break;    
