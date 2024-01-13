#include<stdio.h>
#include<string.h>
#include<math.h>

#define fun1036(a,b)  tmp=a,a=b,b=tmp;
#define fun1037(a,b)  tmp=a%b;
#define fun1038_1(a,b,c) s=(a+b+c)/2;
#define fun1038_2(a,b,c) area=sqrt(s*(s-a)*(s-b)*(s-c));
#define fun1039(y){if(y%4==0 && y%100!=0 || y%400==0)printf("L");else printf("N");}
#define fun1041_1(n){for(i = 0;i < 3;i++){if(n[i]>=max)max = n[i];}} 


/*
 * 名字 fun1035_1
 * 参数 需统计的字符串数据 各类字符的统计数据
 * 功能 统计此字符串中字母、数字、空格和其它字符的个数
 */
 void fun1035_1(char *str,int i[4]){
    int x;//控制循环
    for (x = 0; x < strlen(str); x++) {
        if ((str[x]>='A'&&str[x]<='Z')||(str[x]>='a'&&str[x]<='z')) {
            i[0]++;
        } else if (str[x]>='0' && str[x]<='9') {
            i[1]++;
        } else if (str[x] == ' ') {
            i[2]++;
        } else {
            i[3]++;
        }
    }
 }

/*
 * 名字 fun1041_2
 * 参数 需求最大值的数组
 * 功能 求最大值
 */
float fun1041_2(float*n){
    int i;//控制循环
    float max = 0;//存放最大的数字
    for(i = 0;i < 3;i++){
        if(n[i]>=max)
            max = n[i];
    }
    return max;
}

int main()
{
    //1032 写一函数，将两个字符串连接
    //1032 start
    
    char str_1[128];//存放字符串数据1
    char str_2[128];//存放字符串数据2
    char sunstr[256];//存放合并后的字符串
    
    //输入数据
    scanf("%s",str_1);
    scanf("%s",str_2);
    
    //进行数据拼接
    strcpy(sunstr,str_1);
    strcat(sunstr,str_2);
    
    //输出数据
    printf ("%s",sunstr);
    
    //1032 end
  
    //1033 写一函数，将一个字符串中的元音字母复制到另一个字符串，然后输出。
    //1033 start
    
    char str[128];//输入的字符串数据
    int i;//控制循环变量
    
    //输入数据
    scanf("%s",str);
    
    //循环查找并输出元音
    for(i = 0; str[i] != '\0'; i++)
    {
        switch (str[i]){
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
            printf("%c",str[i]);
            break;
        }
    }
    
    //1033 end
  
    //1034 写一函数，输入一个四位数字，要求输出这四个数字字符，但每两个数字间空格。如输入1990，应输出"1 9 9 0"。
    //1034 start
    
    char str[4];//输入的字符串数据
    
    //输入数据
    scanf("%s",str);
    
    //输出数据
    printf("%c %c %c %c",str[0],str[1],str[2],str[3]);
    
    //1034 end
    
    //1035 编写一函数，由实参传来一个字符串，统计此字符串中字母、数字、空格和其它字符的个数，在主函数中输入字符串以及输出上述结果。 只要结果，别输出什么提示信息。
    //1035 start
    
    char str[128];//存放字符串数据
    int i[4] = {0};//存放统计后的数据

    //输入数据
    gets(str);
    
    //调用fun1035_1函数统计字符串中数据
    fun1035_1(str,i);
    
    //输出统计后的数据
    printf("%d %d %d %d",i[0],i[1],i[2],i[3]);

    //1035 end

    //1036 定义一个带参的宏，使两个参数的值互换，并写出程序，输入两个数作为使用宏时的实参。输出已交换后的两个值。
    //1036 start
    
    int a,b;//存放两数据
    int tmp;//作为交换时的中间变量
    
    //输入数据
    scanf("%d %d",&a,&b);
    
    //调用带参宏fun1036(a,b)
    fun1036(a,b)
    
    //输出数据
    printf("%d %d",a,b);
    
    //1036 end
    
    //1037 输入两个整数，求他们相除的余数。用带参的宏来实现，编程序。
    //1037 start
    
    int a,b;//存放两数据
    int tmp;//存放相除的余数
    
    //输入数据
    scanf("%d %d",&a,&b);
    
    //调用带参宏fun1037(a,b)    
    fun1037(a,b)
    
    //输出数据
    printf("%d",tmp);
    
    //1037 end

    //1038 三角形面积=SQRT(S*(S-a)*(S-b)*(S-c)) 其中S=(a+b+c)/2，a、b、c为三角形的三边。 定义两个带参的宏，一个用来求area， 另一个宏用来求S。 写程序，在程序中用带实参的宏名来求面积area。
    //1038 start
    
    double a,b,c;//存放两数据
    double area;//存放三角形面积
    double s;//存放S=(a+b+c)/2
    
    //输入数据
    scanf("%lf %lf %lf",&a,&b,&c);
    
    //调用带参宏fun1038(a,b,c)    
    fun1038_1(a,b,c);
    fun1038_2(a,b,c);
    
    //输出数据
    printf("%.3lf",area);
    
    //1038 end

    //1039 给年份year，定义一个宏，以判别该年份是否闰年。提示：宏名可以定义为LEAP_YEAR，形参为y，既定义宏的形式为 #define LEAP_YEAR(y) （读者设计的字符串）
    //1039 start
    
    int y; // 存放输入的年份
    
    // 输入数据
    scanf("%d",&y);
    
    // 调用带参宏fun1039(y)
    fun1039(y);
    
    // 1039 end
    
    //1040 请设计输出实数的格式，包括：⑴一行输出一个实数；⑵一行内输出两个实数；⑶一行内输出三个实数。实数用"6.2f"格式输出。
    //1040 start
    
    float number; // 存放输入的年份
    int i,j;//控制循环
    
    // 输入数据
    scanf("%f",&number);
    
    // 按格式输出数据
    for(i = 1;i<=3;i++){
        for(j = 0;j<i;j++){
            printf("%6.2f ",number);
        }
        printf("\n");
    }

    // 1040 end

    //1041 分别用函数和带参的宏，从三个数中找出最大的数。
    //1041 start
    
    float number[3]; // 存放输入的年份
    int i;//控制循环
    float max = 0;//存放最大的数字
    
    // 输入数据
    scanf("%f %f %f",&number[0],&number[1],&number[2]);
    
    //调用fun1041_1和fun1041_2查找最大值
    fun1041_1(number);
    printf("%.3f\n",max);
    printf("%.3f",fun1041_2(number));

    // 1041 end

    //1042 输入一行电报文字，将字母变成其下一字母（如’a’变成’b’……’z’变成’ａ’其它字符不变）。
    //1042 start
    
    char str[128] = "";//存放字符串
    int i;//控制循环
    
    //输入数据
    gets(str);
    
    //对数据进行加密
    for(i = 0;i < strlen(str);i++)
    {
        if( str[i]>='a' && str[i]<='y'){
            str[i]++;
        }
        else if(str[i]=='z'){
            str[i] = 'a';
        }
    }

    //输出数据
    printf("%s",str);
    
    // 1041 end

  
  
}
