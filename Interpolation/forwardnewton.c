//1891 1901 1911 1921 1931
//46 66 81 93 101

#include<stdio.h>
#include<math.h>
#include<conio.h>
#include<stdlib.h>

int main(){
    int n,fact;
    float a[100][100],x,u,u1,h,y;
    system("CLS");
    printf("Name: Priyanshu Bisht\nRoll No.42\nSection: h2\n\n");
    
    printf("Enter the total no. of values::");
    scanf("%d",&n);


    //input x 
    printf("\nEnter x values::");
    for(int i=0;i<n; i++){
        scanf("%f",&a[i][0]);
    }

    //input y
    printf("\nEnter y values::");
    
    for(int i=0;i<n; i++){
        scanf("%f",&a[i][1]);
    }

    printf("\nenter x for which we want f(x):");
    scanf("%f",&x);

    //create difference table

    for(int j=2; j<=n; j++){
        for(int i=0; i<n-j+1; i++){
            a[i][j]=a[i+1][j-1] - a[i][j-1];
        }
    }

    //print difference table

    for(int i=0; i<n; i++){
        for(int j=0; j<=n-i; j++){
            printf("%.2f ",a[i][j]);
        }   
        printf("\n");
    }
    
    //calculating u
    h = a[1][0]-a[0][0];
    u=  (x - a[0][0])/h;
    
    //final answer
    
    y= a[0][1];
    u1=u;
    fact=1;
    for(int i=2;i<=n; i++){
        
        y = y+(u1*a[0][i])/fact;
        //update fact and u
        fact = fact*i;
        u1=u1*(u-(i-1));

    }

    printf("\nY(%g):%.2f",x,y);
}