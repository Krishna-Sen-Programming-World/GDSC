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
    
    int min=arr[0],max=arr[0];
    for(int i=1;i<size;i++)
    {
        if(arr[i]<min)
        min=arr[i];
        if(arr[i]>max)
        max=arr[i];
    }
    
    printf("\nNumber\tFrequency");
    for(int i=min;i<=max;i++)
    {
        int f=0;
        for(int j=0;j<size;j++)
        if(i==arr[j])
        f+=1;
        if(f!=0)
        printf("\n%d\t%d",i,f);  
    }
    
    return 0;
}
