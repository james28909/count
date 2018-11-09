#include <stdio.h>
#include <stdlib.h>

int main( int argc, char**argv ) {

    FILE * fp;
      int frequency [256] = {0};
      int i = 0;
      int chr;
      fp = fopen( argv [1], "rb" );

      if ( fp == 0 ) {
        printf("File failed to open");
        exit(1);
    }

    while ( ( chr = getc(fp) ) != EOF ) {
        frequency [chr] ++;
    }
    fclose(fp);

      for ( i ; i <= 255 ; i++ ) {
        printf( "0x%02X %d\n", i, frequency [i] );
    }

  }