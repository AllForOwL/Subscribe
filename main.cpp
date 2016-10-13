#include <iostream>
#include <string>

int main()
{
	setlocale(LC_ALL, "russian");

	std::string _str;

	std::cout << "¬вед≥ть стр≥чку : ";
	std::getline(std::cin, _str);

	int _position = 0;
	std::cout << "¬вед≥ть позиц≥ю : ";
	std::cin >> _position;

	int _length = 0;
	std::cout << "¬вед≥ть довжину : ";
	std::cin >> _length;

	for (int i = 0; i < _length; i++)
	{
		_str[_position] = ' ';
		_str[_position] = _str[_position + 1];

		for (int j = _position + 1; j < _str.size() - 1; j++)
		{
			_str[j] = _str[j + 1];
		}
	}
	std::cout << _str << std::endl;

	system("pause");
	return 0;
}