#include <stdio.h>

int main()
{
    int a[3][3], b[3][3], c[3][3], t[3][3];
    int i, j, k;
    int min, max;

    printf("Enter elements of first 3x3 array:\n");

    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter elements of second 3x3 array:\n");

    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    min = a[0][0];
    max = a[0][0];

    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            if(a[i][j] < min)
                min = a[i][j];

            if(a[i][j] > max)
                max = a[i][j];
        }
    }

    printf("\nFirst array minimum = %d\n", min);
    printf("First array maximum = %d\n", max);

    min = b[0][0];
    max = b[0][0];

    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            if(b[i][j] < min)
                min = b[i][j];

            if(b[i][j] > max)
                max = b[i][j];
        }
    }

    printf("\nSecond array minimum = %d\n", min);
    printf("Second array maximum = %d\n", max);

    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            c[i][j] = 0;

            for(k = 0; k < 3; k++)
            {
                c[i][j] = c[i][j] + a[i][k] * b[k][j];
            }
        }
    }

    printf("\nMatrix Multiplication:\n");

    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }

    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            t[j][i] = a[i][j];
        }
    }

    printf("\nTranspose of first array:\n");

    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            printf("%d ", t[i][j]);
        }
        printf("\n");
    }

    

    printf("\nLeft diagonal of an array\n");
    for(i = 0; i < 3; i++)
    {
        
            printf("%d ", a[i][i]);
    
        printf("\n");
    }
    printf("\nRight diagonal of an array\n");
    for(i = 0; i < 3; i++)
    {
    for(j = 2-i; j >=0; j--)
    {
        
            printf("%d ", a[i][j]);
            
        printf("\n");
        break;
    }
}
    return 0;
}
//counting program that counts from 1 to 100 in increment of 5 
//counting program that counts from 100 to 1 in decrement of 10
//counting program that prompts the user for 3 inputs that determine how and what to count storing it in variable and and put it in a for loop program must display beginning number end number, increment number
//math quiz program that prompts the user for how many questions to ask, the program should congratulate the player if he gets the correct answer or alert the user of the correct answer if the answer is wrong. The math quiz program should also keep track of how many questions the player has answered correctly and incorrectly and display these running portals at the end of the quiz