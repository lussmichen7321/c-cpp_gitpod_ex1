//(a>b)or(b>a)
#include <stdio.h>
#include <stdlib.h>
int addNumbers(int a, int b);
int subNumbers(int a, int b);
int mulNumbers(int a, int b);
int divNumbers(int a, int b);// function prototype

int main()
{
    int n1,n2;
    printf("Enters two numbers: ");
    scanf("%d %d",&n1,&n2);
    printf("a+b = %d\n",addNumbers(n1, n2));
    printf("a-b = %d\n",subNumbers(n1, n2));
    printf("a*b = %d\n",mulNumbers(n1, n2));
    printf("a/b = %d\n",divNumbers(n1, n2));
    return 0;
}

int addNumbers(int a, int b)         // function definition   
{
    int result;
    result = a+b;
    return result;                     
    //return statement
}

int subNumbers(int a, int b)         // function definition   
{
    int result;
    result = (a>b)?(a-b): (b-a);
    return result;                     
    //return statement
}

int mulNumbers(int a, int b)         // function definition   
{
    int result;
    result = a*b;
    return result;                     
    //return statement
}

int divNumbers(int a, int b)         // function definition   
{
    int result;
    result = (a>b)?(a/b): (b/a);
    return result;                     
    //return statement
}
