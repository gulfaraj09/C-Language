//# C-Language
//all type of solved c problem
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int chars, i = 0;
    char *ptr;
    char a, b;
    while (i < 3)
    {
        printf("Employee %d : Enter the number of charcters in your employee id :\n", i);
        scanf("%d", &chars);
        getchar();
        printf("Enter the value of a \n");
        scanf("%c", &a);
        getchar();
        printf("Enter the value of b \n");
        scanf("%c", &b);
        ptr = (char *)malloc((chars + 1) * sizeof(char));
        printf("Enter your Employe Id\n");
        scanf("%s", ptr);
        printf("Your employee id is %s\n", ptr);
        free(ptr);
        i = i + 1;
    }

    return 0;
}
