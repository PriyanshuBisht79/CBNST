#include<stdio.h>
#include<stdlib.h>
#include<math.h>

#define f(x,y) x+y

int main(void){
    int n,i;
    float y0,x0,xn,h,yn,slope;

    
    system("CLS");
    printf("Name: Priyanshu Bisht\nRoll No.42\nSection: h2\n\n");

    printf("Enter the value of x0 & y0::");
    scanf("%f%f",&x0,&y0);

    printf("\nEnter the calculation point xn::");
    scanf("%f",&xn);

    printf("\nEnter the number of steps::");
    scanf("%d",&n);

    h = (xn-x0)/n;
    //euler 

    printf("\nx0\ty0\tslope\tyn\n");
    printf("------------------------------\n");
    for(i=0;i<n;i++){
        slope = f(x0,y0);

        yn=y0+h*slope;
        printf("%.4f\t%.4f\t%0.4f\t%.4f\n",x0,y0,slope,yn);
        
        x0+=h;
        y0=yn;
    }


   printf("\nValue of y at x = %0.2f is %0.3f",xn, yn);

   return 0;


}