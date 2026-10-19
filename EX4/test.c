#include <stdio.h>
int main (void){

	float section1 , section2 , section3 , Average;

	printf("Enter marks for Section 1:");
	scanf("%f", &section1);

	printf("Enter marks for Section 2:");
	scanf("%f", &section2);

	printf("Enter marks for section3:");
	scanf("%f", &section3);

	Average= (section1+section2+section3)/3;

	if(section1>=70 && section2>=70 && section3>=70 && Average>=75)
		printf("Pass");
	
	else
		printf("Fail");

	return 0;

}
