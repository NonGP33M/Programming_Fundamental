#include <stdio.h>
int main()
{
    int in;
    scanf("%d", &in);
 
    if((in ^ 1) == (in + 1))
          printf("EVEN");
    else
        printf("ODD");
}