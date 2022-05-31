#include <stdio.h>

int main()
{
    int a,b,t,c;
    printf("輸入兩個數");
    scanf("%d %d",&a,&b);
    c=a+b;
    printf("輸入兩數和");
    scanf("%d",&t);
    if(c==t){
        printf("right");
    }else{
        printf("error");
    }

    return 0;
}
