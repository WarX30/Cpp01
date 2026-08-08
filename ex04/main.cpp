#include <cstddef>
#include <iostream>
#include <fstream>
#include <string>

int	error(const std::string& str, const std::string& msg)
{
	std::cerr << str << ": " << msg << std::endl;
	return 1;
}

void	readfile(std::ifstream& file, std::string& content)
{
	char	c;

	while (file.get(c))
		content.push_back(c);
}

void findAndReplace(const std::string& content, std::string& result,
		const std::string& s1, const std::string& s2)
{
	std::size_t	pos = 0;
	std::size_t	found;

	while ((found = content.find(s1, pos)) != std::string::npos)
	{
		result.append(content, pos, found - pos);
		result.append(s2);
		pos = found + s1.length();
	}
	result.append(content, pos, content.length() - pos);
}

int	main(int argc, char *argv[])
{
	if (argc != 4)
		return (error("usage", "./replace <filename> <s1> <s2>"));
	
	std::string	s1(argv[2]);
	std::string	s2(argv[3]);
	
	if (s1.empty())
		return (error("Error", "search string cannot be empty"));
	
	std::ifstream	input(argv[1]);
	
	if (!input.is_open())
		return (error("Error", "cannot open input file"));
	
	std::string outputFile = std::string(argv[1]) + ".replace";
	std::ofstream output(outputFile.c_str());
	
	if (!output.is_open())
		return (error("Error", "cannot create output file"));
	
	std::string	content;
	std::string	result;
	
	readfile(input, content);
	findAndReplace(content, result, s1, s2);
	output << result;
	if (!output)
	{
		input.close();
		output.close();
		return (error("Error", "cannot write to output file"));
	}
	input.close();
	output.close();
	return 0;
}
