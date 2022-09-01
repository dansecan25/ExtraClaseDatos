#include <iostream>
#include <vector>
#include "Headers/CreateFiles.h"
#include "Headers/FileManager.h"

int main() {
    CreateFiles createFiles;
    createFiles.create(16,"text_file");
    FileManager Opener;
    Opener.openFile("sas");
    vector<int> reordered=Opener.QuickSort();
    for(auto &&num:reordered){
        cout<<num<<" ";
    }

    return 0;
}
