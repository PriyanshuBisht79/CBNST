// 3 2 1 1 10 3 2 3 18 1 4 9 16 

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<conio.h>

int n;
void convertToUpperTriangular(float a[][n+1], int n){
    int i,j,k,y,x;
    float ratio;


    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(j>i){
                ratio = a[j][i]/a[i][i];
                for(k=0;k<n+1;k++){
                    a[j][k] = a[j][k] - (ratio * a[i][k]);
                }
                printf("Intermediate forms:\n");
                for(x=0;x<n;x++){
                    for(y=0;y<n+1;y++){
                        printf("%.2f ",a[x][y]);
                    }
                    printf("\n");
                }
                printf("\n");
            }
        }
    }
}

void applyBackSubstitution(float a[][n+1],float value[],int n){
    int i,j;
    float sum;
    value[n-1] = a[n-1][n]/a[n-1][n-1];

    for(i=n-2;i>=0;i--){
        sum=0;
        for(j=i+1; j<n;j++){
            sum= sum+a[i][j]* value[j];
        }
        value[i] = (a[i][n]-sum)/a[i][i];
    }
}

void print(float value[],int n){
    int i;
    printf("Values of unknowns are:\n");
    for(i=0;i<n;i++){
        printf("Value[%d]=%f\n", i, value[i]);
    }
}


int main(void){
    int i,j,k,x,y;
    float sum,ratio;
    
    system("CLS");
    printf("Name: Priyanshu Bisht\nRoll No.42\nSection: h2\n\n");
    printf("Enter no. the unknowns::");
    scanf("%d",&n);
    float a[n][n+1],value[n];
    printf("Enter the augmented Matrix\n");
    for(i=0; i<n;i++){
        for(j=0;j<n+1;j++){
            scanf("%f",&a[i][j]);
        }
    }

    convertToUpperTriangular(a,n);
    applyBackSubstitution(a,value,n);
    print(value,n);
    return 0;
}