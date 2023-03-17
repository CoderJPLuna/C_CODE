#include<stdio.h>
#include<math.h>
int binary_search(int arr[],int key,int sz)
{
    int left=0;
    int right=sz-1;
    while(left<=right)
    {
        int mid=(left+right)/2;
        if(arr[mid]>key)
            right=mid-1;
        else if(arr[mid]<key)
            left=mid+1;
        else
            return mid;
    }
    return -1;
}
int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    int key=9;
    int sz=sizeof(arr)/sizeof(arr[0]);
    int ret=binary_search(arr,key,sz);
    if(ret==-1)
        printf("not found\n");
    else
        printf("arr[%d]=key\n",ret);
    return 0;
}