#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
        srand(time(0));
        int i;
        for(i=0;i<1000000;i++)
        {
                printf("%d\n",rand());
        }
}
