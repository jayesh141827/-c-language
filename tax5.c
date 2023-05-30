#include<stdio.h>
int main(){
	 int x;
	 
	 
	 printf("Enter of x velue: ");
	scanf("%d",&x);
	
	int y;
	printf("Enter of y velue: ");	
	
	scanf("%d",&y);
	
	
	
	int z;
	printf("Enter of z velue: ");	
	
	scanf("%d",&z);
	
	
	int ans;
	
	ans = (x*x*x) + (y*y*y) + (z*z*z) + (3*(x+y)*(y+z)*(z+x));
	
	
	printf("%d",ans);
	
	return 0;
}
