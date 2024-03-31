#include<stdio.h>
int space(int s);
int star(int st);

int detail(int val,int *pt);
void front();
int reval(int v,int *p);
// int add_std(int *p);
void addstd(int v);

int cases(int x,int *y)
{
    switch (x)
    {   
        case 1:
        {
            addstd(x);
            break;
        }
        case 2:
        {   
            detail(x,y);
            break;
        }
        case 3:
        {
            reval(x,y);
            break;
        }
        case 4:
        {
            system("cls");
            printf("\n\n\nLogin out...");
            sleep(3);
            system("cls");
            printf("\n\n\n\n\n\n");
            star(10);space(20);
            printf("! T H A N K  Y O U !");
            space(20);star(10);
            printf("\n\n\n\n\n\n\n");
            break;
        }
        
    }
    
}