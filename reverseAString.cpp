#include <iostream>
#include <string>
int main()
{
	std::string line;
	std::getline(std::cin, line);
	int s = line.size();
	for (int i = 0; i < s; i++)
	{
		char temp = line[i];
		line[i] = line[s - 1];
		line[s - 1] = temp;
		s--;
	}
	std::cout << line;
    return 0;
}