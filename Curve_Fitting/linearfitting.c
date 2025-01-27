//4 61 350 26 400 7 500 2.6 600 
//5 0 1 1 1.8 2 3.3 3 4.5 4 6.3
#include<stdio.h>
#include<stdlib.h>
int main(){
    
    int n;
    system("CLS");
    printf("Name: Priyanshu Bisht\nRoll No.42\nSection: h2\n\n");
    printf("enter the value of n::");
    scanf("%d",&n);
    float Ex=0,Ey=0,Ex2=0,Exy=0,x=0,y=0;
    for(int i=0;i<n;i++){
        printf("enter value of x%d::\n",i+1);
        scanf("%f",&x);
        printf("enter value of y%d::\n",i+1);
        scanf("%f",&y);
        Ex=Ex+x;
        Ey=Ey+y;
        Ex2=Ex2+(x*x);
        Exy=Exy+(x*y);
    }
    float a,b;
    b=((n*Exy)-(Ex*Ey))/( (n*Ex2) - (Ex*Ex) );
    a= (Ey - b*Ex)/n;
    
    printf("Ex\t\tEy\t\tExy\t\tEx^2\n");
    printf("%.2f\t\t%.2f\t\t%.2f\t\t%.2f\n",Ex,Ey,Exy,Ex2);
    printf("a=%f\t\tb=%f\n",a,b);
    printf("y=%.2f + %.2fx",a,b);
    return 0;
    
}