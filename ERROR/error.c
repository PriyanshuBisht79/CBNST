//To find the absolute error, relative error, percentage error for the approximated value of √2 is 1.414
#include<stdio.h>
#include<math.h>
int main(){
    system("CLS");
    printf("Name: Priyanshu Bisht\nRoll No.42\nSection: h2\n\n");
    double true_val = sqrt(2.0);
    double approx_val = 1.414;

    double ea = fabs(true_val-approx_val);
    double er = ea/true_val;
    double ep = er*100; 
    float abs_err,rel_err,percentage_err;
   
    
    printf("\nExact value of sqrt(2):%f\n",true_val);
    printf("\nApproximate value of sqrt(2):%1f\n",approx_val);
    printf("\nAbsolute Error:%1f\n",ea);
    printf("\nRelative Error:%1f\n",er);
    printf("\nPercentage Error:%1f\n",ep);
    
}