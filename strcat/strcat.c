#include<stdio.h>
#include<assert.h>
char* my_strcat(char*dest,const char*src)
{
    char*ret=dest;
    assert(dest&&src);//dest与src不为空指针
    while(*dest)
    //找到目标字符串中的\0
    {
        dest++;
    }
    while(*dest++=*src++);
    //追加源字符串，包含\0
    return ret;
}
int main()
{
    char arr1[20]="Hello ";
    char arr2[]="World!";
    printf("%s\n",my_strcat(arr1,arr2));
    return 0;
}