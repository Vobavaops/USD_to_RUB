#include <iostream>

int main() {
    // Обменные курсы
    double usd_to_rub = 73.50;
    double eur_to_rub = 87.20;
    
    // Ввод суммы и выбор валюты
    double amount;
    int choice;
    
    std::cout << "Введите сумму: ";
    std::cin >> amount;
    
    std::cout << "Выберите валюту:\n";
    std::cout << "1. USD\n";
    std::cout << "2. EUR\n";
    std::cin >> choice;
    
    // Конвертация валюты
    double converted_amount;
    
    switch (choice) {
        case 1:
            converted_amount = amount * usd_to_rub;
            std::cout << "Результат: " << converted_amount << " RUB\n";
            break;
        case 2:
            converted_amount = amount * eur_to_rub;
            std::cout << "Результат: " << converted_amount << " RUB\n";
            break;
        default:
            std::cout << "Неверный выбор валюты!\n";
            break;
    }
    
    return 0;
}
