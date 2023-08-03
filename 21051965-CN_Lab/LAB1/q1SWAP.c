#include <stdio.h>
void swap(char *a,char *b){
	char *temp;
	*temp=*a;
	*a=*b;
	*b=*temp;
}
int main(int argc, char* argv[]){
	
	if(argc<1){
		printf("You have not entered a argument");
		return 1;
		}
	printf("Value for x=%s and y=%s\n",argv[1],argv[2]);
	printf("Enter value for x and y\n");
	swap(argv[1],argv[2]);
	printf("After swap Value for x=%s and y=%s\n",argv[1],argv[2]);
	
	return 0;
	}


