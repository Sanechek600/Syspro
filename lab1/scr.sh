#! bin/bash
mkdir -p root/a_0/b_2
mkdir -p root/a_1/b_1
mkdir -p root/a_1/b_0/c_3

cd root

echo cat > a_2.txt
ln a_2.txt a_1/b_1/c_0.txt
ln -s a_2.txt a_1/b_1/c_2.txt

cd a_0/b_2
touch c_1.bin