#include <iostream>
#include <fstream>

using namespace std;

int main() {
	cout<<"\t\t******WELCOME******\n\t******Word Count Program******\n\n";
	cout<<"******************************************************\n";
	
	ifstream inputFileStream("myFile.txt");  	//Enter Your file directory in double cautation area
	
	if(!inputFileStream.is_open()) {
		cout<<"ERROR in opening the File\n";
		return 1;
	}
	
	int wrdcnt=0;
	string wrd;
	
	while (inputFileStream >> wrd) {
		++wrdcnt;
	}
	
	cout<<"\nTotal numbers of words in your file are ->   "<<wrdcnt<<endl;

		
	return 0;
		
}
