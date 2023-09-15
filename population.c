#include <stdio.h>

int main(void)
{
    int start_size;
    int finish_size;
    int year = 0;
    // get the starting size of the population
    do{
        printf("Enter the starting population size: ");
        scanf("%d", &start_size);
        if (start_size < 9 ) printf("Please enter a value above or equals at 9\n");
    } while (start_size < 9);

    printf("Start size: %d\n", start_size);

    // get the finish size of the population
    do{
        printf("Enter the finish population size: ");
        scanf("%d", &finish_size);
        if (start_size > finish_size ) printf("Please enter a value above of the starting size: %d\n", start_size);
    } while (start_size > finish_size );

    printf("End size: %d\n", finish_size);

    // Calculate the number of year that needed to reach the ending population size
    do {
        start_size = start_size + (start_size / 3) - (start_size / 4);

        year++;
    } while (start_size < finish_size );
    // TODO: Print number of years

    printf("Year: %d\n", year);
}
