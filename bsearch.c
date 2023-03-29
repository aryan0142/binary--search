#include <stdio.h>
int main()
{
    int a[20],i,x,num,low,mid,hi;
    printf("enter number of elements : ");
    scanf("%d",&num);
    printf("enter numbers in ascending order : ");
    for(i=0;i<num-1;i++)
        {
            scanf("%d",&a[i]);
        }
    printf("enter number to be searched : ");
    scanf("%d",&x);
    low=0;
    hi=num-1;
    mid=(low+hi)/2;
    while(low<=hi)
    
        if(a[mid]<x)
        {
        low=mid+1;
        }
        else if(a[mid]==x)
        {
        printf("%d found at index %d\n",x,mid);
        break;
        }
        else 
        hi=mid-1;
        mid=(low+hi)/2;
        if(low>hi)
        printf("search fail %d not found in array",x);
        return 0;
}
