g++ -std=c++0x regression_tb_bxy_ur_8_opt.cpp bxy_ur_8_opt.cpp -I ../../.. -I /cad/xilinx/vivado/2017.2/Vivado_HLS/2017.2/include/ || { echo 'testbench compilation failed'; exit 1; }
./a.out
