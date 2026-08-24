#include <iostream>
#include<string>
using namespace std;

int main()
{
  int pinv1;
  int pinv2;
  double balance;
  double widraw;
  double deposit;
  double star_balance;
  string service;
  string acc_type;

for (;;) {
  cout << "[choice] regular or premium\n";
  cout << "enter account type: ";
  cin >> acc_type;
  if (acc_type == "regular" || acc_type == "Regular"
      || acc_type == "premium" || acc_type == "Premium") {
     cout << "succesfully created [" << acc_type << "] account" << '\n';
     break;
  }
  else{ cout << "invalid acc type\n"; }
} // for
  cout << "create pin for [" << acc_type << "] account: ";
  cin >> pinv1;
  cout << "succesfully created pin for [" << acc_type << "] account\n";

//regular

if (acc_type == "regular") {
  for (;;) {
     cout << "enter starting balance: ₱";
     cin >> star_balance;
     cout << "enter pin for [" << acc_type << "] account: ";
     cin >> pinv2;
    if (pinv2 != pinv1) {
       cout << "invalid pin for [" << acc_type << "] account" << '\n';
    }
    else {
    if (star_balance < 500) {
    cout << "minimum deposit is 500php for " << acc_type << " acc\n";
    }
    else if (star_balance > 20000) {
    cout << "maximum deposit for " << acc_type << " is 20000php\n";
    }
    else { balance = star_balance;
    cout << "\nsuccesfully deposited: ₱" << star_balance << '\n';
    break;
    } //else v2
    } //else v1
  } // for

  for (;;) { 
  for (;;) {

    cout << "\n\t[choice]\n";
    cout << "\tdeposit\n";
    cout << "\twidraw\n";
    cout << "\tcheckball\n";
    cout << "\tquit\n";
    cout << "choice: ";
    cin >> service;
  if (service == "deposit" || service == "widraw"
      || service == "checkball" || service == "quit") {
      break;
    }
    else { cout << "\n\t! [invalid service] !\n"; }
  }
    if (service == "deposit") {
  for (;;) {
    cout << "enter amount: ₱";
    cin >> deposit;
    if (deposit > 20000) {
       cout << "maximum deposit for regular acc is 20000php\n";
    }
    else {
    if (balance > 20000) {
       cout << "balance excede for " << acc_type << '\n';
    }
    else {
    balance +=  deposit;
    cout << "\nsuccefull deposit ₱" << deposit << '\n';
    break;
    }
    }
  }
    }
// widraw
    if (service == "widraw") {
  for (;;) {
       cout << "enter amount: ₱";
       cin >> widraw;
    if (widraw > 20000) {
       cout << "limit exceeded at " << acc_type << " account\n";
    }
    if (widraw > balance) {
       cout << "insuficient balance ₱" << balance << '\n';
    }
    else {
    balance -= widraw;
    cout << "\nsuccesfully widrawed ₱" << widraw << '\n';
    break;
    }
    }
  }
    if (service == "checkball") {
       cout << "\nremaining balance ₱" << balance;
    }
// quit
    if (service == "quit") { break; }
  } //for
} // if regular

//premium

if (acc_type == "premium") {
  for (;;) {
     cout << "enter starting balance: ₱";
     cin >> star_balance;
     cout << "enter pin for [" << acc_type << "] account: ";
     cin >> pinv2;
    if (pinv2 != pinv1) {
       cout << "invalid pin for [" << acc_type << "] account" << '\n';
    } //if
    else {
    if (star_balance < 1000) {
    cout << "minimum deposit is 1000php for " << acc_type << " account\n";
    } //if
    else if (star_balance > 50000) {
    cout << "maximum deposit for " << acc_type << " is 50000php\n";
    } //else if
    else { balance = star_balance;
    cout << "\nsuccesfully deposited: ₱" << star_balance << '\n';
    break;
    } //else v2
    } //else v1
  } // for

  for (;;) {
// deposit
  for (;;) {

    cout << "\n\t[choice]\n";
    cout << "\tdeposit\n";
    cout << "\twidraw\n";
    cout << "\tcheckball\n";
    cout << "\tquit\n";
    cout << "choice: ";
    cin >> service;

    if (service == "deposit" || service == "widraw"
      || service == "checkball" || service == "quit") {
      break;
    }
    else { cout << "\n\t! [invalid service] !\n"; }
  }
    if (service == "deposit") {
  for (;;) {
    cout << "enter amount: ₱";
    cin >> deposit;
    if (deposit > 50000) {
       cout << "maximum deposit for regular acc is 50000php\n";
    }
    else {
    if (balance > 50000) {
       cout << "exceeding amount for " << acc_type << '\n';
    }
    else {
    balance += deposit;
    cout << "\nsuccefull deposit ₱" << deposit << '\n';
    break;
    }
    }
  }
    }
//widraw
  for (;;) {
    if (service == "widraw") {
       cout << "enter amount: ₱";
       cin >> widraw;
    if (widraw > 50000) {
       cout << "limit exceeded at "<< acc_type << " account\n";
    }
    if (widraw > balance) {
       cout << "insuficient balance ₱" << balance << '\n';
    }
    else {
    balance -= widraw;
    cout << "\nsuccesfully widrawed ₱" << widraw << '\n';
    break;
    }
    }
  }
//checkball
    if (service == "checkball") {
       cout << "\nremaining balance ₱" << balance;
    }
//quit
    if (service == "quit") { break; }
  } //for
} //if premium

} // main


