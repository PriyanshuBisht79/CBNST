#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<conio.h>

#define f(x) cos(x) - x * exp(x)

void main(){
    float x0,x1,x2,f0,f1,f2,e;
    int step=1;

    system("CLS");
    printf("Name: Priyanshu Bisht\nRoll No.42\nSection: h2\n\n");
    up:
    printf("Enter two initial gusses:\n");
    scanf("%f %f", &x0, &x1);
    printf("Enter two tolerable error:\n");
    scanf("%f",&e);

    f0 = f(x0);
    f1 = f(x1);

    printf("\n%f\t%f",f0,f1);

    if(f0 * f1>0.0){
        printf("Incorrect Initial Gusses.\n");
        goto up;
    }

    printf("\nStep\t\tx0\t\tx1\t\tx2\t\tf(x2)\n");

    do{
        x2=(x0 + x1)/2;
        f2 = f(x2);

        printf("%d\t\t%f\t%f\t%f\t%f\n",step, x0, x1, x2, f2);

        if(f0*f2<0){
            x1=x2;
            f1=f2;
        }else{
            x0 = x2;
            f0 = f2;
        }

        step++;
    }while(fabs(f2)>e);

    printf("\nRoot is: %f", x2);
    getch();
}