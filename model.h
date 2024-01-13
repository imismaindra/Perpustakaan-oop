// model.h

#include <fstream>
#include <sstream>
#include <string>
#include <vector>
#include "node.h"

using namespace std;

class bukuModel
{
private:
    vector<buku> bukuList;

public:
       void read()
    {
        ifstream file("../Database/database.txt");
        if (file.is_open())
        {
            // bukulist.clear();
            buku tempBuku;
            while (file >> tempBuku.id >> tempBuku.judul >> tempBuku.sinopsis >> tempBuku.halaman >> tempBuku.penulis >> tempBuku.tahun >> tempBuku.penerbit)
            {
                bukuList.push_back(tempBuku);
            }

            file.close();
        }
    }
    void add(const buku &newBuku)
    {
        bukuList.push_back(newBuku);
        ofstream file("../Database/database.txt", ios::app);
        if (file.is_open())
        {
            file << newBuku.id << ",";
        }
    }
};
