#include <stdio.h>

int findGreaterNumber(int number1, int number2);


int main(){
	int number1 = 0;	//init number1
	int number2 = 0;	//init number2 
	printf("Enter the first number: ");
	scanf("%d", &number1);	//input for first number
	printf("Enter the second number: ");
	scanf("%d", &number2);	//input for second number
	int greaterNumber = 0;	//init greaterNumber
	greaterNumber = findGreaterNumber(number1, number2);
	if(greaterNumber == number1){
		printf("%d is the greater number.\n", number1);
	}else if(greaterNumber == 0){
		printf("Both numbers are equal.\n");
	}else{
		printf("%d is the greater number.\n", number2);
	}
	return 0;
}

int findGreaterNumber(int number1, int number2){
	if(number1 > number2){
		return number1;
	}
	else if(number1 == number2){
		return 0; 
	}else{
		return number2;
	}

}

