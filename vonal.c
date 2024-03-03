#include <stdio.h>

void hello(int n)
{
    for (int i=0;i<n;i++)
    {
    printf("hello\n");
     }
}
void vonal(int m)
{
    for (int i=0;i<m;i++)
    {
    
    printf("-");
    
     }
     printf("\n");
}

int main()
{
    hello(3);
    vonal(100);
    hello(4);
    return 0;
}