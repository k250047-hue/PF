#include <stdio.h>
#include <string.h>

int main() {
    char ice_cream_flavour[20];

    printf("Choose your flavour\n1. Vanilla\n2. Chocolate\n3. Strawberry\n");
    scanf("%s", ice_cream_flavour);

    if (strcmp(ice_cream_flavour, "vanilla") == 0) {
        printf("vanilla");
    } else if (strcmp(ice_cream_flavour, "chocolate") == 0) {
        printf("chocolate");
    } else if (strcmp(ice_cream_flavour, "strawberry") == 0) {
        printf("strawberry");
    } else {
        printf("Invalid flavour");
    }

    return 0;
}

