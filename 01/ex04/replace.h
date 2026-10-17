/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abecucci <abecucci@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/11 18:58:21 by abecucci          #+#    #+#             */
/*   Updated: 2026/05/11 19:00:23 by abecucci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REPLACE_H
#define REPLACE_H

#include <string>
#include <iostream>
#include <fstream>

void replaceAll(std::string & content, std::string const & oldStr,
	std::string const & newStr);

#endif //REPLACE_H
