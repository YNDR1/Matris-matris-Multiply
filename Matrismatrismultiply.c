#include <stdio.h>
#include <stdlib.h>
 #include <time.h>
 

void matrisOlustur (int boyut, float **d1, float **d2 ){
    
    srand(time(0));
    int i , j;
      for(i = 0; i < boyut; i++){
        for(j = 0; j < boyut; j++){
          
            (d1[i][j]) == rand()%10 ;
           
            }
        }
        printf("Matris 1 olusturuldu\n");

        for(i = 0; i < boyut; i++){
        for(j = 0; j < boyut; j++){
         int r =rand();
            d2[i][j] ==r ;
         
          
		   }

}
printf("Matris 2 olusturuldu\n");
}

float matrisMatrisMultiply(float **d1, float **d2, float **d3, int boyut){
        int deger ,i, j, k;
        for(i = 0; i<boyut; i++){
        for(j = 0; j<boyut; j++){
            deger = 0;
            for(k = 0; k<boyut; k++){
                d3[i][j] += d1[i][k]*d2[k][j] ;
              
                }
          
            }

    }
    printf("carpildi\n");
    return **d3;
}



int main(void){
 
	time_t basla, son ;
    
  int boyut , i;
   printf("matris boyutunu giriniz");
    scanf("%d", &boyut);
    
    float **d1 = (float **)malloc(boyut * sizeof(float *));
    float **d2 = (float **)malloc(boyut * sizeof(float *));
    float **d3 = (float **)malloc(boyut * sizeof(float *));

    for(i = 0; i<boyut; i++){
        d1[i] = (float *)malloc( boyut * sizeof(float));
        d2[i] = (float *)malloc( boyut * sizeof(float));
        d3[i] = (float *)malloc( boyut * sizeof(float));
    }
 
   matrisOlustur(boyut,d1,d2);
   basla = time(NULL) ;
   matrisMatrisMultiply(d1,d2,d3,boyut);
   son = time(NULL);
    printf("gecen sure = %.2f\n", difftime(son,basla));
    printf(" boyut = %d\n\a",boyut);
    printf("\a");
    printf("\a");
    return 0;
}

