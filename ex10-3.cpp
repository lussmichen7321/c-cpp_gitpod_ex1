#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
    char s[] = "hello world ! Are you in Taiwan ? ";
    int i;
    int n =sizeof(s)/sizeof(char),n_i;
    for (i = 0; s[i] != '\0'; ++i);
    n_i = i;
    printf("Length of the string: %d \n", n_i);
    printf("Length of the string n : %d \n", n);
    for (i = 0; i < n_i ; ++i){
        printf("%c",s[i]);
    }
    printf("\n");
    return 0;
}
