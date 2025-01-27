#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<conio.h>

#define f(x) 3*x - cos(x) -1
#define g(x) 3 + sin(x) 

int main(){
    float x0,x1,f0,f1,g0,e;
    int step =1,N;
    system("CLS");

    printf("Name: Priyanshu Bisht\nRoll No.42\nSection: h2\n");

    printf("Enter two initial gusses: ");
    scanf("%f",&x0);
    printf("\nEnter tolerable error: ");
    scanf("%f",&e);
    printf("\nEnter Maximum iteration: ");
    scanf("%d",&N);

    printf("\nStep\t\tx0\t\tf(x0)\t\tx1\t\tf(x1)\n");

    do{

        g0 = g(x0);
        f0 = f(x0);

        if(g0==0.0){
            printf("\nmathhematical error");
            exit(0);
        }

        x1 = x0 - f0/g0;

        printf("%d\t\t%f\t%f\t%f\t%f\n",step,x0,f0,x1,f1);
        x0=x1;


        if(step++>N){
            printf("\nNot Convergent.");
            exit(0);
        }

        f1 = f(x1);

    }while(fabs(f1)>e);

    printf("\nRoot is: %f",x1);

    getch();

}