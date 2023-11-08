#include<stdio.h>

typedef struct deshpande
{
    int dv;int dm;int dy;
}king;

int vyank_date_(king* k)
{  
    if(k[0].dv<32 && 0<k[0].dv && k[0].dm<13 && 0<k[0].dm && 0<k[0].dy && k[1].dv<32 && 0<k[1].dv && k[1].dm<13 && 0<k[1].dm && 0<k[1].dy)
    {
        printf("Dates are valid\n");
        return 1;
    }
  else{        printf("Dates are not valid\n");}
  return 0;
}

void deshp_date_equal(king*p)
{
    if(p[0].dm==p[1].dm &&p[0].dv==p[1].dv&&p[0].dy==p[1].dy )
    {
        printf("Dates are equal\n");
    }
    else{printf("Dates are not equal\n");}
}

int main() {
    king no1[2];
    
    for (int b=0;b<2;b++)
    {
       scanf("%d%d%d",&no1[b].dv,&no1[b].dm,&no1[b].dy);   
    }


if(vyank_date_(no1)==1){deshp_date_equal(no1);}

    return 0;
}
