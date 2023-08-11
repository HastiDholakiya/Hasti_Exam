#include <stdio.h>

int main() 
{
    int n;
	int factorial=1;
    int i;
    
    printf("Enter a number: ");
    scanf("%d", &n);
    
    int *ptr = &n;
    
    if (*ptr<0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        for (i=1;i<=*ptr;i++) {
            factorial *= i;
        }
        printf("Factorial of %d is %d.\n", *ptr, factorial);
    }
    
}
