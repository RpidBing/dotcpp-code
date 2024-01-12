#include<stdio.h>
int main()
{
    //1023  用选择法对10个整数从小到大排序。
    //1023 start
    int n,j,i,pos,tmp = 0,num[10];
    for(n = 0;n < 10;n++)
        scanf("%d",&num[n]);
        
    for(i = 0;i < 10;i++)
    {
        pos = i;
        for(j = i;j < 10;j++)
        {
            if(num[pos] > num[j])
            {
                pos = j;
            }
        }
        tmp = num[i];
        num[i] = num[pos];
        num[pos] = tmp;
    }
    
    for(n = 0;n < 10;n++)
        printf("%d\n",num[n]);
  //1023 end
  
  //1024  求一个3×3矩阵对角线元素之和。
  //1024 start
    int i,j;//控制输入数据变量
    int num[3][3] = {0};//存放矩阵的二维数组
    for(i = 0;i < 3;i++)
        for(j = 0;j < 3;j++)
            scanf("%d",&num[i][j]);
    
    printf("%d %d ",num[0][0]+num[1][1]+num[2][2],num[2][0]+num[1][1]+num[0][2]);
  //1024 end
  
}
