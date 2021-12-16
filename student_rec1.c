#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void main()
{
    int n,i;
    struct Date
    {
        int dd;
        int mm;
        int yyyy;
    };
    struct student_record
    {
        char name[50];
        int SAP_ID;
        int Enrollment;
        struct Date DOB;
        struct Date reg;
    };
    printf("Enter the number of students: ");
    scanf("%d",&n);
    struct student_record *s = (struct student_record *)malloc(n*sizeof(struct student_record));
    printf("Enter the data of the students.\n");
    for(i=0;i<n;i++)
    {
        printf("Name: ");
        scanf("%s",s[i].name);
        printf("SAP ID: ");
        scanf("%d",&s[i].SAP_ID);
        printf("Enrollment number: ");
        scanf("%d",&s[i].Enrollment);
        printf("Date of Birth dd mm yyyy: ");
        scanf("%d%d%d",&s[i].DOB.dd,&s[i].DOB.mm,&s[i].DOB.yyyy);
        printf("Registration Date dd mm yyyy: ");
        scanf("%d%d%d",&s[i].reg.dd,&s[i].reg.mm,&s[i].reg.yyyy);
        printf("\n");
    }
    printf("Your student record is given below: \n\n");
    for(i=0;i<n;i++)
    {
        printf("Name: %s\n",s[i].name);
        printf("SAP ID: %d\n",s[i].SAP_ID);
        printf("Enrollment number: %d\n",s[i].Enrollment);
        printf("Date of Birth: %d/%d/%d\n",s[i].DOB.dd,s[i].DOB.mm,s[i].DOB.yyyy);
        printf("Registration Date: %d/%d/%d\n\n",s[i].reg.dd,s[i].reg.mm,s[i].reg.yyyy);
    }
}