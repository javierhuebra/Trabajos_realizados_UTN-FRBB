#include <stdio.h>
#include <time.h>

int main(void)
{
    int dado;
    int nroinicio = 0;
//********************************************
    srand (time(NULL));
//********************************************
    printf("Presione 1 para tirar el dado(Enter):    ");
    scanf("%d", &nroinicio);
    printf(" \n\n");
//********************************************

    dado = rand() % 6 + 1;

    switch (dado)
    {
    case 1:printf("      ********** \n");
           printf("     /       / | \n");
           printf("     ********* | \n");
           printf("     *       * | \n");
           printf("     *   X   * | \n");
           printf("     *       * | \n");
           printf("     *********/  \n\n");
    break;
    case 2:printf("      ********** \n");
           printf("     /       / | \n");
           printf("     ********* | \n");
           printf("     *     X * | \n");
           printf("     *       * | \n");
           printf("     * X     * | \n");
           printf("     *********/  \n\n");
    break;
    case 3:printf("      ********** \n");
           printf("     /       / | \n");
           printf("     ********* | \n");
           printf("     *     X * | \n");
           printf("     *   X   * | \n");
           printf("     * X     * | \n");
           printf("     *********/  \n\n");
 break;
    case 4:printf("      ********** \n");
           printf("     /       / | \n");
           printf("     ********* | \n");
           printf("     * X   X * | \n");
           printf("     *       * | \n");
           printf("     * X   X * | \n");
           printf("     *********/  \n\n");
 break;
    case 5:printf("      ********** \n");
           printf("     /       / | \n");
           printf("     ********* | \n");
           printf("     * X   X * | \n");
           printf("     *   X   * | \n");
           printf("     * X   X * | \n");
           printf("     *********/  \n\n");
    break;
    case 6:printf("      ********** \n");
           printf("     /       / | \n");
           printf("     ********* | \n");
           printf("     * X   X * | \n");
           printf("     * X   X * | \n");
           printf("     * X   X * | \n");
           printf("     *********/  \n\n");
    break;
    default: printf("ERROR \n");
    }

    return 0;
}

