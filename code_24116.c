#include<stdio.h>

void inp(int *n)
{
    int i;
    for(i = 0;i<10;i++){
        scanf("%d",&n[i]);
    }
}

void sort(int *n){
    int i;
    int pos = n[0];
    int aress = 0,tmp;
    for(i = 0;i < 10;i++){
        if(pos > n[i]){
            pos = n[i];
            aress = i;
        }
    }
    if(aress != 0){
    tmp = n[0];
    n[0] = n[aress];
    n[aress] = tmp;
    pos = n[9];
    }
    for(i = 0;i < 10;i++){
        if(pos < n[i]){
            pos = n[i];
            aress = i;
        }
    }
    if(aress != 9){
    tmp = n[9];
    n[9] = n[aress];
    n[aress] = tmp;
    }
}

void outp(int *n){
    int i;
    for(i = 0;i<10;i++){
        printf("%d ",n[i]);
    }
}

int main()
{
    //1045 输入10个整数，将其中最小的数与第一个数对换，把最大的数与最后一个数对换。写三个函数； ①输入10个数；②进行处理；③输出10个数。
    //start
    
    int num[10];//存放数字
    
    inp(num);
    
    sort(num);
    
    outp(num);
    
    //end
}
