#include <iostream>
#include "model.h"
//  #include "node.h"
main()
{

    bukuModel books;
    books.tambahBuku(11, "Para pencari Tuhan", "Sinopsis Buku", 200, "Penulis Buku", 2022, "Penerbit Buku");
    books.lihatBuku();
}