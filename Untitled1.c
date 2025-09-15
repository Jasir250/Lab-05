#include <stdio.h>

int main() {
	char qualification[20];
	char result [100];
	
	printf("Enter your qualification\n");
	scanf("%s", qualification);
	
	if (strcmp(qualification, "MS") == 0){
	    printf("Enter your result\n");
	    scanf("%s", result);
	    if (strcmp(result, "Pass") == 0){
		        printf("Congratulations. You are hired");
		}else{
			printf("Better luck next time");
		}
	}else{
		printf("Not eligible");
	}
}
