#include<stdio.h>
#include<stdlib.h>
#include<math.h>

float findValueAt(float x){
    return x*x*x;
}

int main(){
    int n;
    float i,a,b,h,sum=0;

    system("CLS");
    printf("Name: Priyanshu Bisht\nRoll No.42\nSection: h2\n\n");

    printf("Enter values of a and b::");
    scanf("%f%f",&a,&b);
    printf("\nEnter the number of elements::");
    scanf("%d",&n);

    h=fabs(b-a)/n;

    sum = findValueAt(a)+findValueAt(b);
    for(i=a+h;i<b;i+=h){
        sum += 2*(findValueAt(i));
    }

    sum = (h*sum)/2;

    printf("\nValue of integral = %f",sum);
}