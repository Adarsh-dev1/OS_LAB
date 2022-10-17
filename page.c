#include <stdio.h>
#include <stdlib.h>
// int findMinIndex(int *arr, int n)
// {
//     int min = arr[0], minIndex = 0;
//     for (int i = 1; i < n; i++)
//     {
//         if (arr[i] < min)
//         {
//             min = arr[1];
//             minIndex = i;
//         }
//     }
//     return minIndex;
// }
// void FIFO(int *mainmemory, int mSize, int *requests, int reqSize)
// {
//     int count = 0, flag = 0, hit = 0, miss = 0;

//     for (int i = 0; i < reqSize; i++)
//     {
//         flag = 0;
//         for (int j = 0; j < count; j++)
//         {
//             if (mainmemory[j] == requests[i])
//             {
//                 hit++;
//                 flag = 1;
//                 break;
//             }
//         }
//         if (!flag)
//         {
//             if (count < mSize)
//             {
//                 mainmemory[count++] = requests[i];
//             }
//             else
//             {
//                 for (int j = 1; j < mSize; j++)
//                     mainmemory[j - 1] = mainmemory[j];
//                 mainmemory[mSize - 1] = requests[i];
//             }
//             miss++;
//         }
//     }

//     printf("No of page hits  %d \n", hit);
//     printf("no of miss  %d \n", miss);
// }

void firstInFirstOut(int *mainMemory, int mSize, int *requests,
                     int reqSize)
{
    int count = 0, flag = 0;
    int hit = 0, miss = 0;

    for (int i = 0; i < reqSize; i++)
    {

        flag = 0;
        for (int j = 0; j < count; j++)
        {
            if (mainMemory[j] == requests[i])
            {
                hit++;
                flag = 1;
                break;
            }
        }

        if (!flag)
        {
            if (count < mSize)
            {
                mainMemory[count++] = requests[i];
            }
            else
            {
                for (int j = 1; j < mSize; j++)
                    mainMemory[j - 1] = mainMemory[j];
                mainMemory[mSize - 1] = requests[i];
            }
            miss++;
        }
    }

    printf("No. of page hits: %d\n", hit);
    printf("No. of page faults: %d\n", miss);
}

void leastFrequentlyUsed(int *mainMemory, int mSize, int *requests, int reqSize)
{
}

void leastrecentlyUsed()
{
    printf("LFU");
}

int main()
{
    int *mainMemory;
    int *requests;
    int mSize, reqSize;

    printf("Enter size of main memory: ");
    scanf("%d", &mSize);
    printf("Enter no. of requests: ");
    scanf("%d", &reqSize);

    mainMemory = (int *)malloc(sizeof(int) * mSize);
    requests = (int *)malloc(sizeof(int) * reqSize);

    printf("Enter string of page requests: ");
    for (int i = 0; i < reqSize; i++)
        scanf("%d", &requests[i]);

    int choice;
    do
    {
        printf("1. FIRST IN FIRST OUT \n");
        printf("2. LEAST FREQUENTLY USED \n");
        printf("3. LEAST RECENTLY USED \n");
        printf("Enter choice: ");
        scanf("%d", &choice);
        printf("\n");
        switch (choice)
        {
        case 1:
            firstInFirstOut(mainMemory, mSize, requests, reqSize);
            break;
        case 2:
            leastFrequentlyUsed(mainMemory, mSize, requests,
                                reqSize);
            break;
        case 3:
            leastRecentlyUsed(mainMemory, mSize, requests, reqSize);
            break;
        case 4:
            printf("Exiting...\n");
            break;
        }
    } while (choice != 4);
}

// int main()
// {
//     int *mainmemory;
//     int *requests;
//     int mSize, reqSize;

//     printf("Enter size of main memory");
//     scanf("%d", &mSize);
//     printf("Enter the request size");
//     scanf("%d", &reqSize);

//     mainmemory = (int *)malloc(sizeof(int) * mSize);
//     requests = (int *)malloc(sizeof(int) * reqSize);

//     if (!requests)
//     {
//         printf("no");
//     }
//     else
//     {
//         printf("yes");
//     }

//     printf("Enter string of page requests");
//     for (int i = 0; i < reqSize; i++)
//     {
//         scanf("%d", &requests);
//     }

//     int choice = 0, lp = 1;

//     while (lp == 1)
//     {

//         // printf("Enter your choice \n 1) FCFS \n 2) SCAN \n 3) CSCAN \n 4) EXIT \n");
//         printf("1.FIRST IN FIRST OUT \n ");
//         printf("2.LEAST FREQUENTLY USED \n ");
//         printf("3.LEAST RECENTLY USED \n ");
//         printf("4.EXIT \n ");
//         printf("Enter choice ");
//         scanf("%d", &choice);
//         switch (choice)
//         {
//         case 1:
//             // FIFO(mainmemory, mSize, requests, reqSize);
//             firstInFirstOut(mainmemory, mSize, requests, reqSize);

//             break;

//         case 2:
//             LRU();
//             break;

//         case 3:
//             LFU();
//             break;

//         case 4:
//             lp = 0;
//             break;

//         default:
//             printf("enter valid choice");
//         }
//     }

//     // do
//     // {
//     //     printf("1.FIRST IN FIRST OUT \n ");
//     //     printf("2.LEAST FREQUENTLY USED \n ");
//     //     printf("3.LEAST RECENTLY USED \n ");
//     //     printf("Enter choice ");
//     //     scanf("%d ", &choice);
//     //     printf(" \n ");
//     //     switch (choice)
//     //     {
//     //     case 1:
//     // FIFO(mainmemory, mSize, requests, reqSize);
//     //         break;

//     //     case 2:
//     //         LFU();
//     //         break;

//     //     case 3:
//     //         LRU();
//     //         break;

//     //     case 4:
//     //         printf("Exiting...\n");
//     //     }

//     // } while (choice != 4);
// }