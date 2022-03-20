#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
char pattern1(int n);
char pattern2(int n);
char pattern3(int n);
char pattern4(int n);
char pattern5(int n);
char pattern28(int n);
char pattern30(int n);
char pattern17(int n);
char pattern31(int n);
int minimum(int row, int col, int n3, int n4);

int main()
{
    int n;
    printf("Enter the number of pattern :\n");
    scanf("%d", &n);
    patternN(n);

    return 0;
}


int minimum(int row, int col, int n3, int n4)
{
    if (row <= col && row <= n3 && row <= n4)
    {
        return row;
    }
    else if (col <= row && col <= n3 && col <= n4)
    {
        return col;
    }
    else if (n3 <= row && n3 <= col && n3 <= n4)
    {
        return n3;
    }
    else
    {
        return n4;
    }
}

char pattern31(int n)
{
    int originalN = n;
    n = (2 * n - 1);
    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < n; col++)
        {
            int n1 = n - row - 1, n2 = n - col - 1;
            int atEveryIndex = originalN - minimum(row, col, n1, n2);
            printf("%d ", atEveryIndex);
        }
        printf("\n");
    }

    return 0;
}

char pattern17(int n)
{
    for (int i = 1; i <= 2 * n; i++)
    {
        int totalColunm = i > n ? 2 * n - i : i;
        int totalSpace = n - totalColunm;

        for (int s = 0; s < totalSpace; s++)
        {
            printf("  ");
        }

        for (int j = totalColunm; j >= 1; j--)
        {
            printf("%d ", j);
        }
        for (int m = 2; m <= totalColunm; m++)
        {
            printf("%d ", m);
        }
        printf("\n");
    }

    return 0;
}

char pattern1(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}

char pattern2(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}

char pattern3(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}

char pattern4(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}

char pattern5(int n)
{
    for (int i = 0; i < 2 * n; i++)
    {
        int totalColunm = i > n ? 2 * n - i : i;
        for (int j = 0; j < totalColunm; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}

char pattern28(int n)
{
    for (int i = 0; i < 2 * n; i++)
    {
        int totalColunm = i > n ? 2 * n - i : i;
        int totalSpaces = n - totalColunm;
        for (int s = 0; s < totalSpaces; s++)
        {
            printf(" ");
        }

        for (int j = 0; j < totalColunm; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}

char pattern30(int n)
{
    for (int i = 1; i <= n; i++)
    {
        int totalSpaces = n - i;
        for (int s = 0; s < totalSpaces; s++)
        {
            printf("  ");
        }

        for (int x = i; x >= 1; x--)
        {
            printf("%d ", x);
        }

        for (int j = 2; j <= i; j++)
        {
            printf("%d ", j);
        }
        printf("\n");
    }
    return 0;
}