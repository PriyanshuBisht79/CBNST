//5 1891 1901 1911 1921 1931 46 66 81 93 101 1925
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<conio.h>

int main(){
    int n,fact,j;
    float a[100][100],u,u1,x,y,h;
    //x=0,y=1,y1=2,y2=3,y3=4
    system("CLS");
    printf("Name: Priyanshu Bisht\nRoll No.42\nSection: h2\n\n");
    printf ("Enter the number of values");
    scanf("%d",&n);

    
    //input x values
    printf("\nEnter x values::");
    for(int i=0;i<n; i++){
        scanf("%f",&a[i][0]);
    }


     //input y
    printf("\nEnter y values::");
    for(int i=0;i<n; i++){
        scanf("%f",&a[i][1]);
    }

    //input x
    printf("\nenter x for which we want f(x):");
    scanf("%f",&x);


     //create difference table
     for(int j=2; j<n+1; j++){
        for(int i=0;i<n-j+1; i++){
            a[i][j] = a[i+1][j-1]-a[i][j-1];
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
     h=a[1][0]-a[0][0];
     u = (x-a[n-1][0])/h;
     y=a[n-1][1];

     u1=u;
     fact=1;
     j=2;

     for(int i=n-2;i>=0;i--){

        y = y + (u1*a[i][j])/fact;

        //updating fact and u1; 
        fact=fact*j;
        u1=u1*(u+(j-1));
        j++;
     }

    printf("\nY(%g):%.2f",x,y);
}