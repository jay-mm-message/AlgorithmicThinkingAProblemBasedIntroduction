// LKP '18 Contest 2 P1 - Food Lines
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define MAX_LINES 100

int short_line(int line[], int n) 
{
    int min = 0;
    int count = n;
    for (size_t i = 0; i < count; i++)
    {
        /* code */
        if (line[i] < line[min])
        {
            /* code */
            min = i;
        } 
    }
    return min;
}

void solve(int line[], int n)
{
    int short_loc = short_line(line, n);
    int short_value = line[short_loc];
    printf("%d\n", short_value);
    
    line[short_loc] = line[short_loc] + 1;
}

int main(void) {
    int n = 0, m = 0;
    scanf("%d %d", &n, &m);
  
    int line[MAX_LINES];

    int count = n;
    for (size_t i = 0; i < count; i++)
    {
        /* code */
        scanf("%d", &line[i]);
    }
    
    count = m;
    for (size_t i = 0; i < count; i++)
    {
        /* code */
        solve(line, n);
    }

    printf("\n");
    return 0;
}