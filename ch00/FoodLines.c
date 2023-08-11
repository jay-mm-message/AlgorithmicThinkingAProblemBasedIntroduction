// LKP '18 Contest 2 P1 - Food Lines
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define MAX_LINES 100

void join_people(int ptr[], int ptr2[], int n, int m)
{
    int ptr2_pos = 0;
    while ( m > 0 )
    {
        /* code */
        int min_index = -1;
        int min_value = ptr[0];
        bool find_min = false;
        int count = n;

        for (size_t i = 0; i < count; i++)
        {
            /* code */
            if (min_value > ptr[i]) {
                min_value = ptr[i];
                min_index = i;
                find_min = true;
            }

        }

        if (!find_min) {
            min_index = 0;
            find_min = false;
        }
        ptr2[ptr2_pos] = ptr[min_index];
        ptr2_pos = ptr2_pos + 1;
        ptr[min_index] = ptr[min_index] + 1;

        m = m - 1;
    } // while

}

void show_result(int ptr2[], int join_m) 
{
    int count = join_m;
    for (size_t i = 0; i < count; i++)
    {
        /* code */
        int result = ptr2[i];
        printf("%d\n", result);
    }
    printf("\n");
}

int main(void) {
    int n = 0, m = 0;
    scanf("%d %d", &n, &m);
  
    int ptr[MAX_LINES];
    int ptr2[MAX_LINES];

    int count = n;
    for (size_t i = 0; i < count; i++)
    {
        /* code */
        scanf("%d", ptr + i);
    }

//void join_people(int ptr[], int ptr2[], int n, int m)
    join_people(ptr, ptr2, n, m);
//void show_result(int ptr2[], int join_m)
    show_result(ptr2, m);

    printf("\n");

    return 0;
}