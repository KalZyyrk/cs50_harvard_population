#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int start_size;
    // TODO: Prompt for start size
    do{
        printf("Enter the starting population size: ");
        scanf("%d", &start_size);
        if (start_size < 9) printf("Please enter a value above or equals at 9\n");
    } while (start_size < 9);

    // TODO: Prompt for end size

    // TODO: Calculate number of years until we reach threshold

    // TODO: Print number of years
}
