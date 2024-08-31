#include <iostream>
#include <string>

class Counter {
private:
    int value;

public:
    // Конструктор по умолчанию
    Counter() : value(1) {}

    // Конструктор с параметром
    Counter(int initialValue) : value(initialValue) {}

    // Метод для увеличения значения счетчика на 1
    void increment() {
        value++;
    }

    // Метод для уменьшения значения счетчика на 1
    void decrement() {
        value--;
    }

    // Метод для получения текущего значения счетчика
    int getValue() const {
        return value;
    }
};

int main() {
    std::string userInput;
    int initialValue;
    Counter counter;

    // Спросить у пользователя, хочет ли он установить начальное значение
    std::cout << "Вы хотите указать начальное значение счётчика? Введите да или нет: ";
    std::cin >> userInput;

    if (userInput == "да") {
        std::cout << "Введите начальное значение счётчика: ";
        std::cin >> initialValue;
        counter = Counter(initialValue); // Создаем объект с начальным значением
    } else {
        counter = Counter(); // Создаем объект с начальным значением по умолчанию
    }

    // Основной цикл для ввода команд пользователя
    char command;
    do {
        std::cout << "Введите команду ('+', '-', '=' или 'x'): ";
        std::cin >> command;

        switch (command) {
            case '+':
                counter.increment();
                break;
            case '-':
                counter.decrement();
                break;
            case '=':
                std::cout << counter.getValue() << std::endl;
                break;
            case 'x':
                std::cout << "До свидания!" << std::endl;
                break;
            default:
                std::cout << "Неизвестная команда. Пожалуйста, введите '+', '-', '=' или 'x'." << std::endl;
                break;
        }
    } while (command != 'x');

    return 0;
}