#include<stdio.h>



int main(){
    int idade,total=0,total_m=0,total_f=0,total_f2=0, total_m2=0, maior_i=0;
    char sexo,cor_o,cor_c;

    do{
        scanf("%d",&idade);

        if(idade<=0) break;

        scanf("%c %c %c",&sexo,&cor_o,&cor_c);

        if(total==0) maior_i += idade;
        if(idade> maior_i) maior_i = idade;

        if(sexo == 'F'){
            total_f+=1;

            if(idade > 18 && idade< 40 )
                if(cor_c == 'P' || cor_c == 'L') total_f2+=1;
        }

        if(sexo == 'M'){
            total_m+=1;
            if(idade > 18 && idade< 40 )
                if(cor_o == 'V') total_m2+=1;
        }

        total+=1;

    }while(idade>0);

        printf("total hab: %d\ntotal fem: %d\n total mas: %d\n maior_i: %d\n perc_f: %d\n perc_m: %d",total, total_f, total_m, maior_i,(total_f2/total_f)*100, (total_m2/total_m)*100);

    return 0;
}