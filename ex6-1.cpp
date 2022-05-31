#include <stdio.h>

int main()
{
    int a,b;
    printf("輸入你和你朋友的年齡");
    
    scanf("%d %d",&a,&b);
    
    if(a>b){
        printf("最大年齡 : %d\n",a);
    }else{
        printf("最大年齡 : %d\n",b);
    }
    
    return 0;
}
