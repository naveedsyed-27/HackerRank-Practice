#include <stdio.h>

void update(int *a,int *b) {
    // Complete this function 
    int sumA = *a;  
    int sumB = *b;
    
    *a = sumA + sumB;
    *b = abs(sumB - sumA);
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);
  

    return 0;
}
