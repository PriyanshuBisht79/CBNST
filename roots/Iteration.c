#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>

#define f(x) cos(x) - 3*x + 1
#define g(x) (cos(x)+1)/3

int main(){
    int step=1, N;
    float x0,x1,e;
    system("CLS");
    
    printf("Name: Priyanshu Bisht\nRoll No.42\nSection: h2\n\n");

    printf("Enter Initial Gusses:\n");
    scanf("%f",&x0);
    printf("Enter Tolerable error:\n");
    scanf("%f",&e);
    printf("Enter maximum iteration:\n");
    scanf("%d",&N);

    printf("Step\t\tx0\t\tf(x0)\t\tx1\t\tf(x1)\n");

    do{
        x1 = g(x0);
        printf("%d\t\t%f\t%f\t%f\t%f\n",step,x0,f(x0),x1,f(x1));
        step++;

        if(step>N){
            printf("Not Convergent.\n");
            exit(0);
        }

        x0=x1;


    }while(fabs(f(x1))>e);


    printf("\nRoot is %f",x1);
    
    getch();
    return 0;
}