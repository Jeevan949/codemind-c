#include<stdio.h>
int main()
{
    int i,n,max,arr[100];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    arr[max]=arr[0];
    for(i=0;i<n;i++)
    {
        if(arr[max]<arr[i])
        {
            arr[max]=arr[i];
        }
    }
    printf("%d",arr[max]);
    return 0;
}