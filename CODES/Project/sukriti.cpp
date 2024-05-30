#include <iostream>
#include <string>
#include <fstream>
#include <unordered_map>
#include <ctime>
#include <cstdlib>

using namespace std;

class OTP {
private:
    int value;
    time_t expirationTime;

public:
    OTP(int value) {
        this->value = value;
        this->expirationTime = time(NULL) + 60;  // OTP expires in 60 seconds
    }

    int getValue() {
        return value;
    }

    bool isExpired() {
        return time(NULL) > expirationTime;
    }
};

class OTPManager {
private:
    OTP* otp;

public:
    OTPManager() : otp(nullptr) {}

    ~OTPManager() {
        delete otp;
    }

    void generateOTP() {
        int value = rand() % 10000 + 1000;  // Generate random number for OTP
        otp = new OTP(value);
        cout << "" << endl;
        cout << "YOUR OTP IS: " << otp->getValue() << endl;
        cout << "" << endl;
    }

    bool verifyOTP(int value) {
        if (otp != nullptr && otp->getValue() == value && !otp->isExpired()) 
        {
            delete otp;
            otp = nullptr;
            return true;
        } else {
            cout << "Invalid OTP or expired" << endl;
            delete otp;
            otp = nullptr;
            return false;
        }
    }
};

class User {
public:
    string name;
    int password;
    int balance;
    int accountNumber;
    bool cardAvailable;
    int cardExpiryYear;
    bool upiEnabled;

    User() : name(""), password(0), balance(0), accountNumber(0), cardAvailable(false), cardExpiryYear(0), upiEnabled(false) {}

    User(string name, int password, int balance, int accountNumber, bool cardAvailable, int cardExpiryYear, bool upiEnabled) 
    {
        this->name = name;
        this->password = password;
        this->balance = balance;
        this->accountNumber = accountNumber;
        this->cardAvailable = cardAvailable;
        this->cardExpiryYear = cardExpiryYear;
        this->upiEnabled = upiEnabled;
    }
};

class BankManagement {
private:
    unordered_map<string, User> users;

public:
    BankManagement() {
        loadUsers();
    }

    void loadUsers() {
        ifstream infile("BankUserDetails.txt");
        if (infile.is_open()) {
            string name, cardAvailableStr, upiEnabledStr;
            int password, balance, accountNumber, cardExpiryYear;
            bool cardAvailable, upiEnabled;
            while (infile >> name >> password >> balance >> accountNumber >> cardAvailableStr >> cardExpiryYear >> upiEnabledStr) {
                cardAvailable = (cardAvailableStr == "yes");
                upiEnabled = (upiEnabledStr == "yes");
                users[name] = User(name, password, balance, accountNumber, cardAvailable, cardExpiryYear, upiEnabled);
            }
            infile.close();
        } else {
            cout << "Error opening file." << endl;
        }
    }

    User* authenticate(const string& username, int password) {
        if (users.find(username) != users.end() && users[username].password == password) {
            return &users[username];
        }
        return nullptr;
    }

    void showAccountDetails(User* user) {
        cout << "Name: " << user->name << endl;
        cout << "Balance in your account: " << user->balance << endl;
        cout << "Account Number: " << user->accountNumber << endl;
        cout << "Card Available: " << (user->cardAvailable ? "Yes" : "No") << endl;
        cout << "Card Expiry Year: " << user->cardExpiryYear << endl;
        cout << "UPI Enabled: " << (user->upiEnabled ? "Yes" : "No") << endl;
    }

    void withdrawAmount(User* user) {
        OTPManager otpManager;
        int amount;
        cout << "Total balance in the bank Rightnow: Rs " << user->balance << endl;
        cout << "Enter the amount you want to withdraw: ";
        cin >> amount;
        if (amount > user->balance) {
            cout << "Insufficient balance" << endl;
            return;
        }
        otpManager.generateOTP();
        int otp;
        cout << "Enter the OTP: ";
        cin >> otp;
        if (otpManager.verifyOTP(otp)) {
            user->balance -= amount;
            cout << "Balance after withdraw: Rs " << user->balance << endl;
        }
    }

    void addAmount(User* user) {
        OTPManager otpManager;
        int amount;
        cout << "Total balance in the bank Rightnow: Rs " << user->balance << endl;
        cout << "Enter the amount you want to add: ";
        cin >> amount;
        otpManager.generateOTP();
        int otp;
        cout << "Enter the OTP: ";
        cin >> otp;
        if (otpManager.verifyOTP(otp)) {
            user->balance += amount;
            cout << "Balance after adding amount: Rs " << user->balance << endl;
        }
    }

    void transferAmount(User* user) {
        int choice, amount;
        OTPManager otpManager;
        cout << "1: Transfer to Self\n2: Transfer to Another Account Holder" << endl;
        cin >> choice;
        cout << "Total balance in the bank Rightnow: Rs " << user->balance << endl;
        cout << "Enter the amount you want to transfer: ";
        cin >> amount;
        if (amount > user->balance) {
            cout << "Insufficient balance" << endl;
            return;
        }
        otpManager.generateOTP();
        int otp;
        cout << "Enter the OTP: ";
        cin >> otp;
        if (otpManager.verifyOTP(otp)) {
            if (choice == 1) {
                user->balance -= amount;
                user->balance += amount;  // Transfer to self is just a dummy operation here
                cout << "Amount transferred to self. Balance: Rs " << user->balance << endl;
            } else if (choice == 2) {
                string recipientName;
                cout << "Enter the recipient's name: ";
                cin >> recipientName;
                if (users.find(recipientName) != users.end()) {
                    user->balance -= amount;
                    users[recipientName].balance += amount;
                    cout << "Amount successfully transferred to " << recipientName << endl;
                    cout << "Your balance after transfer: Rs " << user->balance << endl;
                } else {
                    cout << "Recipient not found." << endl;
                }
            } else {
                cout << "Invalid choice." << endl;
            }
        }
    }

    void showAnnualInterest(User* user) {
        float interestRate = 0.1;
        cout << "Your annual interest is: " << user->balance * interestRate << endl;
        user->balance += user->balance * interestRate;
        cout << "Balance after adding interest: " << user->balance << endl;
    }

    void emergencyContact() {
        cout << "FOR EMERGENCY CASE" << endl;
        cout << "CONTACT US ON PHONE NO: 0333-1234567" << endl;
    }

    void adminMenu() {
        cout << "ADMIN MENU - COMPLETE DATABASE:" << endl;
        for (const auto& pair : users) {
            const User& user = pair.second;
            cout << "Name: " << user.name << endl;
            cout << "Password: " << user.password << endl;
            cout << "Balance: " << user.balance << endl;
            cout << "Account Number: " << user.accountNumber << endl;
            cout << "Card Available: " << (user.cardAvailable ? "Yes" : "No") << endl;
            cout << "Card Expiry Year: " << user.cardExpiryYear << endl;
            cout << "UPI Enabled: " << (user.upiEnabled ? "Yes" : "No") << endl;
        }
    }
};

int main() 
{
    srand(time(0)); // Seed the random number generator

    cout << "._________________________________________." << endl;
    cout << "|                                         |" << endl;
    cout << "|                                         |" << endl;
    cout << "|       SMART BANK MANAGEMENT SYSTEM      |" << endl;
    cout << "|                                         |" << endl;
    cout << "|_________________________________________|" << endl<<endl;

    BankManagement bankManagement;

    string username;
    int password;

    cout << "ENTER YOUR NAME: ";
    cin >> username;
    cout << "ENTER PASSWORD: ";
    cin >> password;

    User* user = bankManagement.authenticate(username, password);

    if (user) {
        cout <<endl << endl;
        cout << "YOU HAVE SUCCESSFULLY LOGGED IN\n" << endl;

        char ans;
        do {
            int choice;
            cout << "PRESS: 1 TO CHECK YOUR ACCOUNT DETAILS" << endl;
            cout << "PRESS: 2 TO WITHDRAW AMOUNT" << endl;
            cout << "PRESS: 3 TO ADD AMOUNT" << endl;
            cout << "PRESS: 4 TO TRANSFER AMOUNT" << endl;
            cout << "PRESS: 5 TO CHECK YOUR ANNUAL INTEREST" << endl;
            cout << "PRESS: 6 TO CONTACT US IN EMERGENCY CASE" << endl;
            cin >> choice;

            switch (choice) {
                case 1:
                    bankManagement.showAccountDetails(user);
                    break;
                case 2:
                    bankManagement.withdrawAmount(user);
                    break;
                case 3:
                    bankManagement.addAmount(user);
                    break;
                case 4:
                    bankManagement.transferAmount(user);
                    break;
                case 5:
                    bankManagement.showAnnualInterest(user);
                    break;
                case 6:
                    bankManagement.emergencyContact();
                    break;
                default:
                    cout << "Invalid choice" << endl;
            }

            cout << "\nDO YOU WANT TO CONTINUE (Y/N): ";
            cin >> ans;

        } while ((ans == 'Y') || (ans == 'y'));
        system("pause");
    } else {
        cout << "" << endl;
        cout << "WRONG USERNAME AND PASSWORD\n\nXXXXXXXXXXXXXXXXXXXXXXXX\n\nPLEASE ENTER THE CORRECT ONE" << endl;
        cout << "" << endl;
    }

    return 0;
}