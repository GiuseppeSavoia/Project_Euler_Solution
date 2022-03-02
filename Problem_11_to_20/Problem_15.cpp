// Lattice paths

// Starting in the top left corner of a 2×2 grid, and only being able to move to the right and down, there are exactly 6 routes to the bottom right corner.
//How many such routes are there through a 20×20 grid?

#include <iostream>
#include <vector>

uint64_t lattice_path(size_t side){
  
  std::vector< uint64_t > grid((side+1)*(side+1),1);

  for (int x = side-1; 0 <= x ; x--) {
    for (int y = side-1; 0 <= y; y--) {
      int pos = (y*(side+1))+x;
      grid.at(pos) = grid.at(pos+1) + grid.at(pos+(side+1));
    }
  }
  return grid.at(0);
}


int main(int argc, char const *argv[]){

    std::cout << "Answer: " << lattice_path(20) << std::endl;
    
    return 0;
}

