/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vescaffr <vescaffr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 11:40:04 by vescaffr          #+#    #+#             */
/*   Updated: 2023/03/06 13:23:07 by vescaffr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Contact
{
 private:
 std::string	first_name;
 std::string	last_name;
 std::string	nickname;
 std::string	phone_number;
 std::string	darkest_secret;
};

class Phonebook
{
 private:
 Contact _contacts[8];
};