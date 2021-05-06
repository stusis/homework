#include <stdio.h>
#include <string.h>

void insertion_sort(int arr[1000000])
{
        int i,j,key;
        for(i=1;i<1000000;i++)
        {
                key = arr[i];
                j = i - 1;
                while(j >= 0 && arr[j] > key)
                {
                        arr[j+1] = arr[j];
                        j = j - 1;
                }
                arr[j+1] = key;
        }
}

void insertion_sort_str(char str[1000000][102])
{
        int i,j,cmp;
        char key[102];

        for(i=1;i<1000000;i++)
        {
                strcpy(key,str[i]);
                j = i - 1;
                while( j >= 0 && strcmp(str[i] , key) > 0)
                {
                        strcpy(str[j+1],str[j]);
                        j = j - 1;
                }
                strcpy(str[j+1],key);
        }
}
