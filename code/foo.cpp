
#include <cstdio>

int main()
{double x,a,y,b;
    scanf ("%f %f %f %f",&x, &a, &y, &b);
    double z;
	/*int x,a,y,b;
	double z;
	scanf("%d%d%d%d",&x,&a,&y,&b);*/
	z=(a*x-b*y)/(a-b);
	printf("%.2f",z);
	return 0;
}
    
  
