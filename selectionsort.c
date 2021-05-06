#include <stdio.h>
#include <string.h>

void selection_sort(int arr[1000000])
{
        int i,j,min,temp;
        for(i=0;i<1000000 - 1;i++)
        {
                min = i;
                for(j=i+1;j<1000000;j++)
                {
                        if(arr[j] < arr[min])
                        {
                                min = j;
                        }
                }
                if(min != i)
                {
                        temp = arr[min];
                        arr[min] = arr[i];
                        arr[i] = temp;
                }
        }
}

void selection_sort_str(char str[1000000][102])
{
        int i,j,min_idx,cmp;
        char key[102];

        for(i=0;i<1000000 - 1;i++)
        {
                min_idx = i;
                strcpy(key,str[i]);
                for(j=i+1;j<1000000;j++)
                {
                        cmp =  strcmp(key,str[j]);
                        if(cmp > 0)
                        {
                                strcpy(key,str[j]);
                                min_idx = j;
                        }
                }

                if(min_idx != i)
                {
                        char temp[102];
                        strcpy(temp,str[i]);
                        strcpy(str[i],str[min_idx]);
                        strcpy(str[min_idx],temp);
                }
        }
}
