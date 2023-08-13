#include <iostream>
#include <string>
#include <vector>

class Customer {
private:
    std::string name;
    double balance;

public:
    Customer(const std::string& n, double b) : name(n), balance(b) {}

    std::string getName() const {
        return name;
    }

    double getBalance() const {
        return balance;
    }

    void deposit(double amount) {
        balance += amount;
        std::cout << "Deposited $" << amount << " into account. New balance: $" << balance << std::endl;
    }

    bool withdraw(double amount) {
        if (balance >= amount) {
            balance -= amount;
            std::cout << "Withdrawn $" << amount << " from account. New balance: $" << balance << std::endl;
            return true;
        } else {
            std::cout << "Insufficient balance." << std::endl;
            return false;
        }
    }
};

int main() {
    std::vector<Customer> customers;

    while (true) {
        std::cout << "Are you a customer? (yes/no): ";
        std::string answer;
        std::cin >> answer;

        if (answer == "yes") {
            std::cout << "Enter your name: ";
            std::string name;
            std::cin >> name;

            bool found = false;
            for (Customer& customer : customers) {
                if (customer.getName() == name) {
                    found = true;
                    while (true) {
                        std::cout << "Hello, " << name << "! Choose an option:\n"
                                  << "1. Deposit\n"
                                  << "2. Withdraw\n"
                                  << "3. Exit\n";
                        int option;
                        std::cin >> option;

                        if (option == 1) {
                            double amount;
                            std::cout << "Enter amount to deposit: ";
                            std::cin >> amount;
                            customer.deposit(amount);
                        } else if (option == 2) {
                            double amount;
                            std::cout << "Enter amount to withdraw: ";
                            std::cin >> amount;
                            customer.withdraw(amount);
                        } else if (option == 3) {
                            break;
                        } else {
                            std::cout << "Invalid option. Try again." << std::endl;
                        }
                    }
                    break;
                }
            }

            if (!found) {
                std::cout << "Customer not found." << std::endl;
            }
        } else if (answer == "no") {
            std::cout << "Creating a new account.\n"
                      << "Enter your name: ";
            std::string name;
            std::cin >> name;

            customers.push_back(Customer(name, 0.0));
            std::cout << "Account created successfully." << std::endl;
        } else {
            std::cout << "Invalid answer. Please enter 'yes' or 'no'." << std::endl;
        }
    }

    return 0;
}
