#include <stdio.h>

int main()
{
    int x,y,a,b,c,d,e,f,g,h;
    
    x=7;y=2;
    a = x%y;
    printf("x 0/0 y = %d\n\n",a);
    
    x=16;
    ++x;
    b=x;
    printf("++x = %d\n\n",b);
    
    x=16;
    x++;
    c=x;
    printf("x++ = %d\n\n",c);
    
    x=16;
    --x;
    d=x;
    printf("--x = %d\n\n",d);
    
    x=16;
    x--;
    e=x;
    printf("x-- = %d\n\n",e);
    
    x=16;
    x>>1;
    f=x;
    printf("x>>1 = %d\n\n",f);
    
    x=16;
    x>>2;
    g=x;
    printf("x>>2 = %d\n\n",g);
    
    x=16;
    x<<1;
    h=x;
    printf("x<<1= %d\n\n",h);
    
    return 0;
}
