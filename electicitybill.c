#include <stdio.h>

int main() {
    int units;
    float bill = 0;

    printf("🔌 Electricity Bill Calculator (May 1st - June 1st)\n");
    printf("Enter total units consumed: ");
    scanf("%d", &units);

    if (units <= 30) {
        bill = units * 1.90;
    } else if (units <= 50) {
        bill = (30 * 1.90) + ((units - 30) * 3.00);
    } else if (units <= 100) {
        bill = (30 * 1.90) + (20 * 3.00) + ((units - 50) * 4.50);
    } else if (units <= 200) {
        bill = (30 * 1.90) + (20 * 3.00) + (50 * 4.50) + ((units - 100) * 6.00);
    } else if (units <= 300) {
        bill = (30 * 1.90) + (20 * 3.00) + (50 * 4.50) + (100 * 6.00) + ((units - 200) * 7.70);
    } else if (units <= 400) {
        bill = (30 * 1.90) + (20 * 3.00) + (50 * 4.50) + (100 * 6.00) + (100 * 7.70) + ((units - 300) * 9.00);
    } else if (units <= 800) {
        bill = (30 * 1.90) + (20 * 3.00) + (50 * 4.50) + (100 * 6.00) + (100 * 7.70) + (100 * 9.00) + ((units - 400) * 9.50);
    } else {
        bill = (30 * 1.90) + (20 * 3.00) + (50 * 4.50) + (100 * 6.00) + (100 * 7.70) + (100 * 9.00) + (400 * 9.50) + ((units - 800) * 10.00);
    }

    // Optional fixed charge
    bill += 30; // fixed meter charge

    printf("\n📊 Units Consumed: %d", units);
    printf("\n💰 Total Bill: ₹%.2f\n", bill);

    return 0;
}
