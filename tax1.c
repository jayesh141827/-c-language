#include<stdio.h>

int main(){
	
	int a,b,c;
	
	printf("Enter a :");
	scanf("%d",a);
	
	printf("Enter b:");
	scanf("%d",b);
	
	printf("Enter c :");
	scanf("%d",c);
	
	
	if(a<b){
      
	  if(a<c){
          
		  ptintf("A is min/n");	  	
	  	
	  }		
	   else{
	   	   
	   	   printf("C is min/n");
	   	
	   	
	   }	
		
		
	}
	else{
		
		if(b<c){
			
			
			printf("B is min/n");
			
			
		}
		
		else{
			
			printf("C is min/n");
			
			
		}
	}
	
	
	
	return 0;
}
