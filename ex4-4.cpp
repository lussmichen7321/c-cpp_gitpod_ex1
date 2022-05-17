#include <stdio.h>
#include<stdlib.h>

int main(void)
{
    int y;
    scanf("%d",&y);
    if(!(y%4)){
        if(!(y%100)&&y%400)
            printf("%d 年不為閏年\n",y);
        else
            printf("%d 年為閏年\n",y);
    }else
        printf("%d 年不為閏年\n",y);

    return 0;
}
