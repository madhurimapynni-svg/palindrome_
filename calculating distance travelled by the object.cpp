#include <stdio.h>

int main() {
    float speed, time, distance;

    // Input values
    printf("Enter speed of the object (in m/s or km/hr): ");
    scanf("%f", &speed);

    printf("Enter time traveled (in seconds or hours): ");
    scanf("%f", &time);

    // Calculate distance
    distance = speed * time;

    // Display result
    printf("Distance travelled by the object = %.2f\n", distance);

    return 0;
}

