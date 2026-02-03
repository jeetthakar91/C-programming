#include <stdio.h>

int main()
{
    int n, a = 0, b = 1, c;

    printf("Enter number of terms: ");
    scanf("%d",&n);

    printf("Fibonacci series:");

    while(c< n)
    {
        printf("%d",a);
        c = a + b;
        a = b;
        b = c;
        c++;
    }
    
}

