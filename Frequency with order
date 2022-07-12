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
    int c=0,arr1[size];
    for(int i=0;i<size;i++)
    {
        int f=0;
        for(int j=0;j<size;j++)
        if(arr[i]==arr1[j])
        {
            f=1;
            break;
        }
        if(f==0)
        arr1[c++]=arr[i];
    }
    printf("\nNumber\tFrequency");
    for(int i=0;i<c;i++)
    {
        int f=0;
        for(int j=0;j<size;j++)
        if(arr1[i]==arr[j])
        f+=1;
        printf("\n%d\t%d",arr1[i],f);   
    }
    return 0;
}
