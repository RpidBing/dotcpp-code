#include<stdio.h>


int main()
{
    //1043 输入三个整数，按由小到大的顺序输出。
    //1043 start
    
    int number[3];//存放三个整数
    int i,j;//控制循环
    int max = 0;//存放最大的数据的下标
    int tmp;//作为交换的中间变量
    
    //输入数据
    for(i = 0;i < 3;i++){
        scanf("%d",&number[i]);
    }
    
    //简单选择算法排序
    for(i = 2;i >= 0;i--){
        max = 0;//重置最大数字下标位置，以用于重新查找下标
        //找到最大数字的下标
        for(j = 0;j <= i;j++){
            if(number[j] > number[max]){
                max = j;
            }
        }
        if(max != i)//把大的数字替换置最高位置
        {
            tmp = number[i];
            number[i] = number[max];
            number[max] = tmp;
        }
    }
    
    //输出数据
    for(i = 0;i < 3;i++){
        printf("%d ",number[i]);
    }
    
    //1043 end


  
}
