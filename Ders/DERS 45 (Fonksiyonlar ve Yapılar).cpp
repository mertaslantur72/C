#include<stdio.h>

struct Student {
	
	char name[20];
	char surname[20];
	int number;
	
	
};

void show(struct Student a) {
	
	printf("Information of students: %s %s %d",a.name,a.surname,a.number);
	
}


int main() {
	
struct Student student1 = {"Bill","Gates",407124};	

show(student1);
	
	
	return 0;
}
