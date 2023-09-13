#include <stdio.h>
#include <stdbool.h>

int ehPar(int a) {
    bool z = false;
    if ((a%2) == 0) {
        printf("true");
    } else{
        printf("false");
    }
}


int main(){
    int a = 0;
    scanf("%d",&a);
    ehPar(a);
    return 0;
}


