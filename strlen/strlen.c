#include<stdio.h>
#include<assert.h>
size_t my_strlen(const char*src)
{
    assert(src!=NULL);
    size_t count=0;
    while(*src++!='\0')
        count++;
    return count;
}
int main()
{
    char arr[]="Hello!";
    printf("%zu\n",my_strlen(arr));
    return 0;
}