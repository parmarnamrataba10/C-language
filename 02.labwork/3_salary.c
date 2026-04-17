
#include<stdio.h>

int main (){

    
    float  baseSalary, HRA,DA,TA , GrossSalary;

  printf(" enter baseSalary");
  
  scanf("%f",&baseSalary);

  printf("enter house rent allowance");

  scanf("%f",&HRA);

  printf("enter dearness allowance");

  scanf("%f",& DA);

  printf(" enter travel allowance");

  scanf("%f",&TA);


  float hraPer,daPer,taPer;

   hraPer=100 * HRA/100;
   daPer=100 * DA/100;
   taPer=100* TA/100;

   GrossSalary= baseSalary + hraPer+ daPer+ taPer ;

 
//   GrossSalary=baseSalary*(1+(HRA+DA+TA)/100);

  printf("gross salary is %.2f",&GrossSalary);
  return 0;




}


