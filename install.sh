#!/bin/bash

# 判断是否有build目录
if [ ! -d "build" ]; then
    # 如果没有build目录，执行以下操作
    mkdir build
    cd build
    ../configure --prefix=$RISCV
    cd ..
fi

# 进入build目录并执行编译和安装
cd build
make
# 使用echo和管道来自动输入sudo密码
echo "SUDO PASSWORD" | sudo -S make install