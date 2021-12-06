/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-la-c <ade-la-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 17:29:43 by ade-la-c          #+#    #+#             */
/*   Updated: 2021/12/06 23:31:02 by ade-la-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <ctime>

Account::Account( int initial_deposit ) {

	this->_displayTimestamp();
	this->_totalAmount += initial_deposit;
	this->_accountIndex = this->_nbAccounts;
	this->_nbAccounts++;
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount:" << initial_deposit << ";";
	std::cout << "created" << std::endl;
	this->_amount = initial_deposit;
}

Account::~Account( void ) {

	this->_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount:" << this->_amount << ";";
	std::cout << "closed" << std::endl;
}

void	Account::makeDeposit( int deposit ) {

	this->_amount += deposit;
	this->_totalAmount += deposit;
	this->_nbDeposits++;
}

bool	Account::makeWithdrawal( int withdrawal ) {

	if (this->_amount >= withdrawal) {
		this->_amount -= withdrawal;
		this->_totalAmount -= withdrawal;
		this->_nbWithdrawals++;
		return true;
	}
	else
		return false;
}

void	Account::displayStatus( void ) const {

	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount:" << this->_amount << ";";
	std::cout << "deposits:" << this->_nbDeposits << ";";
	std::cout << "withdrawals:" << this->_nbWithdrawals << std::endl;
}

void	Account::displayAccountsInfos( void ) {

	Account::_displayTimestamp();
	std::cout << "accounts:" << Account::getNbAccounts() << ";";
	std::cout << "total:" << Account::getTotalAmount() << ";";
	std::cout << "deposits:" << Account::getNbDeposits() << ";";
	std::cout << "withdrawals:" << Account::getNbWithdrawals() << std::endl;

}

int 	Account::getNbAccounts( void ) {

	return Account::_nbAccounts;
}

int		Account::getTotalAmount( void ) {

	return Account::_totalAmount;
}

int		Account::getNbDeposits( void ) {

	return Account::_totalNbDeposits;
}

int		Account::getNbWithdrawals( void ) {

	return Account::_totalNbWithdrawals;
}

void	Account::_displayTimestamp( void ) {

	time_t		now = time(0);
	tm			*ltm = localtime(&now);

	std::cout << "[" << 1900 + ltm->tm_year;
	std::cout << 1 + ltm->tm_mon;
	std::cout << ltm->tm_mday << "";
	std::cout << "_" << 5 + ltm->tm_hour;
	std::cout << 30 + ltm->tm_min;
	std::cout << ltm->tm_min << "] ";
}

int		Account::_nbAccounts = 0;

int		Account::_totalAmount = 0;

int		Account::_totalNbDeposits = 0;

int		Account::_totalNbWithdrawals = 0;
