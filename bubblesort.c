#include <stdio.h>
#include <string.h>

void bubble_sort(int arr[1000000])
{
        int i,j,temp;
        for(i=0;i<1000000;i++)
        {
                for(j=0;j<1000000 - 1 - i;j++)
                {
                        if(arr[j] > arr[j+1])
                        {
                                temp = arr[j+1];
                                arr[j+1] = arr[j];
                                arr[j] = temp;
                        }

                }
        }
}

void bubble_sort_str(char str[1000000][102])
{
        char temp[102];
        int i,j,cmp;

        for(i=0;i<1000000;i++)
        {
                for(j=0;j<1000000 - 1;j++)
                {
                        cmp = strcmp(str[j],str[j+1]);

                        if(cmp > 0)
                        {
                                strcpy(temp,str[j+1]);
                                strcpy(str[j+1],str[j]);
                                strcpy(str[j],temp);
                        }
                }
        }
}
