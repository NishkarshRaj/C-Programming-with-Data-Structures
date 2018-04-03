#include <stdio.h>
int main() {
    int i,k;
    printf("Enter two numbers");
    scanf("%d%d",&i,&k);
    printf(" value before swapping\n i=%d\n k=%d\n ", i, k);

    i = i ^ k;
    k = i ^ k;
    i = i ^ k;
    printf("value after swapping\n i=%d\n k=%d\n ", i, k);

    return 0;
}
