#include <fstream>
#include <iostream>
#include <vector>
#include "../Headers/FileManager.h"

//
// Created by dansecan on 31/08/22.
//
using namespace std;
void FileManager::openFile(string path){
    ifstream file;
    string data;
    file.open("../FilesCreated/text_file.txt");
    getline(file, data); //stores the data in a string
    file.close();

    vector<int> dataArray;
    //data into a vector
    int dataLen=0;
    while(data[dataLen]){
        dataLen++;
    }
    string num="";
    int j=0;
    for(int i=0;i<dataLen;i++){
        char actChar=data[i];
        if(actChar!=','){
            num+=actChar;
        }else{
            int inte=stoi(num);
            num="";
            dataArray.push_back(inte);
            j++;
        }
    }
    dataFile=dataArray;




}
int FileManager::partition(vector<int> &v, int start, int end){

    int pivot = end;
    int j = start;
    for(int i=start;i<end;++i){
        if(v[i]<v[pivot]){
            swap(v[i],v[j]);
            ++j;
        }
    }
    swap(v[j],v[pivot]);
    return j;

}
vector<int> FileManager::quickSort(vector<int> unordered, int start, int end) {
    if(start<end){
        int p = FileManager::partition(unordered,start,end);
        quickSort(unordered,start,p-1);
        quickSort(unordered,p+1,end);
    }
    return unordered;
}
vector<int> FileManager::QuickSort() {
    return FileManager::quickSort(dataFile,0,dataFile.size()-1);
}