// программа "Кот говорит..."

#include <iostream>
#include <string>

// функция вывода рисунка с текстом
void say(std::string str)
{
	std::cout << "\n\n" << " < " << str << " > " << std::endl;
	std::cout <<"  ." <<std::endl;
	std::cout <<"   ．　＿＿ " <<std::endl;
	std::cout <<"    　<　　<＼ " <<std::endl;
	std::cout <<"     （ ಠ　ಠ 　)_ " <<std::endl;
	std::cout <<"    　'三大三 ／　＼ " <<std::endl;
	std::cout <<"     -　）　　/　　 \\  " <<std::endl;
	std::cout <<"     -／／^ i （ 　　 |二＼ " <<std::endl;
	std::cout <<"    (…(　 （…/二  ＿／　）) \n\n" <<std::endl;
}

int main(int argc, char const *argv[])
{
	setlocale(LC_ALL, "Russian");

	// если передаем аргументы, то argc будет больше 1(в зависимости от кол-ва аргументов)
	if (argc > 1)
	{
		// argv[] - вывод второй строки из массива указателей на строки(нумерация в строках начинается с 0 )
		say(argv[1]);
	} else {
		std::cout << "Нет аргументов!!!" << std::endl;
	}
	
	return 0;
}
