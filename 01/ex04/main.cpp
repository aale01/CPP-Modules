/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abecucci <abecucci@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/11 18:08:25 by abecucci          #+#    #+#             */
/*   Updated: 2026/05/11 18:58:50 by abecucci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.h"

int main(int argc, char **argv)
{
	if ( argc != 4 )
		return ( std::cout << "Only 3 mandatory arguments accepted!" <<
			std::endl, 1 );

	std::string const inputFilename = argv[1];
	std::string const outputFilename = inputFilename + ".replace";
	std::string s1 = argv[2];
	std::string s2 = argv[3];

	std::ifstream ifs( inputFilename.c_str() );
	if ( !ifs )
		return ( std::cout << "File " << inputFilename << " cannot be opened!"
			<< std::endl, 1 );
	std::ofstream ofs( outputFilename.c_str() );
	if ( !ofs )
		return ( std::cout << "File " << inputFilename << " cannot be created!"
			<< std::endl, 1 );

	std::string content;
	std::string line;

	while ( std::getline(ifs, line) )
	{
		content += line;
		if ( !ifs.eof() )
			content += "\n";
	}

	if ( s1.compare(s2) != 0 )
		replaceAll(content, s1, s2);

	ofs << content;

	ifs.close();
	ofs.close();

	return 0;
}
