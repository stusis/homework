#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
        srand((unsigned int)(time(NULL)));

        int i,j;
        char arr[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";

        for(i=0;i<1000000;i++)
        {
                for(j=0;j<100;j++)
                {
                        printf("%c",arr[rand() % 52]);
                }
                printf("\n");
        }
}
