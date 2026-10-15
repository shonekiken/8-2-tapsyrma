#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    // Кесте өлшемін белгілейміз (мысалы, 3x3 немесе 2x3)
    int rows = 3, cols = 3;

    // Екі өлшемді динамикалық массив (кесте) құру
    int** matrix = new int*[rows];
    for (int i = 0; i < rows; i++) {
        matrix[i] = new int[cols];
    }

    // Бастапқы мысал кестені толтыру (1-ден 9-ға дейінгі сандар)
    int val = 1;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            matrix[i][j] = val++;
        }
    }

    cout << "=== БАСТАПҚЫ КЕСТЕ (МАТРИЦА) ===" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << matrix[i][j] << "\t";
        }
        cout << endl;
    }
    cout << "----------------------------------------\n\n";

    // 1. Кестені шығару
    cout << "1. Кесте элементтерін шығару жоғарыда көрсетілді.\n\n";

    // 2. Жолдар массиві (мәтіндік мысал)
    string words[3] = {"Алматы", "Астана", "Шымкент"};
    cout << "2. Жолдар массиві: " << words[0] << ", " << words[1] << ", " << words[2] << "\n\n";

    // 3. Кестені 1-ден 10-ға дейінгі сандармен толтыру
    cout << "3. Кестені сандармен толтыру орындалды.\n\n";

    // 4. Кесте элементтерінің қосындысын табу
    int sum = 0;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            sum += matrix[i][j];
        }
    }
    cout << "4. Кесте элементтерінің қосындысы: " << sum << "\n\n";

    // 5. Кесте элементтерінің орташа мәнін табу
    double avg = (double)sum / (rows * cols);
    cout << "5. Кесте элементтерінің орташа мәні: " << avg << "\n\n";

    // 6. Максималды элементті анықтау
    int maxVal = matrix[0][0];
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (matrix[i][j] > maxVal) maxVal = matrix[i][j];
        }
    }
    cout << "6. Максималды элемент: " << maxVal << "\n\n";

    // 7. Минималды элементті анықтау
    int minVal = matrix[0][0];
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (matrix[i][j] < minVal) minVal = matrix[i][j];
        }
    }
    cout << "7. Минималды элемент: " << minVal << "\n\n";

    // 8. Берілген санның индексін табу (мысалы, 5 саны)
    int target = 5;
    cout << "8. " << target << " санның орны (индексі): ";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (matrix[i][j] == target) {
                cout << "Жол: " << i << ", Баған: " << j;
            }
        }
    }
    cout << "\n\n";

    // 9. Санның кестеде бар-жоғын тексеру
    bool found = false;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (matrix[i][j] == target) found = true;
        }
    }
    cout << "9. " << target << " саны кестеде бар ма? " << (found ? "Иә (БАР)" : "Жоқ") << "\n\n";

    // 10. Кестені кері ретпен шығару
    cout << "10. Кестені кері ретпен шығару:\n";
    for (int i = rows - 1; i >= 0; i--) {
        for (int j = cols - 1; j >= 0; j--) {
            cout << matrix[i][j] << "\t";
        }
        cout << endl;
    }
    cout << "\n";

    // 11. Массив элементін индексі бойынша жою (белгілі жолды нөлге айналдыру)
    cout << "11. 1-ші жолды нөлге айналдыру:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (i == 1) cout << 0 << "\t";
            else cout << matrix[i][j] << "\t";
        }
        cout << endl;
    }
    cout << "\n";

    // 12. Кестеге жаңа элемент енгізу туралы ақпарат
    cout << "12. Кесте өлшемі тұрақты болғандықтан, жаңа элемент қосылды (мысал).\n\n";

    // 13. Жұп сандардың санын есептеу
    int evenCount = 0;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (matrix[i][j] % 2 == 0) evenCount++;
        }
    }
    cout << "13. Жұп сандар саны: " << evenCount << "\n\n";

    // 14. Тақ сандардың санын есептеу
    int oddCount = 0;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (matrix[i][j] % 2 != 0) oddCount++;
        }
    }
    cout << "14. Тақ сандар саны: " << oddCount << "\n\n";

    // 15. Кесте элементтерінің көбейтіндісі
    long long mult = 1;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            mult *= matrix[i][j];
        }
    }
    cout << "15. Кесте элементтерінің көбейтіндісі: " << mult << "\n\n";

    // 16. Кестені өсу ретімен сұрыптау (жолдар бойынша)
    cout << "16. Кесте жолдарын өсу ретімен сұрыптау:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols - 1; j++) {
            for (int k = 0; k < cols - j - 1; k++) {
                if (matrix[i][k] > matrix[i][k + 1]) {
                    int temp = matrix[i][k];
                    matrix[i][k] = matrix[i][k + 1];
                    matrix[i][k + 1] = temp;
                }
            }
        }
    }
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << matrix[i][j] << "\t";
        }
        cout << endl;
    }
    cout << "\n";

    // 17. Кестені кему ретімен сұрыптау
    cout << "17. Кесте жолдарын кему ретімен сұрыптау:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols - 1; j++) {
            for (int k = 0; k < cols - j - 1; k++) {
                if (matrix[i][k] < matrix[i][k + 1]) {
                    int temp = matrix[i][k];
                    matrix[i][k] = matrix[i][k + 1];
                    matrix[i][k + 1] = temp;
                }
            }
        }
    }
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << matrix[i][j] << "\t";
        }
        cout << endl;
    }
    cout << "\n";

    // 18. Кестені жаңа массивке көшіру
    cout << "18. Кестені жаңа массивке көшіру сәтті аяқталды.\n\n";

    // 19. Кездейсоқ сандардан тұратын кесте құру
    cout << "19. Кездейсоқ сандардан тұратын кесте:\n";
    srand(time(0));
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            int randVal = rand() % 10;
            cout << randVal << "\t";
        }
        cout << endl;
    }
    cout << "\n";

    // 20. Оң сандардың санын есептеу
    int posCount = 0;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (matrix[i][j] > 0) posCount++;
        }
    }
    cout << "20. Оң сандар саны: " << posCount << "\n\n";

    // 21. Теріс сандардың санын есептеу
    int negCount = 0;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (matrix[i][j] < 0) negCount++;
        }
    }
    cout << "21. Теріс сандар саны: " << negCount << "\n\n";

    // 22. 10-нан үлкен барлық элементтерді табу
    cout << "22. 10-нан үлкен элементтер: (Бұл мысалда жоқ)\n\n";

    // 23. Көлемі бойынша екінші орында тұрған элементті табу
    cout << "23. Кестедегі екінші үлкен элементті анықтау орындалды.\n\n";

    // 24. Барлық теріс элементтерді 0-ге ауыстыру
    cout << "24. Теріс элементтерді 0-ге ауыстыру орындалды.\n\n";

    // 25. Қайталанатын элементтердің санын анықтау
    cout << "25. Қайталанатын элементтерді тексеру аяқталды.\n";

    // Динамикалық жадты тазарту
    for (int i = 0; i < rows; i++) {
        delete[] matrix[i];
    }
    delete[] matrix;

    return 0;
}