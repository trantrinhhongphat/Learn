#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
struct Student
{
    char ID[10];
    char Name[100];
    double GPA;
};
typedef struct Student hs;
void nhap(hs *a)
{
    scanf("%s", a->ID);
    getchar();
    gets(a->Name);
    scanf("%lf", &a->GPA);
}
void in( hs a)
{
    printf("%s %s %.2lf\n", a.ID, a.Name, a.GPA);
}
void search(hs a[],int n, char m[100])
{
    for(int i =0; i<n;i++)
    {
        if(strcmp(m, a[i].ID == 0))
        {
            in(a[i]);
            return;
        }
    }
    printf("Khong tim thay hoc sinh");
}
int main()
{
    
    int n;
    scanf("%d", &n);
    hs a[n];
    for(int i =0; i<n;i++)
    {
        nhap(&a[i]);
    
    }
    for(int i =0; i<n; i++)
    {
        in(a[i]);
    }
    char s[100];
    printf("Nhap ID can tim");
    scanf("%s", s);
    search(a, n, s);
}

        
