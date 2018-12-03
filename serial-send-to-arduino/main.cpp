#include <Windows.h>
#include <iostream>
#include "SerialWrapper.h"

void main(void) {
	SerialWrapper serial(7);
	serial.begin(9600);

	serial.write('A');//1byte送る

	char multi_letter[2] = { 'B','C' };
	serial.write(multi_letter, 2);//複数byte送る

	while (true)
	{
		//受け取ったデータを表示する
		int get_ascii_number = serial.read();
		if (get_ascii_number != -1)
		{
			char get_char = get_ascii_number;
			std::cout << get_char;
		}
	}
}

