//
//  main.c
//  实验1.打印素数
//
//  Created by mhy on 2021/11/4.
//
#include <stdio.h>
int main()
{
    int count =1;                   //计数器count，一行6个。
    int i,n;
    for(n=2;n<=300;n++){
        int abc =1;
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        { abc=0;
          break;
        }
    }
    if(abc){
        printf("%d ",n);
       if(6==count++)
        {
        printf("\n");
        count = 1;
        }
    }
    }
    return 0;
}
