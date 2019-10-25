#include<stdio.h>
int main()
{
    int n,i,ele,lb,ub,mid;
    printf("Enter number of elements \t");
    scanf("%d",&n);
    int array[n];
    printf("Enter array elements\n");
    for(i=0;i<n;i++)
    scanf("%d",&array[i]);
    printf("Enter element to be searched\t");
    scanf("%d",&ele);
    lb=0,ub=n;
    mid=(lb+ub)/2;
    while(array[mid]!=ele&&lb<=ub)
    {
        if(ele<array[mid])
            ub=mid-1;
        else if(ele>array[mid])
            lb=mid+1;
        mid=(lb+ub)/2;
    }
    printf("Element is found at %d position",mid+1);
    return 0;
}
