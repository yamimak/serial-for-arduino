#include <Windows.h>
#include <iostream>
#include "SerialWrapper.h"

void main(void) {
	SerialWrapper serial(7);
	serial.begin(9600);

	serial.write('A');//1byte����

	char multi_letter[2] = { 'B','C' };
	serial.write(multi_letter, 2);//����byte����

	while (true)
	{
		//�󂯎�����f�[�^��\������
		int get_ascii_number = serial.read();
		if (get_ascii_number != -1)
		{
			char get_char = get_ascii_number;
			std::cout << get_char;
		}
	}
}

