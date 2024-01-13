using namespace std;
#include <string>
class buku
{
public:
    // attribute
    int id;
    string judul;
    string sinopsis;
    int halaman;
    string penulis;
    int tahun;
    string penerbit;
    // constructor
    // default constructor
    buku() : id(0), judul(""), sinopsis(""), halaman(0), penulis(""), tahun(0), penerbit("") {}

    // parameterized constructor
    buku(int ID, string Judul, string Sinopsis, int Halaman, string Penulis, int Tahun, string Penerbit)
        : id(ID), judul(Judul), sinopsis(Sinopsis), halaman(Halaman), penulis(Penulis), tahun(Tahun), penerbit(Penerbit) {}
};
