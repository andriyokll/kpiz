#include <iostream>
#include <vector>
#include <string>
#include <Windows.h>

class Toy {
private:
    double price;
    std::string name;
    int quantity;

public:

    Toy(double p, std::string n, int q) : price(p), name(n), quantity(q) {}

    double getPrice() const { return price; }
    std::string getName() const { return name; }
    int getQuantity() const { return quantity; }

    void setPrice(double p) { price = p; }
    void setName(std::string n) { name = n; }
    void setQuantity(int q) { quantity = q; }

    void display() const {
        std::cout << "Назва: " << name << ", Ціна: " << price << ", Кількість на складі: " << quantity << std::endl;
    }
};

int main() {
    SetConsoleOutputCP(1251);
    std::vector<Toy> toys;

    toys.push_back(Toy(765.50, "Трансформер", 2));
    toys.push_back(Toy(899.99, "Hot Wheels", 9));
    toys.push_back(Toy(3500.00, "Конструктор LEGO", 17));

    std::cout << "Список іграшок:" << std::endl;
    for (const auto& toy : toys) {
        toy.display();
    }

    toys[0].setPrice(382.75);
    toys[0].setQuantity(15);

    std::cout << "\nОновлена інформація про першу іграшку:" << std::endl;
    toys[0].display();

    toys.pop_back();

    std::cout << "\nСписок іграшок після видалення останньої:" << std::endl;
    for (const auto& toy : toys) {
        toy.display();
    }

    return 0;
}
