#include<iostream>
#include<stdio.h>
using namespace std;
int main(){
	double pi=3.14,r,g,a;
	
	printf("please input r:\n");
	scanf("%lf",&r);
	
	if( r >= 0 ){
	    g=2*r*pi;
	    printf("圓周長為: %f\n",g);
	    a=r*r*pi;
	    printf("圓面積為: %f\n",a);
	}else{
	    printf(" 請輸入大於 0 的數: \n");
	    scanf("%lf",&r);
	}
	
	return 0;
}
