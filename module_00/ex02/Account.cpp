/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnamnil <pnamnil@student.42bangkok.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 06:52:07 by pnamnil           #+#    #+#             */
/*   Updated: 2024/02/03 08:35:24 by pnamnil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>

Account::Account(int initial_deposit)
{
    // non member
    _nbAccounts += 1; 
    _totalAmount += initial_deposit;

    // member
    _accountIndex = _nbAccounts - 1;
    _amount = initial_deposit;
    _nbDeposits = 0;
    _nbWithdrawals = 0;
    
    std::cout << "[19920104_091532]" << " index:" << _accountIndex
        << ";amount:" << _amount  << ";created" << std::endl;
}

Account::~Account(void){
    std::cout << "[19920104_091532]"
        << " index:" << _accountIndex
        << ";amount:" << _amount
        << ";closed" 
        << std::endl;
}

void Account::displayAccountsInfos(void)
{
    std::cout << "[19920104_091532]" 
        << " accounts:" << _nbAccounts
        << ";total:" << getTotalAmount()
        << ";deposits:" << _totalNbDeposits 
        << ";withdrawals:" << _totalNbWithdrawals <<std::endl;
}

void Account::displayStatus(void) const
{
    std::cout << "[19920104_091532]"
        << " index:" << _accountIndex
        << ";amount:" << _amount
        << ";deposits:" << _nbDeposits
        << ";withdrawals:" << _nbWithdrawals
        << std::endl;
}

void Account::makeDeposit(int deposit)
{
    _nbDeposits += 1;
    std::cout << "[19920104_091532]"
        << " index:" << _accountIndex
        << ";p_amount:" << _amount
        << ";deposit:" << deposit
        << ";amount:" << _amount + deposit
        << ";nb_deposits:" << _nbDeposits
        << std::endl;
    _amount += deposit;
    
    // non member
    _totalAmount += deposit;
    _totalNbDeposits += 1;
}

bool Account::makeWithdrawal(int withdrawal)
{
    if (_amount - withdrawal < 0)
    {
        std::cout << "[19920104_091532]"
            << " index:" << _accountIndex
            << ";p_amount:" << _amount
            << ";withdrawal:refused"
            << std::endl;
        return (false);
    }
    _nbWithdrawals += 1;
    std::cout << "[19920104_091532]"
    << " index:" << _accountIndex
    << ";p_amount:" << _amount
    << ";withdrawal:" << withdrawal
    << ";amount:" << _amount - withdrawal
    << ";nb_withdrawals:" << _nbWithdrawals
    << std::endl;
    _amount -= withdrawal;
    
    // non member
    _totalAmount -= withdrawal;
    _totalNbWithdrawals += 1;
    
    return (true);
}

/* ============ geter & seter ================= */

int	Account::getNbAccounts(void)
{
    return (_nbAccounts);
}

int Account::getTotalAmount(void)
{
    return (_totalAmount);
}

int Account::getNbDeposits(void)
{
    return (_totalNbDeposits);
}

int Account::getNbWithdrawals(void)
{
    return (_totalNbWithdrawals);
}

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;
