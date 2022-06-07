#include <stdio.h>
#include <stdlib.h>
int timeNumbers(int a, int b);
int main()
{
    int n1,n2;
    printf("輸入 a 小時 b 分: ");
    scanf("%d %d",&n1,&n2);
    printf(" %d 分\n",timeNumbers(n1, n2));
    return 0;
}
int timeNumbers(int a, int b)  
{
    int result;
    result = (a*60)+b;
    return result;                     
    
}
