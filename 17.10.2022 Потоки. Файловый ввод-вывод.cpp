#include <iostream>
#include <fstream>
//#include <string>
#include "Directory.h"
using namespace std;

int main() {
	Directory obj("Planet", "Daniil", "0983248032", "Erdberg", "C++");
	//obj.Input();
	//obj.Save();
	//obj.Print();
	
	Directory obj2("Flower", "Alina", "123809123", "Malina", "C#");
	//obj2.Input();
	//obj2.Save();
	obj2.Print();

}