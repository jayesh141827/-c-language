#include<stdio.h>
int main(){
	 int x;
	 
	 
	 printf("Enter of x velue: ");
	scanf("%d",&x);
	
	int y;
	printf("Enter of y velue: ");	
	
	scanf("%d",&y);
	
	
	int ans;
	
	ans =  (x*x) + (2*x*y) + (y*y);
	
	
	printf("%d",ans);
	
	return 0;
}
