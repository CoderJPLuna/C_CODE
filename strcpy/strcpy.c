#include<stdio.h>
#include<assert.h>
char*my_strcpy(char*dest,const char*src)
{
    assert(src!=NULL);//断言
    assert(dest!=NULL);
    char*ret=dest;
    while(*dest++=*src++);//拷贝字符串
    return ret;//返回目标空间的起始地址
}
int main()
{
    char arr1[20];
    char arr2[]="Hello!";
    printf("%s\n",my_strcpy(arr1,arr2));
    return 0;
}