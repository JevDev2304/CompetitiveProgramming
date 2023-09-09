#include <iostream>
#include <fstream>
#include <sstream>
#include <cstring>
using namespace std;
void openFile(ifstream&, string);
string processFile(ifstream&);
string replace_char(string,char,char, char);
int main(){
	string text;
	//1. open the file
	ifstream inFile;
	openFile(inFile, "sample.txt");
	//2. process the file
	text = processFile(inFile);
	text = replace_char(text,'"','`','\'');
	cout << text;
	//3. close the file
	inFile.close();
	return 0;
}
string processFile(ifstream& inFile){
	string line, word;
	string text;
	while(!inFile.eof()){
		getline(inFile,line);
		if (inFile.good()){
			text = text + line+ "\n";
				}
				}
				return text;	
					}
void openFile(ifstream& inFile, string fname){
	inFile.open(fname);
	if (inFile.is_open()){
		cout << "Succesfully opened File" <<endl;
	}
	else{
		cout << "Failed to open the file" << endl;	
	}
}
string replace_char(string text,char character,char creplace_one,char creplace_two){
	bool state = false;
	for (int i =0; i<text.size();i++){
		if (text[i] == character && state == false){
			text[i]=creplace_one;
			text.insert(i+1,1,creplace_one);
			state = true;
		}
		else if (text[i] == character && state == true){
			text[i]=creplace_two;
			text.insert(i+1,1,creplace_two);
			state = false;
		}
	
	}
	return text;
}
