#include <iostream>

struct Account {
    int balanceInPennies;
    
    Account()                            :balanceInPennies(0)                 {}
    Account(int _balanceInPennies)       :balanceInPennies(_balanceInPennies) {}
    
    int query()                 const {return balanceInPennies;                     }
    void deposit(unsigned int amount) {balanceInPennies += static_cast<int>(amount);}
    
    unsigned int withdraw(unsigned int amount);
    
};

unsigned int Account::withdraw(unsigned int amount){
    int newBalance = balanceInPennies - static_cast<int>(amount);
    
    if(newBalance < 0){
        std:: cout << "5 dollar penalty for attempting to withdraw more than avalailable " << std:: endl;
        
        balanceInPennies -= 500;
        return 0;
    } else {
        balanceInPennies = newBalance;
        return amount;
    }
}

struct Bank {
    Account checking;
    Account saving;
    
    Bank() : checking(0), saving(0) {}
    Bank(int checkingBalance, int savingBalance)
    : checking(checkingBalance), saving(savingBalance) {}
    
    void deposit (unsigned int amount, char account);
    void withdraw(unsigned int amount, char account);
    void transfer(unsigned int amount, char from, char to);
    void printBalances() const{std::cout << "checking: " << checking.query() << std:: endl;
        std::cout << "saving: " << saving.query() << std::endl;
    };
    
};

void Bank::deposit(unsigned int amount, char account){
    if(account == 'c') {checking.deposit(amount);}
    if(account == 's') {saving.deposit(amount);}
}

void Bank::withdraw(unsigned int amount, char account){
    if(account == 'c') {checking.withdraw(amount);}
    if(account == 's') {saving.withdraw(amount);}
}


void Bank::transfer(unsigned int amount, char from, char to){
    if(from == 'c' && to == 's'){
        if(checking.withdraw(amount)){
            saving.deposit(amount);
        }
    }
    if (from == 's' && to == 'c'){
        if(saving.withdraw(amount)){
            checking.deposit(amount);
        }
    }
}

int main(){
    
    Bank b(800,1200);
    b.printBalances();
    
    
    b.transfer(2000,'c','s');
    b.printBalances();
    
    return 0;
}
