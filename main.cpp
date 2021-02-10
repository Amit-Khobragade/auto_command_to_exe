#include <iostream>
#include <fstream>
#include <string>

int main( int argc, char* argv[] ){
	std::fstream fio( "commands.txt", std::ios::in);
	if( fio.is_open() ){
		std::string s;
		while (std::getline( fio, s ))
			system( s.c_str() );
		fio.close();
	} else {
		std::cout << "file not open ";
	}
	std::cout<<"\npress any key to continue";
	_getwch();
	return 0;
}