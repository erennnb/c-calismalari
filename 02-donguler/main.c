#include <stdio.h>
#include <stdlib.h>

int main() {


    int i, girilen_sayi,sonuc,girilen_sayi2,sayi,toplam;
    float ortalama;


//KONU TEKRARI
/*

    //while
    while (i<=5)
    {
        printf("%d\n",i);
        i=i+1;
    }
    printf("----------------------------");
    // do-while
    do
    {
        printf("\n\n\n%d\n\n",i);
        i++;
    } while (i<1);



    printf("----------------------------\n");

    //for

    for ( i = 0; i <= 10; i++)
    {
        printf("i = %d\n", i);
    }

*/


    //// ORNEK PROGRAM(carpim tablosu)
    printf("-------------------------------------------\n");

    i = 1;


    printf("1-10 araliginda bir sayi giriniz:");
    scanf("%d", &girilen_sayi);
    if (girilen_sayi<0 || girilen_sayi>10)
    {
        printf("Girilen sayih hatalidir.");
        return 0;
    }
    
    for ( i = 1; i <= 10; i++)
    {
        sonuc = i*girilen_sayi;
        printf("%d X %d = %d\n",i,girilen_sayi,sonuc);
    }
    



    printf("-------------------------------------------\n\n\n");






//  ----------------- girilen sayıların ortalamasını alma. -----------------------



    printf("Kac adet sayi girilecek:");
    scanf("%d",&girilen_sayi2);


    if (girilen_sayi2 <= 0)
    {
        printf("Hatali sayi adedi!");
        return 0;
    }


    toplam = 0;


    for ( int a = 1; a <= girilen_sayi2; a++)
    {
        printf("%d. Sayiyi Giriniz:",a);
        scanf("%d",&sayi);
        toplam+=sayi;




    }
    ortalama = (float)toplam / girilen_sayi2;
    printf("Girilen sayilarin toplami = %d\n",toplam);
    printf("Girilen sayilarin ortalamasi = %.2f",ortalama);
    




    printf("-------------------------------------------\n\n\n");


    



    
    return 0;
}