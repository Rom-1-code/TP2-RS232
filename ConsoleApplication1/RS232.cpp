#include "RS232.h"
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>


using namespace std;

RS232::RS232() 
{


}

int RS232::OuvrirPort()
{
	hcom = CreateFile("COM1",,,,,,); 
	{


	}


	return 0;
}
int RS232::LirePort()
{


	return 0;
}
int RS232::EcrirePort()
{


	return 0;
}
int RS232::FermerPort()
{

	return 0;
}
