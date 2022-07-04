#include<stdio.h>
#include<conio.h>

void readmat(int x[][5],int m,int n){
    int i,j;
    for (i=0;i<m;i++)
        for (j=0;j<m;j++)
            scanf("%d",&x[i][j]);
}

void addmat(int x[][5],int y[][5],int z[][5],int m,int n){
    int i,j;
    for (i=0;i<m;i++)
        for (j=0;j<m;j++)
            z[i][j]=x[i][j]+y[i][j];
}

void submat(int x[][5],int y[][5],int z[][5],int m,int n){
    int i,j;
    for (i=0;i<m;i++)
        for (j=0;j<m;j++)
            z[i][j]=x[i][j]-y[i][j];
}

void printmat(int x[][5],int m,int n){
    int i,j;
    for (i=0;i<m;i++){
        for (j=0;j<m;j++){
            printf("%d",x[i][j]);
            printf(" ");}
        printf("\n");
    }
}

int main()
{
   float num1, num2, res;
   int choice1,choice2,choice3,m,n,A[5][5],B[5][5],C[5][5];
   do
   {
    printf("1.Simple calculator\n");
    printf("2.Matrix Calculator\n");
    printf("3.Exit");
    printf("\n\n");
    printf("Enter Your Choice(1-3): ");
    scanf("%d",&choice1);
    switch (choice1)
    {
    case 1:
        do
        {
            printf("1. Addition\n");
            printf("2. Subtraction\n");
            printf("3. Multiplication\n");
            printf("4. Division\n");
            printf("5. Exit\n\n");
            printf("Enter Your Choice(1-5): ");
            scanf("%d", &choice2);
            if(choice2>=1 && choice2<=4)
            {
                printf("\nEnter any two Numbers: ");
                scanf("%f %f", &num1, &num2);
            }
            switch(choice2)
            {
                case 1:
                    res = num1+num2;
                    printf("\nResult = %0.2f", res);
                    break;
                case 2:
                    res = num1-num2;
                    printf("\nResult = %0.2f", res);
                    break;
                case 3:
                    res = num1*num2;
                    printf("\nResult = %0.2f", res);
                    break;
                case 4:
                    res = num1/num2;
                    printf("\nResult = %0.2f", res);
                    break;
                case 5:
                    return 0;
                default:
                    printf("\nWrong Choice!");
                    break;
            }
            printf("\n------------------------\n");
        }while(choice2!=5);
        getch();
        break;
    case 2:
        do
        {
            printf("1. Addition\n");
            printf("2. Subtraction\n");
            printf("3. Exit\n\n");
            printf("Enter Your Choice(1-3): ");
            scanf("%d", &choice3);
            if(choice3>=1 && choice3<=2)
            {
                printf("\nEnter the order of the matrix: ");
                scanf("%d%d", &m, &n);
                printf("\nEnter the first matrix\n");
                readmat(A,m,n);
                printf("\nEnter the second  matrix\n");
                readmat(B,m,n);
            }
            switch (choice3)
            {
            case 1:
                addmat(A,B,C,m,n);
                printf("\nResult = \n");
                printmat(C,m,n);
                break;
            case 2:
                submat(A,B,C,m,n);
                printf("\nResult = \n");
                printmat(C,m,n);
            }
        } while (choice3!=3);
        
    }
   } while (choice1!=3);
   
   return 0;
}