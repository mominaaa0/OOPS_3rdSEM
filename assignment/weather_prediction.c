// 17/09/25

/* 🔹 Complex & Rare Ideas
Weather Prediction Model (Math + Physics)
Input: humidity, temperature, pressure.
Output: Predicts rain possibility using simple physics formulas.
*/

#include <stdio.h>

int main() {
    float humidity, temperature, pressure;
    float score;

    printf("Enter Humidity (in %%): ");
    scanf("%f", &humidity);
    printf("Enter Temperature (°C): ");
    scanf("%f", &temperature);
    printf("Enter Pressure (hPa): ");
    scanf("%f", &pressure);

    // Simple formula (heuristic model)
    score = (humidity * 0.6) + (pressure / 100.0) - (temperature * 0.3);

    printf("\nWeather Prediction Report:\n");
    if (score > 50)
        printf("🌧 High chance of Rain.\n");
    else if (score > 30)
        printf("☁ Cloudy, moderate chance of Rain.\n");
    else
        printf("☀ Clear weather, low chance of Rain.\n");

    return 0;
}
