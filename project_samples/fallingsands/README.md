The provided code from this example has a **segmentation fault**. Why? We are not doing any bounds checking within our 2D grid for where we are creating particles, or where they are moving (i.e. checking that a particle moving (x,y+1) is still in range.)

How to run: `g++ ./src/*.cpp -I./include -o prog -lsfml-system -lsfml-graphics -lsfml-window`
