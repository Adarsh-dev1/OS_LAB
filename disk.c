#include <stdio.h>

void fcfs()
{
    printf("hi");
}

void scan()
{
    printf("hi");
}

void csacn()
{
    printf("hi");
}

int main()
{
    int req[10], n, e, lp = 1;
    printf("Enter the no of disk queue");
    scanf("%d", &n);
    printf("enter the disk queue");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &req[i]);
    }

    while (lp == 1)
    {
        printf("Enter your choice");
        scanf("%d", &e);
        switch (e)
        {
        case 1:
            fcfs();
            break;

        case 2:
            scan();
            break;

        case 3:
            csacn();
            break;

        case 4:
            lp = 0;
            break;

        default:
            printf("enter valid choice");
            break;
        }
    }
}
