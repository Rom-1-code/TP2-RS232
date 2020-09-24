#pragma once
#include <Windows.h>
class RS232
{

private:

		HANDLE hcom;

public:

	int OuvrirPort();
	int LirePort();
	int EcrirePort();
	int FermerPort();


	








};

