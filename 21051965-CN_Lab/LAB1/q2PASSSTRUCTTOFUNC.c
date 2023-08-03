#include <stdio.h>
struct dob{
	int month,date,year;
};
struct student_info{
	int roll_no;
	char name[50];
	float CGPA;
	struct dob age;
	};
	void displayStudentinfovalue(struct student_info student){
		printf("\nEntered roll: %d\n",student.roll_no);
		printf("Entered name:%s\n",student.name);
		printf("Entered CGPA:%f\n",student.CGPA);
		printf("Entered age:%d/%d/%d",student.age.date,student.age.month,student.age.year);
	}
	void displayStudentinfoaddress(struct student_info *student){
		printf("\nEntered roll: %d\n",student->roll_no);
		printf("Entered name:%s\n",student->name);
		printf("Entered CGPA:%f\n",student->CGPA);
		printf("Entered age:%d/%d/%d",student->age.date,student->age.month,student->age.year);
	}
int main(){
	struct student_info stud1={
	.roll_no=21051965,
	.name="aLISHA",
	.CGPA=8.6,
	.age.date=20,
	.age.month=11,
	.age.year=2002
	};
		displayStudentinfovalue(stud1);
		displayStudentinfoaddress(&stud1);
		return 0;
		
	}
	
	
