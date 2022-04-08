#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(){
    string arr[12];
    int i=0;

  ifstream myFile;
  myFile.open("test.csv");

  while(myFile.good()){
      string line;
      getline(myFile, line, ',');
        arr[i]=line;
      
      for(int i=0;i<1;i++){
          cout << arr[i];
      }
  }

}  