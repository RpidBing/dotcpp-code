#include<stdio.h>

#define MaxLen 10

int main()
{
  //1026 输入10个数字，然后逆序输出。
  //1026 start
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
  //1026 end

  /* 1027 写两个函数，分别求两个整数的最大公约数和最小公倍数，用主函数调用这两个函数，并输出结果两个整数由键盘输入。‘
  （重要知识点：质因数分解法、短除法、辗转相除法、更相减损法）
   最小公倍数 = 两数之积 / 最大公因数*/
  //1027 start
    int a,b;//存放两个数
    int r = 1;//存放余数
    int gcb,lcm;//存放结果
    
    //输入数据
    scanf("%d %d",&a,&b);
    
    lcm = a*b;
    
    //确保大的数做被除数
    if(a < b)
    {
        gcb = a;
        a = b;
        b = gcb;
    }
    
    //欧几里得法求gcb——最大公约数（因数）
    while(r != 0){
        r = a % b;
        gcb = b;
        a = b;
        b = r;
    }
    
    //用lcm和gcb的关系求最小公倍数
    lcm /= gcb;
    
    //输出数据
    printf("%d %d",gcb,lcm);
    
    return 0;
  //1027 end
}
