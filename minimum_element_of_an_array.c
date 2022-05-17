#include<stdio.h>
int main()
{
    int i,n,min,arr[100];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    arr[min]=arr[0];
    for(i=0;i<n;i++)
    {
        if(arr[min]>arr[i])
        {
            arr[min]=arr[i];
        }
    }
    printf("%d",arr[min]);
    return 0;
}