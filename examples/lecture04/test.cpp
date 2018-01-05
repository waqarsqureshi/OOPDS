#include <stdio.h>
#include<iostream>
#include<cstring>
using namespace std;
int main( int argc, char** argv) {
        std::string argv1 = argv[1];
	cout<<argv[0]<<endl;
        cout<<argv[1]<<endl;
        cout<<argv[2]<<endl;
        if(argv1=="hi")
        cerr<<"Mother"<<endl;

	return 0;
}
