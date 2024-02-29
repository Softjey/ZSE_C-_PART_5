#include <iostream>
#include <limits>
using namespace std;

void fillMatrix(int **matrix, int width, int height) {
    for (int y = 0; y < height; y++) {
        for (int x = 0; x < width; x++) {
            cout << "Podaj element[" << y << "][" << x << "]: ";
            cin >> matrix[y][x];
        }
    }
}

int main() {
    const int HEIGHT = 5;
    const int WIDTH = 2;

    int **matrix = new int *[HEIGHT];
    for (int y = 0; y < HEIGHT; y++) {
        matrix[y] = new int[WIDTH];
    }

    fillMatrix(matrix, WIDTH, HEIGHT);

    float maxAverage = -numeric_limits<float>::max();
    int maxAverageIndex = 0;
    float minAverage = numeric_limits<float>::max();
    int minAverageIndex = 0;

    float averages[HEIGHT] = {0};

    for (int y = 0; y < HEIGHT; y++) {
        int sum = 0;

        for (int x = 0; x < WIDTH; x++) {
            sum += matrix[y][x];
        }

        float average = static_cast<float>(sum) / WIDTH;
        averages[y] = average;
        cout << "srednia w wierszu " << y << " wynosi: " << average << endl;

        if (average > maxAverage) {
            maxAverage = average;
            maxAverageIndex = y;
        }

        if (average < minAverage) {
            minAverage = average;
            minAverageIndex = y;
        }
    }

    cout << "Tablica średnich: [ ";
    for (float avg : averages) {
        cout << avg << " ";
    }
    cout << "]" << endl;

    cout << "Max[" << maxAverageIndex << "]: " << maxAverage << endl;
    cout << "Min[" << minAverageIndex << "]: " << minAverage << endl;

    return 0;
}
