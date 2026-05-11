/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abecucci <abecucci@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/11 18:57:32 by abecucci          #+#    #+#             */
/*   Updated: 2026/05/11 19:47:22 by abecucci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.h"

void	replaceAll( std::string & content, std::string const & oldStr,
	std::string const & newStr)
{
	std::string result;
	size_t pos = 0;
	size_t found;

	while ((found = content.find(oldStr, pos)) != std::string::npos)
	{
		result += content.substr(pos, found - pos);
		result += newStr;
		pos = found + oldStr.length();
	}

	result += content.substr(pos);
	content = result;
	return ;
}