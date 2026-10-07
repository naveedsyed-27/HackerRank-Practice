#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int int1,int2;
    float float1,float2;
    
    //Read two integers
    scanf("%d %d\n", &int1,&int2);
    
    //Read two floats
    scanf("%f %f\n", &float1,&float2);
    
    //print the sum and difference of the integers
    printf("%d %d\n",int1+int2,int1-int2);
    
    //printf the sum and difference of the float formatted to 1 decimal place
    printf("%.1f %.1f\n", float1+float2, float1-float2);
    
    return 0;
}
