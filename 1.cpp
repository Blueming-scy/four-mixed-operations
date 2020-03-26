#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int x,y,z,t;    //å®šä¹‰ä¸¤ä¸ªæ“ä½œæ•°x,yï¼Œç»“æœzï¼Œè¾“å…¥ç»“æœt
    char k;         //è¿ç®—ç¬¦kå¯å–â€œï¼‹ã€ï¼ã€Ã—ã€Ã·â€
    int i,sum=0;    //é¢˜ç›®æ•°é‡i,ç­”å¯¹æ•°ç›®sum
    srand(time(0));

	printf("Ğ¡Ñ§100ÒÔÄÚËÄÔòÔËËãÁ·Ï°Ìâ£¡£¡\n"); 
    for(i=0;i<10;i++)
    {
        x=rand()%100+1;
        y=rand()%100+1;
        k=rand()%4;     //0±í¼Ó£¬1±í¼õ£¬2±í³Ë£¬3±í³ı

        /**< Êı¾İºÏ¸ñÅĞ¶Ï¼°ËãÊ½ÏÔÊ¾ */
        printf("µÚ%dÌâ£º",i+1);
        switch(k)
        {
        case 0:
            while((z=x+y)>100)    //±£Ö¤ºÍÔÚ100ÄÚ
            {
                x=rand()%100+1;
                y=rand()%100+1;
            }
            printf("%d + %d = ",x,y);
            break;