#include <stdio.h>
#include "selectionsort.h"
#include <sys/time.h>
#include <unistd.h>

int main()
{
        FILE *fin;
        FILE *file;
        fin = fopen("dataset1.txt" , "r");
        file = fopen("dataset2.txt" , "r");

        if(fin == NULL || file == NULL)
        {
                printf("FAIL!");
        }

        int x;
        int arr[1000000];
        int i=0;

        while(fscanf(fin,"%d",&x) != EOF)
        {
                arr[i] = x;
                i++;
        }

        char str[1000000][102];

        for(i=0;i<1000000;i++)
        {
                fscanf(file,"%s",str[i]);
        }

        struct timeval start;
        struct timeval end;

        unsigned long diff;

        gettimeofday(&start,NULL);
        selection_sort(arr);
        gettimeofday(&end,NULL);
        diff = 1000000 * (end.tv_sec - start.tv_sec) + end.tv_usec - start.tv_usec;
        printf("Sorting performance %ld us (equal %f sec)\n", diff , diff / 1000000.0);


        gettimeofday(&start,NULL);
        selection_sort_str(str);
        gettimeofday(&end,NULL);
        diff = 1000000 * (end.tv_sec - start.tv_sec) + end.tv_usec - start.tv_usec;
        printf("Sorting performance %ld us (equal %f sec)\n", diff , diff / 1000000.0);

        fclose(fin);
        fclose(file);
        return 0;
}
