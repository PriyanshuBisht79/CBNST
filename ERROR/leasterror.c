//For 1/3 approximated value is given 0.30, 0.33, 0.34. Find the best approximated value.
#include<stdio.h>
#include<math.h>

int main(){
    system("CLS");
    printf("Name: Priyanshu Bisht\nRoll No.42\nSection: h2\n\n");
    double exactVal = 1.0/3.0;
    double approxVal[]={0.30,0.33,0.34};
    
    int n = sizeof(approxVal)/sizeof(approxVal[0]);
    double bestApproxValue = approxVal[0];
    double minError = fabs(exactVal-approxVal[0]);

    printf("Exact Value of 1/3:%1f\n",exactVal);

    for(int i=0; i<n; i++){
        double currentError = fabs(exactVal - approxVal[i]);

        printf("Approximate Value:%1f,Absolute Error:%1f\n",approxVal[i],currentError);

        if(currentError < minError){
            minError = currentError;
            bestApproxValue = approxVal[i];
        }
    }

    printf("\nBeast approximate value: %1f\n",bestApproxValue);
    printf("\nWith Minimum Error: %1f\n",minError);


}