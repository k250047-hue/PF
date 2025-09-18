#include <stdio.h>
#include <string.h>

int main() {
    int flavorchoice, scoops, cone, day, age, payment;
    char sprinkles, flavor[20],cone_type[20];
    float total = 0.00;
    int Discount = 0, childDiscount = 0, Topping = 0, cardFee = 0;

    printf("Choose a flavor:\n");
    printf("1. Vanilla\n2. Chocolate\n3. Strawberry\n");
    scanf("%d", &flavorchoice);

    switch (flavorchoice) {
        case 1: strcpy(flavor, "Vanilla"); break;
        case 2: strcpy(flavor, "Chocolate"); break;
        case 3: strcpy(flavor, "Strawberry"); break;
        default: strcpy(flavor, "Invalid"); 
        printf("Invalid flavor\n"); break;
    }

    // 2 & 3. Scoops and base pricing
    printf("How many scoops do you want (1, 2, or 3): ");
    scanf("%d", &scoops);

    switch (scoops) {
        case 1: total += 2.00; break;
        case 2: total += 3.50; break;
        case 3: total += 4.50; break;
        default: 
            printf("Invalid scoop number. Defaulting to 1 scoop.\n");
            scoops = 1;
            total += 2.00;
            break;
    }

    // 4. Cone type
    printf("Choose the cone type:\n");
    printf("1. Regular Cone (+$0.50)\n2. Waffle Cone (+$1.00)\n");
    scanf("%d", &cone);


    if (cone == 1) {
       strcpy(cone_type, "Regular Cone");
       printf("you choose regular cone\n");
        total += 0.50;
    } else if (cone == 2) {
        strcpy(cone_type, "Waffle Cone");
         total += 1.00;
         printf("you choose waffle cone\n");
    } else {
        printf("Invalid cone type. Defaulting to Regular Cone.\n");
        strcpy(cone, "Regular Cone");
        total += 0.50;
    }

    // 5. Sprinkles
    printf("\nDo you want sprinkles? (Y/N): ");
    scanf(" %c", &sprinkles);
    if (sprinkles == 'Y' || sprinkles == 'y') {
        total += 0.75;
    }

    // 6. Weekend discount
    printf("What day is it? (1=Mon ... 7=Sun): ");
    scanf("%d", &day);
    if (day == 6 || day == 7) {
        total *= 0.90;  // Apply 10% discount
        Discount = 1;
    }

    // 7. Child discount
    printf("Enter your age: ");
    scanf("%d", &age);
    if (age < 12) {
        total -= 1.00;
        childDiscount = 1;
    }

    // 8. Free topping offer
    if (scoops == 3 && cone == 2) {
       Topping = 1;
       printf("you got a free topping");
    }

    // 9. Payment method
    printf("Payment method:\n");
    printf("1. Cash\n2. Card (+$0.50 fee)\n");
    printf("Enter choice (1-2): ");
    scanf("%d", &payment);

    if (payment == 2) {
        total += 0.50;
        cardFee = 1;
    }

    // 10. Final Receipt
    printf("\n----- Receipt -----\n");
    if (strcmp(flavor, "Invalid") != 0)
        printf("Flavor: %s\n", flavor);
    printf("Scoops: %d\n", scoops);
    printf("Cone Type: %s\n", cone_type);
    printf("Sprinkles: %s\n", (sprinkles == 'Y' || sprinkles == 'y') ? "Yes" : "No");
    printf("Day: %s\n", Discount ? "Weekend (10%% discount applied)" : "Weekday");
    if (childDiscount)
        printf("Child Discount Applied: -$1.00\n");
    if (Topping)
        printf("Free Topping Offer: Yes\n");
    else
        printf("Free Topping Offer: No\n");
    if (cardFee)
        printf("Card Processing Fee: +$0.50\n");
    printf("Payment: %s\n", payment == 2 ? "Card" : "Cash");
    printf("Total Amount: $%.2f\n", total);


    return 0;
}
