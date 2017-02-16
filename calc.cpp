// As said before, the declaration of add is
// needed also here, where the function is used.
// Good thing we set it aside in a header file.
#include <sstream>
#include <iostream>
int main(int argc, char *argv[])
{
    if(argc != 3) return 1;
    int a, b;
    std::string sa(argv[1]);
    std::string sb(argv[2]);
    std::stringstream ssa(sa);
    std::stringstream ssb(sb);
    ssa >> a;
    ssb >> b;
    int c = add(a, b);
    std::cout << c;
return 0; }