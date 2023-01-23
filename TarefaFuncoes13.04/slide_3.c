#include<stdio.h>
 float media_final(float n1, float n2, float n3, float n4)
 {
     float mf;
     mf = (n1 + n2 + n3 + n4)/4;
     return mf;
 }
 main()
 {
     float n1, n2, n3, n4, media;
     printf("informe uma nota:\n");
     scanf("%f", &n1);
     printf("informe uma nota:\n");
     scanf("%f", &n2);
     printf("informe uma nota:\n");
     scanf("%f", &n3);
     printf("informe uma nota:\n");
     scanf("%f", &n4);
     media = media_final(n1, n2, n3, n4);
     printf("a media foi de %.2f", media);
     }
