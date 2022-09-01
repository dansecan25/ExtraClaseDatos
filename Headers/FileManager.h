//
// Created by dansecan on 31/08/22.
//

#ifndef ET_FILEMANAGER_H
#define ET_FILEMANAGER_H

#include <string>

using namespace std;
class FileManager{
public:
    vector<int> dataFile;
    void openFile(string path);
    int partition(vector<int> &v, int start, int end);
    vector<int> quickSort(vector<int>, int start, int end);
    vector<int> QuickSort();
    void insertionSort(string file_path);
    void selectionSort(string file_path);
};
#endif //ET_FILEMANAGER_H
