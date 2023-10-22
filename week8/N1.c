#include <stdio.h>

int main() {
    double mile_to_km = 0.621371;

    double distance = 10.0;
    double distance_from_start = 200.0;

    double total_distance = distance / mile_to_km;
    double distance_from_start_km = distance_from_start / 1000.0;

    double speed = 5.0;

    double remaining_distance = total_distance - distance_from_start_km;
    double time = remaining_distance / speed;

    printf("%.6f\n", time);

    return 0;
}