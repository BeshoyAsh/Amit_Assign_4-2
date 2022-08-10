#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{

    int i;
    char arr[30]="i like this programme so much";
    char rev_arr[30];
    //printf("%d",sizeof(arr));
    for(i=30;i>=0;i--)
    {
        printf("%c",arr[i]);
    }
    //printf("\n%s",arr);

    return 0;
}
