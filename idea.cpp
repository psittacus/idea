#include <iostream>
#include <fstream>									//file streams

using namespace std;


int main(int argc, char const *argv[]) {
	ofstream out;
	ifstream in;
	string idea;

	if(argc == 1){									//if only "idea" is written
			out.open("ideas", ofstream::app);		//appends the written to the textfile
		cout << "Write your idea here:" << endl;
		getline(cin, idea);

		out << endl << idea; 
		out.close();
	} else if(*argv[1]=='r' || *argv[1] == 'read'){
		in.open("ideas");							//opens "ideas" - the idea textfile
 		string temp;
 		while(getline(in, temp)) {
     		cout << temp << endl;
 		}
	}

	return 0;
}