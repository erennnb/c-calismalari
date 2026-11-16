/*
    ornek 1:

    hesap makinesi 2 tane sayi ile


*/

#include <stdio.h>

int main(void)
{
    int secim;
    float sayi1,sayi2,sonuc;


    printf("enter a first number:");
    scanf("%f", &sayi1);

    printf("enter a seconder number:");
    scanf("%f", &sayi2);
    if (sayi1 < 0 || sayi2 < 0)
    {
        printf("Invalid operation. Please enter positive numbers!\n");
        return 0;
    }



    printf("Please choose a number:\n");
    printf("-----\n1.Toplama\n2.Carpma\n3.Cikarma\n4.Bolme\n-----");
    scanf("%d", &secim);


    
    switch (secim)
    {
    case 1:
        sonuc = sayi1+sayi2;
        printf("Sonuc = %.2f",sonuc);
        break;
    case 2:
        sonuc = sayi1*sayi2;
        printf("Sonuc = %.2f",sonuc);
        break;
    case 3:
        sonuc = sayi1-sayi2;
        printf("Sonuc = %.2f",sonuc);
        break;
    case 4:
        if (sayi1==0)
        {
            printf("Gecersiz islem.");
            return 0;
        }
        sonuc = sayi1/sayi2;
        printf("Sonuc = %.2f",sonuc);
        break;
    default: printf("Invalid operation. Please 1-4 enter a number!");
        break;
    }














    return 0;
}