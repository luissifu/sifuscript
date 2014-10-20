#!/bin/bash

cd sifuc
bison -d gramatica.yy
flex tokens.ll
cd ..
make sifuc
