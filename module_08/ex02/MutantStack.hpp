/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnamnil <pnamnil@student.42bangkok.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 08:03:54 by pnamnil           #+#    #+#             */
/*   Updated: 2024/02/29 10:39:56 by pnamnil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <stack>

template<class T>
class MutantStack : public std::stack<T>
{
private:
    /* data */
public:
    MutantStack() : std::stack<T>() {}
    MutantStack(MutantStack const &rhs) {
        *this = rhs;
    }
    ~MutantStack() {};
    
    MutantStack & operator=(MutantStack const &rhs) {
        if (this != &rhs) {
            std::stack<T>::operator=(rhs);
        }
        return (*this);
    }

    typedef typename std::stack<T>::container_type::iterator iterator;
    iterator begin() {return std::stack<T>::c.begin();}
    iterator end() {return std::stack<T>::c.end();}
};


#endif