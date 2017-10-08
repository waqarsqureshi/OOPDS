#include <fstream>
#include <iostream>
#include <sstream>
#include <string>

using namespace std;

void StringStreamExample(){
   int first ;
   char second ;
   string third ;
   stringstream ss ;
   
   ss<< "1: Minecraft";
   ss>>first;
   ss>>second;
   ss>>third;
   cout<<first<<endl<<second<<endl<<third<<endl;
}   
 
void FileStreamExample () {

   ofstream myFile ;
   myFile.open("game.txt") ;
   myFile<<"1: Minecraft"<<endl ;
   myFile.close() ;
   ifstream myFile2("game.txt");
   string line ;
   if(!(myFile2.good())){
	cerr << "Error Reading File : "<< endl;	
   }
   else{
	getline(myFile2,line);
        cout<<line<<endl;
   }
   myFile2.close() ;

}

int main() {
 
   FileStreamExample();
   cout<<"========================"<<endl;
   //StringStreamExample();
}
