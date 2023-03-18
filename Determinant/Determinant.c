#include<stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 6
int determinant(int M[N][N],int n)
{
    int AC[N][N]={0};//余子式
    int result=0;
    int sign;
    if(n==1)
        return M[0][0];
    else
    {
        for(int j=0;j<n;j++)//M的每一列
        {
            for(int i=1;i<n;i++)
            {
                 int c=0;
                for(int k=0;k<n;k++)
                {
                   
                    if(j==k)//去掉M的该列
                        continue;
                    else
                    {
                        sign=j%2==0?1:-1;//判断代数余子式的正负
                        AC[i-1][c++]=sign*M[i][k];//将M的剩余列和行赋给代数余子式
                    }
                }
            }
            result=result+M[0][j]*determinant(AC,n-1);
        }
    }
    return result;
}
int main()
{
    srand((unsigned int)time(NULL));
    int M[N][N]={0};
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<N;j++)
        {
            M[i][j]=rand()%10;
        }
    }
      for(int i=0;i<N;i++)
    {
        for(int j=0;j<N;j++)
        {
            printf("%d",M[i][j]);
        }
        printf("\n");
    }
    printf("%d",determinant(M,N));
}