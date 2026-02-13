#include <stdio.h>
#include <stdint.h>

// Library for debugging - <assert.h>
// assert(condition) -> condition must be true, otherwise program ends with error

void printBits(uint8_t bits){
    for(int i=7; i>=0; i--){
        printf("%d",(bits >> i) & 1);
    }
    printf(" value:%d\n",bits);
}

int main(){
    uint8_t bits = 1;
    printBits(bits);

    // Setting bit n
    // OR-ing the value with 2^n (1 << n)

    bits |= 1u << 2;
    printBits(bits);
    
    // Clearing bit n
    // AND-ing the value with not 2^n ~(1 << n)

    bits &= ~(1u << 0);
    printBits(bits);

    // Flipping bit n
    // XOR-ing the value with 2^n (1 << n)

    bits ^= 1u << 4;
    printBits(bits);

    // Checking bit n
    // AND-ing the value with 2^n (1 << n)

    printf("5th bit value:%d\n",(bits & (1u << 4)) != 0);
    printf("5th bit value:%d\n",(bits >> 4) & 1);

    return 0;
}