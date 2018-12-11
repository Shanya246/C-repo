#include<stdio.h>
int bin_search(int[],int,int);
int main()
{
        int size,i,arr[20],search,found;
        printf("\n Enter the array size  : ");
        scanf("%d",&size);
        printf("\n Enter array elements in a ascending order : ");
        for(i=0;i<size;i++)
        {
                scanf("%d",&arr[i]);
        }
        printf("\n Enter the element to search : ");
        scanf("%d",&search);
        found = bin_search(arr,size,search);
        if(found != -1)
                printf("\n Element is found in the position %d",found);
        else
                printf("\n Element not found ");


}
int bin_search(int arr[],int size,int search)
{

        int low,mid,high;
        low=0;
        high = size-1;
        while(low<=high)
        {
                mid=(low+high)/2;
                if(search < arr[mid])
                        high = mid-1;
                else if (search >arr[mid])
                        low = mid+1;
                else
                        return mid;
        }
        return -1;
}

OUTPUT 

Enter the array size  : 6

 Enter array elements in a ascending order : 2
4
6
8
9
10

 Enter the element to search : 9

 Element is found  4
                                                                                                                                      1,1           All
