#include <iostream>
#include <windows.h> // not cross platform. Switch to boost or QT for cross platform


void execute(std::string file) {
	std::wstring wfile(file.begin(), file.end());

	ShellExecute(NULL, TEXT("open"), wfile.c_str(), NULL, NULL, SW_SHOWDEFAULT);
}
int main() {
	std::string file1 = "C:\Programs\Fab\Fab_x64.exe";
	std::string file2 = "https://app.tuta.com/mail/O7v3CT--0o-9";

	execute(file1);

	execute(file2);
}