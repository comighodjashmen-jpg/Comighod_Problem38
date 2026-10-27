#include <stdio.h>
int main(){
    int deliveries, liters;
    int waterLevel = 0;
    int totalAddedWater = 0;
    int rejectedDeliveries = 0;
    int capacity = 1000;
    int i = 1;

    printf("===Water Tank Delivery System===\n");
    printf("Maximum tank capacity: %d liters\n", capacity);
    printf("Enter the number of water deliveries: ");
    scanf("%d", &deliveries);

    while(deliveries <=0){
        printf("Invalid input! Enter a positive number: ");
        scanf("%d", &deliveries);
    }
    while (i <= deliveries){
        printf("\nDeliveries#%d\n", i);
        printf("Enter liters of water to add: ");
        scanf("%d", &liters);

        if (liters <=0){
            printf("Rejected!\n Liters must be greater than zero.\n");
            rejectedDeliveries++;
        }
        else if (liters > capacity - waterLevel){
            printf("Rejected!\n Exceeds the remaining capacity");
            rejectedDeliveries++;
        }
        else{
            waterLevel += liters;
            totalAddedWater += liters;
            printf("Delivery Accepted.\n");
        }
        printf("Current water level: %d liters\n", waterLevel);
        printf("Remaining capacity: %dliters\n", capacity - waterLevel);
        i++;
    }
    printf("\n===final summary===\n");
    printf("Total water added: %d liters\n", totalAddedWater);
    printf("Final water level: %d liters\n", waterLevel);
    printf("Remaining Capacity: %d liters\n", capacity - waterLevel);
    printf("Rejected deliveries: %d\n", rejectedDeliveries);

    return 0;
}