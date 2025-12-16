#include <stdio.h>

void swap(int *x,int *y){
    int t = *x;
    *x = *y;
    *y = t;
}
void sort(int *a,int *b){
    if(a>b){
        swap(a,b);
    }
}

int main() {
    int a = 5, b = 3;
    sort(&a, &b);
    printf("a: %d\n", a);
    printf("b: %d\n", b);
    
    return 0;
}