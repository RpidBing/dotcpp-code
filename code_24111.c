#include<stdio.h>

#define MaxLen 10

int main()
{

    //1025 已有一个已正序排好的9个元素的数组，今输入一个数要求按原来排序的规律将它插入数组中。
    //1025 start
    int number[MaxLen]={0};
    int insert,pos;
    int i;
    
    //向数组输入初始数据
    for(i = 0;i < 9;i++)
    {
        scanf("%d",&number[i]);
    }
    //输入要插入的数据
    scanf("%d",&insert);

    //查找插入的逻辑位置
    for(i = 0;i < 9;i++)
    {
        if(number[i]>insert)
        {
            pos = i + 1;
            break;
        }else{
            pos = 10;
        }
    }
    
    //若是插入位置在最后，则无需进行数据移动
    if(pos != 10)
    {
        for(i = 8;i >= pos - 1;i--)//从最后一个数开始移动至插入位置
        {
            number[i + 1] = number[i];
        }
        number[pos - 1] = insert;//放入插入数据
    }else{
        number[pos - 1] = insert;//放入插入数据
    }
    
    //按格式输出数据
    for(i = 0;i < 10;i++)
    {
        printf("%d\n",number[i]);
    }
  //1025 end
}
