#include <stdio.h>
int main()
{
    printf("Enter the size of the array ");
    int size;
    scanf("%d",&size);
    int arr[size];
    printf("Enter the elements of the array ");
    for(int i=0;i<size;i++)
    scanf("%d",&arr[i]);
    int ev[size],od[size],sev=0,sod=0;
    printf("\nThe elements of the array before is ");
    for(int i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
        if(arr[i]%2==0)
        ev[sev++]=arr[i];
        else
        od[sod++]=arr[i];
    }
    for(int i=0;i<sev;i++)
    arr[i]=ev[i];
    for(int i=0;i<sod;i++)
    arr[i+sev]=od[i];
    printf("\nThe elements of the array after is ");
    for(int i=0;i<size;i++)
    printf("%d ",arr[i]);
}
