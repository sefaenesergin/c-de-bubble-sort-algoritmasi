//SEFA ENES ERGİN-sefaenesergin@gmail.com
#include<stdio.h>
void dizi_goster( int *, int ); //fonksiyonun imzası.
void kabarcik_siralamasi( int [ ], int ); /* 'int[]' yerine 'int *' da yazılabilir. Çünkü her bir dizi bir pointerdir.*/
int main( void )
{
    int dizi[ 8 ] = { 7, 3, 66, 3,
             -5, 22, -77, 2 };

    
    kabarcik_siralamasi( dizi, 8 );/* Siralama islemi icin fonksiyonu cagriyoruz.*/
    dizi_goster( dizi, 8 );// sonucu göstermek için fonk. çağırdık.
    return 0;
}

void dizi_goster( int dizi[ ], int boyut )
{
    int i;
    for( i = 0; i < boyut; i++ ) {
        printf("%d ",dizi[i]);
    }
    printf("\n");
}

void kabarcik_siralamasi( int dizi[ ], int boyut )
{
    //Bubble sort algoritmasını kullanarak sıralama yapar.
    int i, j, temp;
    /* Ilk dongu asama sayisini temsil ediyor.
     Bu donguye gore, ornegin boyutu 8 olan
     bir dizi icin 7 asama gerceklesir.*/
    for( i = 0; i < boyut-1; i++ ) {
        /* Ikinci dongu, her asamada yapilan
         islemi temsil eder. Dizinin elemanlari
         en sondan baslayarak kontrol edilir.
         Eger kendisinden once gelen elemandan
         kucuk bir degeri varsa, elemanlarin
         degerleri yer degistirir.*/
        for( j = boyut - 1; j > i; j-- )  {
            if( dizi[ j ] < dizi[ j - 1 ] ) {
                temp = dizi[ j -1 ];
                dizi[ j - 1 ] = dizi[ j ];
                dizi[ j ] = temp;
            }

        }
    }
}
