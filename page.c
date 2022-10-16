#include <stdio.h>
int main(int argc, char const *argv[])
{
    int *mainmemory;
    int *requests;
    int mSize, reqSize;

    printf("Enter size of main memory");
    scanf("%d", &mSize);
    printf("Enter the request size");
    scanf("%d", &reqSize);

    mainmemory = (int *)malloc(sizeof(int) * mSize);
    requests = (int *)malloc(sizeof(int) * reqSize);

    printf("Enter string of page requests");
    for (int i = 0; i < reqSize; i++)
    {
        // scanf(% d)
    }

    return 0;
}
