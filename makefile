all: main.c  bubblesort.c selectionsort.c insertionsort.c
        gcc main.c bubblesort.c selectionsort.c insertionsort.c -o main.out

bubblesort: main_b.c  bubblesort.c
        gcc main_b.c  bubblesort.c  -o bubblesort

selectionsort: main_s.c selectionsort.c
        gcc main_s.c selectionsort.c -o selectionsort

insertionsort: main_i.c insertionsort.c
        gcc main_i.c insertionsort.c -o insertionsort

clean:
        rm -f bubblesort selectionsort insertionsort main.out
