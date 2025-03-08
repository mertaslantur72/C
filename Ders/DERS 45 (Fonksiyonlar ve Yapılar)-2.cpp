#include<stdio.h>

struct Student {
	
	char name[20];
	char surname[20];
	int number;
	
};

void show(struct Student a) {
	
	printf("Information of student: %s %s %d",a.name,a.surname,a.number);	
}

struct Student takeValue() {
	
	struct Student yeni;
	
	printf("Enter the information:");
	scanf("%s %s %d",&yeni.name,&yeni.surname,&yeni.number);
	
	return yeni;
}


int main() {
	
struct Student student1 = takeValue();	
	
show(student1);	
	
	
	
	return 0;
}
