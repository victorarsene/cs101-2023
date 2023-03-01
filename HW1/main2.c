#include <stdio.h>

int main() {
    char input[] = "A3BB2CCC2";  
    char output[100];           
    int output_index = 0;       

    for (int i = 0; input[i] != '\0'; i++) {
        if (input[i] >= '0' && input[i] <= '9') {  
            int repeat = input[i] - '0';           
            for (int j = 0; j < repeat; j++) {    
                output[output_index++] = input[i-1];
            }
        }
    }

    output[output_index] = '\0';  
    printf("%s\n", output);       

    return 0;
}
