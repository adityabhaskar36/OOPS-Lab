#include <iostream>
#include <string>

class BankAccount {
  private: 
    std::string accountNumber;
    double balance;

  public:
    BankAccount(const std::string & accNum, double initialBalance): accountNumber(accNum), balance(initialBalance) {}

    void deposit(double amount) {
      balance += amount;
      std::cout << "Deposit successful. Current balance: " << balance << std::endl;
    }

    void withdraw(double amount) {
      if (amount <= balance) {
        balance -= amount;
        std::cout << "Withdrawal successful. Current balance: " << balance << std::endl;
      } else {
        std::cout << "Insufficient balance. Cannot withdraw." << std::endl;
      }
    }
};

int main() {
  std::string sacno = "SB-123";
  double Opening_balance, deposit_amt, withdrawal_amt;
  Opening_balance = 1000;
  std::cout << "A/c. No." << sacno << " Balance: " << Opening_balance << std::endl;

  BankAccount account(sacno, 1000.0);

  deposit_amt = 1500;
  std::cout << "Deposit Amount: " << deposit_amt << std::endl;
  account.deposit(deposit_amt);

  withdrawal_amt = 750;
  std::cout << "Withdrawal Amount: " << withdrawal_amt << std::endl;
  account.withdraw(withdrawal_amt);

  withdrawal_amt = 1800;
  std::cout << "Attempt to withdrawal Amount: " << withdrawal_amt << std::endl;
  account.withdraw(withdrawal_amt);

  return 0;
}
