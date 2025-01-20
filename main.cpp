#include <iostream>
#include <windows.h> // not cross platform. Switch to boost or QT for cross platform


void execute(std::string file) {
	std::wstring wfile(file.begin(), file.end());

	ShellExecute(NULL, TEXT("open"), wfile.c_str(), NULL, NULL, SW_SHOWDEFAULT);
}


std::string fileName(std::string filePath) {

	int startPos = filePath.find_last_of("\\");

	return (filePath.substr(startPos));
}
/*
void filesView(bool done = false) {

	std::cout << 
	
	filesView()
}
*/
int main() {

	int ans;

	std::cout << "What would you like to do?" << std::endl;
	std::cout << "execute files (1)" << std::endl;
	std::cout << "View current files (2)" << std::endl;
	std::cout << "Exit (0)" << std::endl;

	std::cin >> ans;


	switch (ans) {
	case 0:
		exit;
	case 1:
		//execute
		break;

	case 2:
		//viewing menu for all current files
		break;

	default:
		std::cout << "incorrect input." << std::endl;
	}



	std::string file1 = R"(C:\Programs\Fab\Fab_x64.exe)";

	std::cout << "\\" << std::endl;
	std::string file2 = "https://app.tuta.com/mail/O7v3CT--0o-9";

	//execute(file1);

	//execute(file2);
}