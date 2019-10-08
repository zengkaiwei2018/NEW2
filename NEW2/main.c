#include<stdio.h>
int main()
{
    int i=0xAABBCCDD;
    char *p;
    int *q;
    char s[8]="AAAAAAA";
    char a[8]="BBBBBBBB";
    p=s;
    printf("&i=%x &p=%x &q=%x\n",&i,&p,&q);
    printf("s=%x a=%x\n",s,a);
    printf("%d \n%d\n",sizeof(i),sizeof(q));
    printf("s=%s\na=%s\n",s,a);
    return 0;
    
}
