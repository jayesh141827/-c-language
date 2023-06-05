#include<stdio.h>

int main(){
	
	int  a,b,c,d;
	
	printf("Enter a :");
	scanf("%d/n",&a);
	
	printf("Enter b :");
	scanf("%d/n",&b);
	
	printf("Enter c :");
	scanf("%d/n",&c);
	
	printf("Enter d :");
	scanf("%d/n",&d);
	 
	 
	 if(a>b){
       
	   if(a>c){
	   	
	   	
	   	if (a>d){
	   		
	   		printf("A is max");
	   		
	   		
		   }	   	
	   	else{
	   		
	   		printf("D is max");
	   		
	   		
		   }
	   }	 	
	   else{
	   	
	   	if(c>d){
	   		
	   		printf("C is max");
	   		
	   		
	   		
		   }
	   	else{
	   		
	   		
	   		printf("D is max");
	   		
	   		
	   		
		   }
	   	
	   }	
	 	
	 }
	else{
		
		if(b>c){
			
			
			if(b>d){
				
				printf("B is max");
				
			}
			else{
				
				printf("D is max");
				
				
			}
			
			
		}
		else{
			
			if(c>d){
				
				printf("C is max");
				
				
			}
			
			else{
				
				
				printf("D is max");
				
			}
		}
		
	}
	
	
	return 0;
}
