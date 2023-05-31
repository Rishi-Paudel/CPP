// 1_1.c
// Q. Write a program to find the average expenditure of a company for each month of each year, each year and average over the range of years specified. Use arrays to construct a table, display the table of expenditure and find the sum and average.

#include <stdio.h>

void main()
{
    float expenditure[10][12];
    float startYear;
    float endYear;
    float yearlyTotalExp[10];
    float yearlyAvgExp[10];
    float totalYearlyTotalExp = 0;
    float avgYearlyTotalExp = 0;
    float tempYear = 0;
    char months[12][20] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};

    // Getting the start and final Years
    printf("Enter the start year: ");
    scanf("%f", &startYear);
    tempYear = startYear;
    printf("Enter the last year: ");
    scanf("%f", &endYear);

    for (int i = 0; i <= (int)(endYear - startYear); i++)
    {
        printf("\n\nFor Year %d,", (int)tempYear);
        printf("\n");
        yearlyTotalExp[i] = 0;
        for (int j = 0; j < 12; j++)
        {
            printf("Enter the expenditure of Month %s: ", months[j]);
            scanf("%f", &expenditure[i][j]);
            yearlyTotalExp[i] += expenditure[i][j];
        }
        yearlyAvgExp[i] = yearlyTotalExp[i] / (float)12;
        totalYearlyTotalExp += yearlyTotalExp[i];
        tempYear++;
    }
    avgYearlyTotalExp = totalYearlyTotalExp / (float)(endYear - startYear + 1);

    // Displaying Expenditure Table
    printf("\nExpenditure Table:\n");
    for (int j = 0; j < 12; j++)
    {
        printf("%s", months[j]);
        printf("\t");
    }
    printf("Total \tAverage");
    printf("\n");
    for (int i = 0; i <= (int)(endYear - startYear); i++)
    {
        for (int j = 0; j < 12; j++)
        {
            printf("%.2f", expenditure[i][j]);
            printf("\t");
        }
        printf("%.2f\t%.2f", yearlyTotalExp[i], yearlyAvgExp[i]);
        printf("\n");
    }
    printf("\nTotal yearly average: %.2f\n", avgYearlyTotalExp);
    printf("Total monthly average: %.2f\n", avgYearlyTotalExp / (float)12);
    printf("\n");
}