#include<stdio.h>

//Design an interactive input loop that scans pairs of integers until it reaches a pair in which the first integer evenly divides the second. 
//Use do-while loop. 

int main(){
	
	int a,b,i,k;
	
	printf("Please enter two integers:");
	scanf("%d%d",&a,&b);
	
	//The code I wrote and commented; It exits the first number of loops that divide the number b and prints only that number.
	
	/*do{
		
		if(b%a!=0){
			a++;
		}
		
	}while(b%a!=0);
	
	printf("The number %d divides %d exactly.",a,b);*/
	
		
    //In this code; Prints all the numbers that divide b from a to b.		
    int size=b-a+1;
    int size1=0;
	int array[size];
	
	for(i=a;i<=b;i++){
		if(b%i==0){
			array[size1]=a;
			size1++;
			a++;

		}
		else{
			a++;
		}
	}
	
	for(k=0;k<size1;k++){
		printf("The number %d divides %d exactly.\n",array[k],b);
	}
	
	return 0;
}


