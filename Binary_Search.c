#include <stdio.h>

void main()
{
    int mid, start, end, key,m,t,i;
    printf("Enter the size of the array: ");
    scanf("%d",&m);
    int a[m];
    for(i=0;i<m;i++)
    {
        printf("Enter element%d ",i+1);
        scanf("%d",&a[i]);
    }
    printf("Enter the key you want to search ");
    scanf("%d",&key);
    int f=0;
    start=0;
    end=m-1;
    while(f!=m)
    {
        mid=((start+end)/2);
        if(key==a[mid])
        {
            printf("Your search is successfull.\nThe key is at the position %d",mid+1);
            break;
        }
        else if(key<a[mid])
        {
            end=mid-1;
        }
        else if(key>a[mid])
        {
            start=mid+1;
        }
        f+=1;
    }
}