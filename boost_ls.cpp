

#include <boost/shared_array.hpp> 
#include <iostream> 

int main() 
{ 
  boost::shared_array<int> i1(new int[2]); 
  boost::shared_array<int> i2(i1); 
  i1[0] = 1; 
  std::cout << i2[0] << std::endl; 
} 

#if 0
#include <boost/filesystem/path.hpp>
#include <boost/filesystem/operations.hpp>
#include <iostream>
 
void ls(boost::filesystem::path const &pfad) {
  if(!boost::filesystem::exists(pfad))
    std::cerr << "Pfad '" << pfad.native_file_string() << "' existiert nichtn";
  else
    std::cout << pfad.native_file_string()  << 'n';
}

int main(int argc,char **argv) {
  if(argc > 1)
    for(int i=1;i<argc;++i)
      ls(boost::filesystem::path(argv[i], boost::filesystem::native));
  else {
    std::cerr << "usage: " << *argv << "  <pfad> ...n";
    return 1;
  }
}
#endif
