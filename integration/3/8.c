#include<stdio.h>
#include<stdlib.h>
#include<math.h>

#define f(x) 1/(1+x*x)

int main(){
    int n,j;

    system("CLS");
    printf("Name: Priyanshu Bisht\nRoll No.42\nSection: h2\n\n");

    printf("Enter no. of terms::");
    scanf("%d",&n);
    float a,b,h,sum=0,i,sm=0,snm=0;
    printf("\nEnter a and b::");
    scanf("%f %f",&a,&b);

    h = fabs(b-a)/n;

    //for multiples
    for(i=a+3*h;i<b; i+= 3*h){
        sum = sum+f(i);
    }

    sm = 2*sum;

    sum=0;
    //for non multiples
    for(j=0; j<n; j++){
        if(j%3!=0)
            sum = sum + f(j*h);
    }

    snm = 3*sum;

    sum = f(a) + f(b);

    sum = (3*h*(sum+snm+sm))/8;

    printf("\nAns =%.3f",sum);


    return 0;

}