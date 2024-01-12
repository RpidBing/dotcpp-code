#include<stdio.h>
#include<math.h>
#include<string.h>

/*
* 名称 fun1031_1 函数
* 参数 char *(字符串)
* 功能 将字符串倒序
*/
void fun1031_1(char *string)
{
    int i;//控制循环的变量
    char tmp;//交换位置的中间变量
    int n;//存放字符串长度
    n = strlen(string);
    for(i = 0;i < n / 2;i++){
        tmp = string[i];
        string[i] = string[n - 1 - i];
        string[n - 1 - i] = tmp;
    }
}

int main()
{
    /*1028 
    求方程 的根，用三个函数分别求当b^2-4ac大于0、等于0、和小于0时的根，并输出结果。从主函数输入a、b、c的值
    重点（韦达定理， 共轭复根）
    x1 = -b/2*a + sqrt(derta)/2*a
    x2 = -b/2*a - sqrt(derta)/2*a
    math.h中的sqrt用于求平方根，fabs用于求绝对值
    */
    //1028 start
    double a,b,c;//用于存放一元二次方程的三个系数
    double par,var;//用于存放“前后”两部分
    double derta;//存放德尔塔
    
    //输入数据
    scanf("%lf %lf %lf",&a,&b,&c);
    
    //计算德尔塔
    derta = b * b - 4 * a * c;
    par = (-1 * b)/(2 * a); 
    var = sqrt(fabs(derta))/(2 * a);
    
    //判读并区别输出根
    if(derta > 0){
        printf("x1=%.3lf x2=.3lf",par+var,par-var);
    }else if(derta == 0){
        printf("x1=%.3lf x2=.3lf",par+var,par+var);
    }else{
        printf("x1=%.3lf+%.3lfi x2=%.3lf-%.3lfi",par,var,par,var);
    }
    
    return 0;

    //1029 写一个判断素数的函数，在主函数输入一个整数，输出是否是素数的消息。
    //1029 start
    
    int number;//存放输入的整数
    int r = 1;//存放余数
    int i;//控制循环的变量
    
    //输入数据
    scanf("%d",&number);
    
    //判断0 1
    if(number == 0||number == 1)
    {
        printf("not prime");
        return 0;
    }
    
    //判断素数
    for(i = 2;i < fabs(number);i++)
    {
        r = number % i;
        if(r == 0)
            break;
    }
    
    //输出结果
    if(r != 0){
        printf("prime");
    }else{
        printf("not prime");
    }
    
    return 0;
    
    //1029 end
  
    //1030 写一个函数，使给定的一个二维数组（３×３）转置，即行列互换。
    //1030 start
    /*
    A A A
    A B B
    A B C
    "大包小"
    */
    
    int number[3][3]={0};//存放矩阵数据
    int i,j;//控制循环的变量
    int tmp;//用于换位的中间变量
    
    //输入数据
    for(i = 0;i<3;i++){
        scanf("%d %d %d",&number[i][0],&number[i][1],&number[i][2]);
    }
    
    //进行层级转置
    for(i = 0;i < 3;i++){
        for(j = i;j < 3;j++){
            tmp = number[i][j];
            number[i][j] = number[j][i];
            number[j][i] = tmp;
        }
    }
    
    //输出数据
    for(i = 0;i<3;i++){
       printf("%d %d %d\n",number[i][0],number[i][1],number[i][2]);
    }
    //1030 end
  
    //1031 写一函数，使输入的一个字符串按反序存放，在主函数中输入并输出反序后的字符串（不包含空格）。
    //1031 start
    
    char string[512] = "";//存放字符串
    
    //输入数据
    scanf("%s",string);
    
    //调用fun1031_1函数进行字符串倒序
    fun1031_1(string);
    
    //输出数据
    printf("%s",string);
    
    return 0;
    //1031 end
  
}
