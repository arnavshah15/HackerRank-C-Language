#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int a,b,sum,diff;
    float c,d,sum1,diff1;
    scanf("%d %d",&a,&b);
    scanf("%f %f",&c,&d);
    sum=a+b;
    sum1=c+d;
    diff=a-b;
    diff1=c-d;
    printf("%d %d\n",sum,diff);
    printf("%.1f %.1f\n",sum1,diff1);
    
    
	
    
    return 0;
}
