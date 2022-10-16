#include <stdio.h>

void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

void arrsrt(int reqc[], int n)
{

    int temp;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (reqc[i] < reqc[j])
            {
                swap(&reqc[i], &reqc[j]);
            }
        }
    }
}

void fcfs(int req[], int n)
{
    printf("the fcfs algorithm is  ");
    for (int i = 0; i < n; i++)
    {
        printf("%d", req[i]);
    }
}

void scan(int req[], int n, int head)
{
    int sz = n;
    int reqc[sz], pvt = 0;
    for (int h = 0; h < n; h++)
    {
        reqc[h] = req[h];
    }
    arrsrt(reqc, n);
    // for (int i = 0; i < n; i++)
    // {
    //     printf("%d", reqc[i]);
    // }

    for (int i = 0; i < n; i++)
    {
        if (reqc[i] > head)
        {
            pvt = i;
            // printf("%d", pvt);
            break;
        }
    }

    printf("The disk queue for SCAN algorithm is \n");

    for (int i = pvt; i < n; i++)
    {
        printf("%d \t", reqc[i]);
    }
    for (int j = pvt - 1; j >= 0; j--)
    {
        printf("%d \t", reqc[j]);
    }
    printf("\n");
    // printf("%d", pvt);
}

void cscan(int req[], int n, int head)
{
    int sz = n;
    int reqc[sz], pvt = 0;
    for (int h = 0; h < n; h++)
    {
        reqc[h] = req[h];
    }
    arrsrt(reqc, n);
    // for (int i = 0; i < n; i++)
    // {
    //     printf("%d", reqc[i]);
    // }

    for (int i = 0; i < n; i++)
    {
        if (reqc[i] > head)
        {
            pvt = i;
            // printf("%d", pvt);
            break;
        }
    }
    // 82 170 43 140 24 16 190

    printf("The disk queue for CSCAN algorithm is \n");

    for (int i = pvt; i < n; i++)
    {
        printf("%d \t", reqc[i]);
    }
    for (int j = 0; j <= pvt - 1; j++)
    {
        printf("%d \t", reqc[j]);
    }
    printf("\n");
}

int main()
{
    int req[10], n, e, lp = 1, head;
    printf("Enter the no of disk queue \n");
    scanf("%d", &n);
    printf("enter the disk queue \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &req[i]);
    }

    printf("enter the head position");
    scanf("%d", &head);

    while (lp == 1)
    {
        printf("Enter your choice \n 1) FCFS \n 2) SCAN \n 3) CSCAN \n 4) EXIT \n");
        scanf("%d", &e);
        switch (e)
        {
        case 1:
            fcfs(req, n);
            break;

        case 2:
            scan(req, n, head);
            break;

        case 3:
            cscan(req, n, head);
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
