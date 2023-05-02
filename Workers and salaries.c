#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Employee{

    char name[20];
    char surname[20];
    char title[20];
    int salary, year;

};


int main(){

    struct Employee employee[3];
    float  new[3];
    
    printf("Enter 3 Employees Details\n");    

    for (int i = 0; i < 3; i++){
        printf("Employee %d:-\n", i+1);

        printf("Name: ");
        fgets(employee[i].name, 20, stdin);
        employee[i].name[strcspn(employee[i].name, "\n")] = '\0';

        printf("Surname: ");
        fgets(employee[i].surname, 20, stdin);
        employee[i].surname[strcspn(employee[i].surname, "\n")] = '\0';

        printf("Title: ");
        fgets(employee[i].title, 20, stdin);
        employee[i].title[strcspn(employee[i].title, "\n")] = '\0';

        printf("Salary: ");
        scanf("%d", &employee[i].salary);

        printf("Year of Service: ");
        scanf("%d", &employee[i].year);

        getchar();
    }

    for (int j = 0; j < 3; j++){
        new[j] = employee[j].salary + (employee[j].salary * (employee[j].year* 1.0 /100));
    }
    
    printf("3 Employees Details with Raise\n");

    for (int a = 0; a < 3; a++)
        printf("Name: %s, Surname: %s, New Salary: %.0f\n", employee[a].name, employee[a].surname, new[a]);
}
