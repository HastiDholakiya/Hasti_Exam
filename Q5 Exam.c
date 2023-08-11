#include <stdio.h>

int main()
{
    int n1, n2, n3, max;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    max = (n1>n2)?((n1>n3)?n1:n3):((n2>n3)?n2:n3);

    printf("The maximum number is: %d\n", max);

}
