#include <stdio.h>
int main() {
    char o;
    double first, second;
    printf("Enter first ,an operator (+, -, *, /),second : ");
    scanf("%lf %c %lf", &first,&o,&second);

    if(o == '+') {
        printf("%.1lf + %.1lf = %.1lf", first, second,first + second);
        
    }else if(o == '-'){
        printf("%.1lf - %.1lf = %.1lf", first, second, first - second);
    }else if(o == '*'){
        printf("%.1lf * %.1lf = %.1lf", first, second, first * second);
    }
    else if(o == '/'){
        printf("%.1lf / %.1lf = %.1lf", first, second, first / second);
        
    }else{
        printf("Error! operator is not correct");
    }

    return 0;
}
