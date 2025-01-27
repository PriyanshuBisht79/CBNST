#include<stdio.h>
#include<stdlib.h>
#include<math.h>

#define f(x) 1/(1+x*x)

int main(){
    int n;

    system("CLS");
    printf("Name: Priyanshu Bisht\nRoll No.42\nSection: h2\n\n");

    printf("Enter no. of terms::");
    scanf("%d",&n);
    float a,b,h,sum=0,i,so=0,se=0;
    printf("\nEnter a and b::");
    scanf("%f %f",&a,&b);

    h = fabs(b-a)/n;

    //odd term sum
    for(i=a+h;i<b;i += 2*h){
        sum = sum+f(i);
    }

    so = 4*sum;


    sum=0;
    //Even term sum
    for(i=a+2*h; i<b; i+=2*h){
        sum = sum + f(i);
    }

    se = 2*sum;

    sum = f(a) + f(b);

    //final sum
    sum = (h*(sum+se+so))/3;

    printf("\nAns =%.3f",sum);


    return 0;



}