#include "Account.hpp"
#include <iostream>
#include <ctime>


int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

Account::Account(){
	this->_accountIndex = this->_nbAccounts;
	this->_amount = 0;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount << ";created" << std::endl;
	this->_nbAccounts++;
}

Account::Account(int initial_deposit){
	this->_accountIndex = this->_nbAccounts;
	this->_amount = initial_deposit;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount << ";created" << std::endl;
	Account::_nbAccounts++;
	Account::_totalAmount += initial_deposit;
}

Account::~Account(){
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount << ";closed" << std::endl;
	Account::_nbAccounts--;
}

void	Account::_displayTimestamp(){
	time_t	curr_time;
	tm		*tm_local;

	curr_time = time(NULL);
	tm_local = localtime(&curr_time);
	std::cout << "[" << tm_local->tm_year + 1900 << tm_local->tm_mon + 1 << tm_local->tm_mday;
    std::cout << "_" << tm_local->tm_hour << tm_local->tm_min << tm_local->tm_sec << "] ";
}

int	Account::getNbAccounts(){
	return Account::_nbAccounts;
}

int	Account::getTotalAmount(){
	return Account::_totalAmount;
}

int	Account::getNbDeposits(){
	return Account::_totalNbDeposits;
}

int	Account::getNbWithdrawals(){
	return Account::_totalNbWithdrawals;
}

void	Account::displayAccountsInfos(){
	Account::_displayTimestamp();
	std::cout << "accounts:" << Account::getNbAccounts() << ";total:" << Account::getTotalAmount();
	std::cout << ";deposits" << Account::getNbDeposits() << ";withdrawals:" << Account::getNbWithdrawals() << std::endl;
}

void	Account::makeDeposit(int deposit){
	Account::_displayTimestamp();
	this->_nbDeposits++;
	Account::_totalNbDeposits++;
	Account::_totalAmount += deposit;
	std::cout << "index:" << this->_accountIndex << ";p_amount:" << this->_amount << ";deposit:" << deposit;
	this->_amount += deposit;
	std::cout << ";amount:" << this->_amount << ";nb_deposits:" << this->_nbDeposits << std::endl;
}

bool	Account::makeWithdrawal(int withdrawal){
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";p_amount:" << this->_amount;
	if (this->_amount < withdrawal)
	{
		std::cout << ";withdrawal:refused" << std::endl;
		return false;
	}
	Account::_totalNbWithdrawals++;
	Account::_totalAmount -= withdrawal;
	this->_nbWithdrawals++;
	this->_amount -= withdrawal;
	std::cout << ";withdrawal:"  << withdrawal << ";amount:" << this->_amount << ";nb_withdrawals:" << this->_nbWithdrawals << std::endl;
	return true;
}

int		Account::checkAmount() const{
	if (this->_amount > 0)
		return 1;
	return 0;
}

void	Account::displayStatus() const{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount;
	std::cout << ";deposits:" << this->_nbDeposits << ";withdrawals:" << this->_nbWithdrawals << std::endl;
}
