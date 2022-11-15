#include <iostream>
using namespace std;

int main()
{
    int n, type;
    setlocale(0, "");

    cout << "Введите количество чисел: ";
    cin >> n;

    int* numbers = new int[n];

    for (int i = 0; i < n; i++) {
        numbers[i] = rand() % 9 + 1;
        cout << "Записали в элемент массива под номером " << i + 1 << " число: " << numbers[i] << endl;
    }

    //Вывод чисел
    cout << "Получаем ряд чисел: ";

    for (int i = 0; i < n; i++) {
        cout << numbers[i] << " ";
    }

    cout << endl;

    // Сортировка
    cout << "1 - по убывнию \n\
2 - по возрастанию\n\
Введите тип сортировки: ";

    cin >> type;

    switch (type)
    {
        case 1: {
            for (int i = 0; i < n; i++) {
                bool flag = true;
                for (int j = 0; j < n - (i + 1); j++) {
                    if (numbers[j] < numbers[j + 1]) {
                        flag = false;
                        swap(numbers[j], numbers[j + 1]);
                    }
                }
                if (flag) {
                    break;
                }
            }

            //Вывод результата
            cout << "Результат сортировки по убыванию: ";

            for (int i = 0; i < n; i++) {
                cout << numbers[i] << " ";
            }

            cout << endl;

            break;
        }
        case 2: {
            for (int i = 0; i < n; i++) {
                bool flag = true;
                for (int j = 0; j < n - (i + 1); j++) {
                    if (numbers[j] > numbers[j + 1]) {
                        flag = false;
                        swap(numbers[j], numbers[j + 1]);
                    }
                }
                if (flag) {
                    break;
                }
            }

            //Вывод результата
            cout << "Результат сортировки по возрастанию: ";

            for (int i = 0; i < n; i++) {
                cout << numbers[i] << " ";
            }

            cout << endl;
            break;
        }
        default: {
            cout << "Неизвестный тип сортировки!";
            break;
        }
    }
    return 0;
}
