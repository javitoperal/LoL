#include <stdio.h>
#include <string.h>

int call(){

	char an[5];
	printf("Vos queres que alda sea un puto o un gay?");
	scanf("%s",an);	
	if (an == "un gay"){
		
		printf("entonces un gay sera!");
	}
	
	return 0;

}

float sum(float a, float b) {

	float ans = a+b;
	printf("Your result is:%.3f\n", ans);

	return 0;
}

float difference(float a, float b) {

	float ans = a-b;
	printf("Your result is:%.3f\n", ans);	

	return 0;
}

float multi(float a, float b) {

	float ans = a*b;
	printf("Your result is:%.3f\n", ans);

	return 0;
}

float div(float a, float b) {

	int operations();
	float ans = a/b;
	if (b == 0) {
		printf("You cant divide by 0\n");
	
		operations();

	}
	
		
	printf("Your result is:%.3f\n", ans);

	return 0;
}

int operations() {


	float an[1];
	float a;
	float b;
	printf("What tha fak ya wanna do?\n");
	printf("1)sum 2)difference 3)multiply 4)divide\n");
	scanf("%f", &an[0]);
	if (an[0] == 1){
		
		printf("Enter N1:");
		scanf("%f", &a);
		printf("Enter N2:");
		scanf("%f", &b);

		sum(a, b);
		
	}

	if(an[0] == 2){
		
		printf("Enter N1:");
		scanf("%f", &a);
		printf("Enter N2:");
		scanf("%f", &b);

		difference(a, b);
		
	}

	if(an[0] == 3){
		
		printf("Enter N1:");
		scanf("%f", &a);
		printf("Enter N2:");
		scanf("%f", &b);

		multi(a, b);
		
	}

	if(an[0] == 4){
		
		printf("Enter N1:");
		scanf("%f", &a);
		printf("Enter N2:");
		scanf("%f", &b);

		div(a, b);
		
	}

	return 0;
}



int main() {
/*
	operations();
*/
	call();

	return 0;
}
