#include <stdio.h>

int main(){
    float h_trab, sal_h, tot_desc, sal_b, sal_l;

    scanf("%f%f%f", &h_trab, &sal_h, &tot_desc);
    
    sal_b= h_trab*sal_h;
    sal_l= sal_b-tot_desc;

    printf("O salario bruto e: %f\n O salario liquido e: %f", sal_b, sal_l);

    return 0;
}