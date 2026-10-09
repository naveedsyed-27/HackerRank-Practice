#include <stdio.h>

int main() {
    int n;    scanf("%d", &n);
    
    int sum = 0;
    
    // Extract each digit using modulo (%) and integer division (/)
    while (n > 0) {
        sum += n % 10; // Extract the last digit and add to sum
        n /= 10;       // Remove the last digit from n
    }
    
    printf("%d\n", sum);
    
    return 0;
}
