#include <iostream>
#include <stdio.h>
int main(void)
{
    int n,i; 
    scanf("%d",&n);
    
    printf(" %d  factorial number are : \n", n);
    for(int i=1; i<=n; i++ ){
        if( (n % i) == 0 ){
            
            printf (" %d , ", i);
        }
    }
    return 0;
}
