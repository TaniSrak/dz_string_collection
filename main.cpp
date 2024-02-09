#include <iostream>
#include <cstring>

class String
{
public:
	//конструктор по умолчанию
	String(int newSize = 80) : size(newSize)
	{
		data = new char[size];
		for (int i = 0; i < size; i++)
		{
			data[i] = '\0';
		}
	}

	// Конструктор, который создаёт строку и инициализирует её строкой, полученной от пользователя
	String(const char* str)
	{
		size = 0;
		while (str[size] != '\0')
		{
			size++;
		}
		data = new char[size];
		for (int i = 0; i < size; ++i)
		{
			data[i] = str[i];
		}
	}

	//деструктор
	~String()
	{
		delete[] data;
	}

	// Метод для ввода строки с клавиатуры
	void input()
	{
		std::cout << "Введите строку -> ";
		std::cin.getline(data, size);
	}

	// Метод для вывода строки на экран
	void conclusion() const {
		std::cout << "Cтрока: " << data << std::endl;
	}

private:
	static const int defaultSize = 80; 
	char* data; 
	int size;
};

int main() {
	setlocale(LC_ALL, "Russian");
	int n;

	String str2(92);
	str2.input();
	str2.conclusion();

	String str3("Я хз что можно здесь придумать.");
	str3.conclusion();


	return 0;
}