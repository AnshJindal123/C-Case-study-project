#include<stdio.h>
void front();
void main();

void addstd(int v)
{
    int i,j,ext_stu[6][6],idno;int q,qu,ext,var;
    
    for(i=0;i<6;i++)
    {   printf("\nplease enter 1 to add marks, else enter 0 :");
        scanf("%d",&q);
        if(q==1)
        {
            printf("enter the student id : ");
            scanf("%d",&ext_stu[i][0]);
            for(j=1;j<6;j++)
                {
                    printf("Enter subject %d marks : ",j);
                    scanf("%d",&ext_stu[i][j]);
                    
                }
        }
        else
        {
            break;
        }
        
    }
    system("cls");
    printf("\n\nIf you wish to see the marks, enter 1 else enter 0\n");
    scanf("%d",&var);
    system("cls");
    if (var==1)
    {

        front();
        printf("\nPlese enter the id : ");
        scanf("%d",&idno);
        for(i=0;i<6;i++)
        {
            if(idno==ext_stu[i][0])
            {
                break;
            }
            else
            {
                continue;
            }
        }   
        for(i;i<6;i++)
        {
            printf("\nIf you wish to see the marks, enter 1 else enter 0 :");
            scanf("%d",&qu);
            if(qu==1)
            {
                for(j=1;j<6;j++)
                {
                    printf("marks %d : %d\n",j,ext_stu[i][j]);
                }
                break;
            }
            else
            {
                break;
            }
        }
        printf("PPlease enter any number to exit to the menu : ");
        scanf("%d",&ext);
        system("cls");
        main();
        
    }

    
}