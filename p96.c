#include <stdio.h>
#include <string.h>
typedef struct
{
    int rollno;
    char name[50];
    int std;
    char class[7];
    int m[6];
    int sum;
    float percentage;
    char result[4];
} marksheet;

void input(marksheet *m1)
{
    m1->sum = 0;
    int failCount = 0;
    printf("Enter the roll number: ");
    scanf("%d", &m1->rollno);
    fflush(stdin);
    printf("Enter the name: ");
    scanf("%[^\n]s",m1->name);
    printf("Enter standard: ");
    scanf("%d", &m1->std);

    for (int i = 0; i < 6; i++)
    {
        printf("Enter the marks: ");
        scanf("%d",&m1->m[i]);
    }
    
    for (int i = 0; i < 6; i++)
    {
        if (m1->m[i] < 40)
        {
            failCount++;
        }

        m1->sum += m1->m[i];
    }
    if (failCount == 0)
        strcpy(m1->result, "PASS");
    else if (failCount <= 2)
        strcpy(m1->result, "ATKT");
    else
        strcpy(m1->result, "FAIL");
    m1->percentage = m1->sum / 6.0;
    if (m1->percentage>=90)
    {
        strcpy(m1->class,"First");
    }
    else if (m1->percentage>=70 && m1->percentage<90)
    {
        strcpy(m1->class,"Second");
    }
    else
    {
        strcpy(m1->class,"Third");
    }
    
}
int main()
{
    marksheet m;
    input(&m);

    printf("\n-------------- RESULT --------------\n");
    printf("Name: %s\n", m.name);
    printf("Roll No: %d\n", m.rollno);
    printf("Std: %d\n", m.std);
    printf("Total: %d\n", m.sum);
    printf("Percentage: %.2f\n", m.percentage);
    printf("Result: %s\n", m.result);
    printf("Class: %s\n", m.class);
    printf("------------------------------------\n");

    FILE *fp = fopen("marksheet.txt", "w");
    if (fp == NULL)
    {
        printf("File error!\n");
        return 1;
    }

    fprintf(fp, "-------------- RESULT --------------\n");
    fprintf(fp, "Name: %s\n", m.name);
    fprintf(fp, "Roll No: %d\n", m.rollno);
    fprintf(fp, "Std: %d\n", m.std);
    fprintf(fp, "Total: %d\n", m.sum);
    fprintf(fp, "Percentage: %.2f\n", m.percentage);
    fprintf(fp, "Result: %s\n", m.result);
    fprintf(fp, "------------------------------------\n");

    fclose(fp);
    // ---- FILE EXPORT END ----

    printf("\nFile exported successfully as marksheet.txt ✨\n");

    return 0;
}