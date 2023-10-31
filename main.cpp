#include "Header.h"

// Функція для знаходження максимального значення в одновимірному масиві
int findMax(const int arr[], int size) {
    int maxVal = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > maxVal) {
            maxVal = arr[i];
        }
    }
    return maxVal;
}

// Функція для знаходження максимального значення в двовимірному масиві
int findMax(const int arr[][100], int rows, int cols) {
    int maxVal = arr[0][0];
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (arr[i][j] > maxVal) {
                maxVal = arr[i][j];
            }
        }
    }
    return maxVal;
}

// Функція для знаходження максимального значення в тривимірному масиві
int findMax(const int arr[][100][100], int dim1, int dim2, int dim3) {
    int maxVal = arr[0][0][0];
    for (int i = 0; i < dim1; i++) {
        for (int j = 0; j < dim2; j++) {
            for (int k = 0; k < dim3; k++) {
                if (arr[i][j][k] > maxVal) {
                    maxVal = arr[i][j][k];
                }
            }
        }
    }
    return maxVal;
}

// Функція для знаходження максимального значення між двома цілими числами
int findMax(int a, int b) {
    return (a > b) ? a : b;
}

// Функція для знаходження максимального значення серед трьох цілих чисел
int findMax(int a, int b, int c) {
    return findMax(a, findMax(b, c));
}

int main() {
    system("chcp 1251");
    system("cls");
    int arr1D[] = { 3, 7, 1, 12, 9, 4 };
    int arr2D[][100] = { {1, 2, 3}, {4, 5, 6}, {7, 8, 9} };
    int threeDArray[][100][100] = {
        {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}},
        {{9, 8, 7}, {6, 5, 4}, {3, 2, 1}}
    };
    int a = 10, b = 20, c = 15;

    int max1D = findMax(arr1D, 6);
    int max2D = findMax(arr2D, 3, 3);
    int max3D = findMax(threeDArray, 2, 3, 3);
    int max2Int = findMax(a, b);
    int max3Int = findMax(a, b, c);

    std::cout << "Максимальне значення в одновимірному масиві: " << max1D << std::endl;
    std::cout << "Максимальне значення в двовимірному масиві: " << max2D << std::endl;
    std::cout << "Максимальне значення в тривимірному масиві: " << max3D << std::endl;
    std::cout << "Максимальне значення між двома цілими числами: " << max2Int << std::endl;
    std::cout << "Максимальне значення серед трьох цілих чисел: " << max3Int << std::endl;

    return 0;
}

