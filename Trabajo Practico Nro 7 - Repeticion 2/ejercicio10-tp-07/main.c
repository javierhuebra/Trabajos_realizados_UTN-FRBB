#include <stdio.h>

int main(void)
{
    int tabla1;
    int tabla2;
    int tabla3;
    int tabla4;
    int tabla5;
    int tabla6;
    int tabla7;
    int tabla8;
    int tabla9;
    int tabla10;
    int i;
    int j;
//***********************************

    for(i=1; i<=10; i++)
     {
        switch(i)
         {
            case 1: printf("  TABLA DEL UNO \n\n");
            for(j=0; j<=10; j++)
             {
                tabla1 = 1*j;
                printf("\t1 * %d = %d \n", j, tabla1);
            }
            printf("\n");break;
            case 2: printf("  TABLA DEL DOS \n\n");
            for(j=0; j<=10; j++)
             {
                tabla2 = 2*j;
                printf("\t2 * %d = %d \n", j, tabla2);
            }
            printf("\n");break;
            case 3: printf("  TABLA DEL TRES \n\n");
            for(j=0; j<=10; j++)
             {
                tabla3 = 3*j;
                printf("\t3 * %d = %d \n", j, tabla3);
            }
            printf("\n");break;
            case 4: printf("  TABLA DEL CUATRO \n\n");
            for(j=0; j<=10; j++)
             {
                tabla4 = 4*j;
                printf("\t4 * %d = %d \n", j, tabla4);
            }
            printf("\n");break;
            case 5: printf("  TABLA DEL CINCO \n\n");
            for(j=0; j<=10; j++)
             {
                tabla5 = 5*j;
                printf("\t5 * %d = %d \n", j, tabla5);
            }
            printf("\n");break;
            case 6: printf("  TABLA DEL SEIS \n\n");
            for(j=0; j<=10; j++)
             {
                tabla6 = 6*j;
                printf("\t6 * %d = %d \n", j, tabla6);
            }
            printf("\n");break;
            case 7: printf("  TABLA DEL SIETE \n\n");
            for(j=0; j<=10; j++)
             {
                tabla7 = 7*j;
                printf("\t7 * %d = %d \n", j, tabla7);
            }
            printf("\n");break;
            case 8: printf("  TABLA DEL OCHO \n\n");
            for(j=0; j<=10; j++)
             {
                tabla8 = 8*j;
                printf("\t8 * %d = %d \n", j, tabla8);
            }
            printf("\n");break;
            case 9: printf("  TABLA DEL NUEVE \n\n");
            for(j=0; j<=10; j++)
             {
                tabla9 = 9*j;
                printf("\t9 * %d = %d \n", j, tabla9);
            }
            printf("\n");break;
            case 10: printf("  TABLA DEL DIEZ \n\n");
            for(j=0; j<=10; j++)
             {
                tabla10 = 10*j;
                printf("\t10 * %d = %d \n", j, tabla10);
            }
            printf("\n");break;
        }
     }
    return 0;
}

