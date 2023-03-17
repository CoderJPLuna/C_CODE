#include<stdio.h>
void bubble_sort(int arr[],int sz)//数组传递参数的是元素的首地址
{
    for(int i=0;i<sz-1;i++)//计算趟数
    {
        for(int j=0;j<sz-1-i;j++)//计算每趟比较次数
        {
            if(arr[j]>arr[j+1])
            {
                int tmp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=tmp;
            }
        }
    }
}
int main()
{
    int arr[10]={9,8,7,6,5,4,3,2,1,0};
    int sz=sizeof(arr)/sizeof(arr[0]);//计算数组长度不能在函数中
    bubble_sort(arr,sz);//因为数组传递给函数的值为数组元素的首地址
    for(int i=0;i<10;i++)
        printf("%d",arr[i]);
    return 0;
}