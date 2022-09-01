//
// Created by dansecan on 31/08/22.
//

#include <iostream>
#include <sstream>
#include <fstream>
#include "../Headers/CreateFiles.h"
using namespace std;

//mt19937 gen{ random_device()() };
//uniform_int_distribution<> dis(0, 255);
//ofstream file("../FilesCreated/text_file.txt");
//generate_n(ostream_iterator<char>(file, ""), sizeKb, [&]{ return dis(gen);});



void CreateFiles::create(int sizeKb, string fileName) {
    sizeKb=1024*sizeKb;//makes bytes into KB
    string chain="";
    int size= chain.size();
    while(size<sizeKb){
        int number=rand()%10;
        string num;
        stringstream ss;
        ss<<number;
        ss>>num;
        chain+=num+",";
        size=chain.size();
    }
    ofstream file("../FilesCreated/"+fileName+".txt");
    file<<chain;
    file.close();


}


