#include <stdio.h>

void decimalToBinary(int num) {   
    if (num == 0) {
        printf("0");
        return;
    }
   
   // Stores binary representation of number.
   int binaryNum[32]; // Assuming 32 bit integer.
   int i=0;
   
   for ( ;num > 0; ){
      binaryNum[i++] = num % 2;
      num /= 2;
   }
   
   // Printing array in reverse order.
   for (int j = i-1; j >= 0; j--)
      printf("%d", binaryNum[j]);
}

int main(void){
    int nombre;
    printf("saisir nombre entier : ");
    scanf("%d", &nombre);

    decimalToBinary(num);
    return 0;
}

// car on multiplie 5 par 1 ensuite par 2 jusqua 4