﻿#include <string>
#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <algorithm>
#include <locale>
#include <set>
#include <ctype.h>
#include <conio.h>
#include "printer.h"
#include "textsortfull.h"
#include "textsort.h"
#include "parent.h"
#include "symbols.h"
#include "textchanger.h"
#include "supereraser.h"
#include "Createfile.h"
#include "stringin.h"
#include "assistant.h"
#include "choose.h"

using namespace std;



int main()
{
	system("chcp 1251");
	string x, l;
	const int KEY_ESC = 27;
	cout << "To exit, press ESC. For help, write 'help'" << endl;
	assistant();
	cout<<endl;
	while (_kbhit() != KEY_ESC)
	{
		choose(l, x);
	}
}