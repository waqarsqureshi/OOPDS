#include <fstream>
#include <iostream>
using namespace std;
 
void ExampleFileStream () {
   char data[100];
   int age;
   char InputFile[100];
   // Get the name of the file
   cout << "Enter the name of the file with extenstion: Example: name.txt" << endl;
   cout << "Enter The file Name: "; 
   cin.getline(InputFile, 100);

   // open a file in write mode.
   ofstream outfile;
   outfile.open(InputFile);

   cout << "Writing to the file" << endl;
   cout << "Enter your name: "; 
   cin.getline(data, 100);

   // write inputted data into the file.
   outfile << data << endl;

   cout << "Enter your age: "; 
   cin >> age;
   cin.ignore();
   
   // again write inputted data into the file.
   outfile << age << endl;

   // close the opened file.
   outfile.close();

   // open a file in read mode.
   ifstream infile; 
   cout << "Enter the name of the File to read" << endl;
   cout << "Filename: "; 
   cin.getline(InputFile, 100);
   infile.open(InputFile); 
   if(!(infile.good())){
	cerr<<"Error: File does not exist!"<<endl;
   }
   // write the data at the screen.
   else{
   	cout << "Reading from the File: " <<InputFile<< endl; 
        infile >> data;
	cout << data;
	infile >> data;
	cout << " "<<data;
	infile >> data;
	cout << " "<<data;
	infile >> age;
	cout << " :"<< age << " years"<<endl; 
   }
   // close the opened file.
   infile.close();
}

int main() {

	ExampleFileStream();
}
