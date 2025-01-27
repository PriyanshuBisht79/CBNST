//1 2 3 -1 10 2 3 -3 -1 1 2 -1 2 3 7 3 2 -4 3 2
//1 2 3 -1 10 2 3 -3 -1 1 2 -1 2 3 7 3 2 -4 3 2
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<conio.h>

#define size 10

int main(){
    float a[size][size],x[size],ratio;
    int i,j,k,n;
    printf("Name: Priyanshu Bisht\nRoll No.42\nSection: h2\n\n");
    system("CLS");

    printf("Enter number of unknowns: ");
    scanf("%d",&n);

    printf("Enter coeffients of Augenmented Matrix:\n");
    for(i=1; i<=n; i++){
        for(j=1;j<=n+1;j++){
            printf("a[%d][%d] = ",i,j);
            scanf("%f",&a[i][j]);
        }
    }

    for(i=1; i<=n;i++){
        if(a[i][i]==0.0){
            printf("Mathematical Error!");
            exit(0);
        }
        for(j=1; j<=n; j++){
            if(i!=j){
                ratio = a[j][i]/a[i][i];
                for(k=1; k<=n+1; k++){
                    a[j][k] = a[j][k] - ratio * a[i][k];
                }
            }
        }
    }

    for(i=1; i<=n; i++){
        x[i]=a[i][n+1]/a[i][i];
    }

    printf("\nSolution:\n");
    for(i=1;i<=n; i++){
        printf("x[%d] = %0.3f\n",i,x[i]);
    }
    getch();
    return 0;
}
