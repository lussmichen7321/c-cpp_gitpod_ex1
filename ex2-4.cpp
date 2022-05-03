#include <iostream>

using namespace std;

int main()
{
    double r,a,c,pi=3.14;
    printf("輸入圓半徑 :");
    scanf("%lf",&r);
    c=2*r*pi;
    a=r*r*pi;
    printf("周長是 : %lf",c);
    printf("面積是 : %lf",a);
    return 0; 
}
