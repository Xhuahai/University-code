#include <stdio.h>
#include <stdlib.h>
int main()
{
    int coding = 0;
   printf("你要好好学习吗？(1/0)>:");
    scanf("%d",&coding);
    if(coding==1)
    {
        printf("坚持，你会有好offer\n");
    }
    else
    {
        printf("放弃，回家卖红薯\n");
    }
   // printf("%c\n", '\x61');
    
    return 0;
}
