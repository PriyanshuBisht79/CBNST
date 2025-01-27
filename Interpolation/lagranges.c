// 4 5 6 9 11 12 13 14 16 10
#include<stdio.h>

int main(){
    int n;

    system("CLS");
    printf("Name: Priyanshu Bisht\nRoll No.42\nSection: h2\n\n");
    
    printf("Enter no. of terms\n");
    scanf("%d",&n);

    float x[n],y[n],X,sum=0,term;

    int i,j;

   

    printf("Enter Value of X\n");

    for(i=0;i<n;i++){
        scanf("%f",&x[i]);
    }

    printf("Enter Value of Y\n");

    for(i=0;i<n;i++){
        scanf("%f",&y[i]);
    }

    printf("Enter vlaue of x for which you want y\n");
    scanf("%f",&X);

    for(i=0;i<n;i++){
        term=1;
        for(j=0;j<n;j++){
            if(i!=j)
                term = term * ((X-x[j])/(x[i]-x[j]));
        }
        sum = sum + term*y[i];
    }
    printf("\nValue at X=%g is = %f",X,sum);

}