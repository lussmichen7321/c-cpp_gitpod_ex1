#include <stdio.h>
#include <stdlib.h>
int mulNumbers(int a, int b);
int main()
{
    int n1,n2;
    printf("輸入矩形高與寬: ");
    scanf("%d %d",&n1,&n2);
    printf("矩形面積 %d\n",mulNumbers(n1, n2));
    return 0;
}
int mulNumbers(int a, int b)  
{
    int result;
    result = a*b;
    return result;                     
    
}
