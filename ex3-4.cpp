#include <stdio.h>

int main()
{
    int x,a,b,c,d,e,f,g,h,i,j;
    
    x=5;
    x += 3 ;
    a=x;
    printf("x += 3 : %d\n",a);
    
    x=5;
    x -= 3 ;
    b=x;
    printf("x -= 3 : %d\n",b);
    
    x=5;
    x *= 3 ;
    c=x;
    printf("x *= 3 : %d\n",c);
    
    x=5;
    x /= 3 ;
    d=x;
    printf("x /= 3 : %d\n",d);
    
    x=5;
    x %= 3 ;
    e=x;
    printf("x 0/0 = 3 : %d\n",e);
    
    x=5;
    x &= 3 ;
    f=x;
    printf("x &= 3 : %d\n",f);
    
    x=5;
    x |= 3 ;
    g=x;
    printf("x |= 3 : %d\n",g);
    
    x=5;
    x ^= 3 ;
    h=x;
    printf("x ^= 3 : %d\n",h);
    
    x=5;
    x >>= 3 ;
    i=x;
    printf("x >>= 3 : %d\n",i);
    
    x=5;
    x <<= 3 ;
    j=x;
    printf("x <<= 3 : %d\n",j);
    

    return 0;
}
