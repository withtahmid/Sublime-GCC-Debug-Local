#include<bits/stdc++.h>
#include<ctime>
#include <sys/stat.h>
#include<unistd.h> 
#include <fstream>
using namespace std;

const string replace_with_date = " * Created: dd-mm-yy hh:mm";
const string template_path = "./Template.cpp";
const string target_directory = "./";

void create_files(int);
int main(){
	create_files(0);
}
void create_files(const int num_files){
	time_t rawtime;
  	struct tm* timeinfo;
  	char buffer[80];
 	time (&rawtime);
  	strftime(buffer,sizeof(buffer),"%d-%m-%Y %H:%M:%S",localtime(&rawtime));
  	string tstr(buffer);
  	string current_time = " * Created: " +  tstr;
	for(int i = 0; i < num_files; i++){
		if (i > 26) return;
		string line, fileName = target_directory + char(65 + i) + ".cpp";
	    ifstream ini_file{template_path};
	    ofstream out_file{fileName};
	    if (not (ini_file and out_file)) return;
	    while (getline(ini_file, line)) {
        	while(line.size() and line.back() == 13) line.pop_back();
        	if(line == replace_with_date) line = current_time;
            out_file << line << "\n";
        }
	    ini_file.close();
	    out_file.close();
	}
	cout << num_files << " files created \n";
}