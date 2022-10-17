#include <stdio.h>
#include <stdlib.h>
#define MAX 20
int nFiles, nBlock, sFile[MAX], sBlock[MAX];
int files[MAX], blocks[MAX];
void firstfit()
{
    for (int i = 0; i < nFiles; i++)
    {
        for (int j = 0; j < nBlock; j++)
        {
            if (sFile[i]<=)
            {
                /* code */
            }
            
        }
    }
}
void bestfit()
{
    printf("bf");
}
void worstfit()
{
    printf("wf");
}
void main()
{
    int ch = 0;
    printf("Enter the number of blocks:");
    scanf("%d", &nBlock);
    printf("Enter the number of files:");
    scanf("%d", &nFiles);
    printf("Enter the size of the blocks:\n");
    for (int i = 1; i <= nBlock; i++)
    {
        printf("Block %d:", i);
        // scanf("%d", &sBlock[i]);
        scanf("%d", &sBlock[i]);
    }
    printf("Enter the size of the files:\n");
    for (int i = 1; i <= nFiles; i++)
    {
        printf("File %d:", i);
        scanf("%d", &sFile[i]);
    }
    while (ch != 4)
    {
        printf("\nMenu:\n1.First fit 2.Best fit 3.Worst fit 4.Exit\nEnter your choice: ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            firstfit();
            break;
        case 2:
            bestfit();
            break;
        case 3:
            worstfit();
            break;
        case 4:
            exit(0);
            break;
        default:
            printf("Invalid choice");
        }
    }
}